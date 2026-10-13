---
title: "Labview FPGA DAC"
htmlTitle: "Labview FPGA DAC - 湖中月影"
description: "始終認為 FIFO 架構是數位流的唯一解，雖然不是很新的概念，但對於一般的 DIYer 來說實作門檻不低(要嘛找齊需要的數位元件 layout..."
permalink: "/labview-fpga-dac.html"
layout: layouts/page.njk
bodyClass: "wsite-theme-light no-header-page wsite-page-labview-fpga-dac"
banner: false
navId: "305751715161188320"
snapshot: "2026-09-16"
snapshotTs: "20260916152400"
sourceUrl: "https://chihhanlin.weebly.com/labview-fpga-dac.html"
---

&nbsp;始終認為 FIFO 架構是數位流的唯一解，雖然不是很新的概念，但對於一般的 DIYer 來說實作門檻不低(要嘛找齊需要的數位元件 layout 好板子用單晶片寫韌體，不然就是用一塊 FPGA 或 DSP 通通搞定)，好在小弟我有作弊利器:NI 的 FPGA 模組可以拿來亂搞一些有的沒的。這次的主角 pxi-7852r ([http://sine.ni.com/nips/cds/view/p/lang/zht/nid/205131](http://sine.ni.com/nips/cds/view/p/lang/zht/nid/205131)) 在 NI 的 FPGA 產品裡頭算是上一世代中高階的產品，除了有一顆 xilinx Virtex-5 FPGA，還附帶幾個 1MS/s 16-bit 的類比輸出，所以很適合用來驗證自己撰寫的 FPGA code 有沒有按照原先的設計運作( 變數輸出到類比通道，接到耳擴上一聽即知)\
\
​&nbsp;

![Picture](/uploads/8/4/4/0/8440048/7681059_orig.jpg){@.none}

NI&pxi 的介紹請看前一篇介紹&nbsp;[/25343373272820432026207362212030070dac29992.html](/25343373272820432026207362212030070dac29992.html)&nbsp;就不另做說明了。\
​\
這個板子的DAC感覺挺普通，但用的是 Enhance R-2R 架構就特別有趣 ( 拆開來找 ic 的時候看到的是 AD8804，不是很確定是否用這個 trimDAC 下去兜的) ，FPGA 的參考振盪器 (40 MHz，100ppm=0.01%) 不是很特別的料件，規格書上給的 accuracy 是 250 ps peak-to-peak jitter (至少還是痛電一般消費級產品)，一般 xilinx FPGA 的開發版倒是放 50 MHz clock 的居多<br /><br />

![Picture](/uploads/8/4/4/0/8440048/4159046_orig.png){@.none}

在還不確定電路特性以前，還是先寫了簡單的 code 來測試數位輸出(觀察jitter) 與類比輸出(觀察 distorsion 跟 noise)\
​

:::::::::: multicol
::::::::: col 50%

![Picture](/uploads/8/4/4/0/8440048/9447643_orig.jpg){@.none}

老實講量起來(peak-to-peak jitter 略大於 1ns)比 02 US dragon 的同軸輸出還弱一點，不過也許得真的將上 SPDIF 模組弄好阻抗匹配才能站在一樣的基準上 pk&nbsp;

:::::::::
::::::::: col 50%

![Picture](/uploads/8/4/4/0/8440048/7588582_orig.jpg){@.none}

餵個1KHz 正弦波下去我整個心都涼了，仔細想想板子上的低通濾波應該是針對 1MS/s 的取樣率去設計的，應該要善加利用這點設計 interpolation module 與自製低通濾波

:::::::::
::::::::::

![Picture](/uploads/8/4/4/0/8440048/3924914_orig.jpg){@.none}

雜訊的峰對峰值將近 10mV ，預期整個動態範圍會被壓縮得很嚴重\
\
雖然對量測數字不太滿意，畢竟還是追求DIY 樂趣(真正的 programmable DAC 啊，很少有人可以這麼玩) 多於 Hi-Fi ，還是決定貫徹工業土豪流的意志把昂貴的生財工具改造成娛樂性質的配備：

:::::::::: multicol
::::::::: col 50%

![Picture](/uploads/8/4/4/0/8440048/4702025_orig.png){@.none}

:::::::::
::::::::: col 50%

![Picture](/uploads/8/4/4/0/8440048/422080_orig.png){@.none}

:::::::::
::::::::::

<br />FPGA 的部份很簡單用 state machine 的架構把系統狀態切成載入設定與 FIFO 讀值輸出給 analog output ，這個部份就是 labview 強大的地方了，把原本需要寫幾十頁 verilog HDL (硬體描述語言) 才能搞定的事用兩張圖輕鬆解決(同樣效能的模組賣人家五倍十倍的價格，但應用在 prototyping 帶來的時間效益與圖像化驗證的便利性令人難以拒絕)\
​

![Picture](/uploads/8/4/4/0/8440048/5219302_orig.png){@.none}

主程式寫起來比 pxi-4461 的 DAQ 控制更有彈性一點，根據設定的 FIFO 大小 (在 FPGA 上建構了 8172 pints 的大小的 FIFO)， 讀取 wav 檔切割成多個 slice 依照適當 delay 更新資料，讓資料流走 pc 端的 FIFO -> DMA 通道(直接記憶體存取) -> FPGA 的 FIFO -> 類比輸出就完成最簡單的非同步傳輸低 jitter 系統。這次使用 FPGA 實作的版本終於可以不用受限於見鬼的預設參數限制順順地放完任意長度的 wav 檔 (NI 的 DAQ 模組卡上的 FPGA 都是寫死的，沒有更動的空間)，未來還可以加入一些花俏的面板效果像是 &nbsp;spectrogram 之類的\
​

:::::::::: multicol
::::::::: col 49.999999999999%

![Picture](/uploads/8/4/4/0/8440048/7329799.png){@.none style="width:423;max-width:100%"}

UI 醜習慣了懶得修

:::::::::
::::::::: col 49.999999999999%

![Picture](/uploads/8/4/4/0/8440048/2354274.jpg){@.none style="width:163;max-width:100%"}

剪聽感冷冽的線來試試，搞不好特別適合這種幾乎沒有低通濾波的類型

:::::::::
::::::::::

![Picture](/uploads/8/4/4/0/8440048/7550960.jpg){@.none style="width:812;max-width:100%"}

其實光是這個左邊這個白色的接線盒就比一支鐵家的 W5000 還貴 (真．土豪流)。還沒入坑前對音響器材還抱有一些幻想，直到當了死大學生，開始接觸到很多高精度的儀器與線材之後就比較務實，更多時候想的是如何在有限的預算內達成相對好的效能，什麼發燒料、獨門秘方只要過不了 calibration 跟 A/B test 都是白搭。\
​

最後補充聽感： 意外地還不難聽!? &nbsp;我覺得跟 NOS (non-oversampling) DAC 的理念有點類似，反正後級跟發聲體都有自然的頻寬限制，直接把未濾波的 DAC 輸出接入耳擴也未嘗不可。接上 Lotus HA-9 +W1000X 讓我覺得比 md30 更加耐聽，細節變少了，但聲底居然更加自然。可惜這個模組 16-bit 的輸出範圍是 +-10V，幾乎沒有太多耳擴可以接受 full range 的輸入能正常發揮(HA-9 表現意外好，也許要一台一台嘗試) ，高底噪加上 5V 左右的擺幅等效上大概13-14 bit 的解析。不過 FPGA 架構就是寫起來有彈性，想到什麼數位處理的方式都可以簡單寫進去而不用控其他 DSP，看看 hugo 的架構圖：\
​

![Picture](/uploads/8/4/4/0/8440048/161935_orig.jpg){@.none}

<br />人家一塊普通的 spartan 6 就把 cross feed，interpolation 跟 noise shaper 都寫完了，有了效能曾經頂天的 virtex-5 還不能做出讓自己滿意的數位音效模組實在說不過去。接下來除了加入一些 interpolation module 以外還得多花功夫去挑到更出色的 DAC 來搭配解放 FPGA 的效能。
