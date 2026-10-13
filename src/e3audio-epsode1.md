---
title: "E3audio Epsode1"
htmlTitle: "E3audio Epsode1 - 湖中月影"
description: "本來想發R2R 的技術文(寫好了 24bit/352K 的I2S FPGA parser, 用 SPI 協定試了不少工業 string/R2R DAC,  自製的 R2R ladder 好不容易把 THD 壓到 70dB 勉強能聽的狀態),..."
permalink: "/e3audio-epsode1.html"
layout: layouts/page.njk
bodyClass: "wsite-theme-light no-header-page wsite-page-e3audio-epsode1"
banner: false
navId: "471134566468088063"
snapshot: "2026-09-16"
snapshotTs: "20260916160327"
sourceUrl: "https://chihhanlin.weebly.com/e3audio-epsode1.html"
---

本來想發R2R 的技術文(寫好了 24bit/352K 的I2S FPGA parser, 用 SPI 協定試了不少工業 string/R2R DAC, &nbsp;自製的 R2R ladder 好不容易把 THD 壓到 70dB 勉強能聽的狀態), 不過正好等很久的一件新玩具終於送上門, 答應人家要寫評測就先處理了<br />

<br />[​http://e3audio.com/%E7%94%A2%E5%93%81/](http://e3audio.com/%E7%94%A2%E5%93%81/)\
\
主角就是那台叫做 Epsode1 的一體機(網址太長請看官自己點連結), DAC晶片用主流的 9018 平衡輸出 A類線路, 因為對 DAC有信心所以背板給的是單端和平衡的analog out, 不過我個人更喜歡的是它的耳擴線路. 整體調音最合拍的耳機大概就是高阻抗的歐系品牌, Sennheiser HD800/600 可說是最佳搭配 (為啥跳掉 650/700 是因為手邊沒有), 早在測試機的時候就因為它推聲海系令人驚豔, 有質感的紮實低頻與空間感而訂下一隻 HD800, 同價位的一體機想要將 HD800 推出同樣質地的聲音幾乎是不可能. 這台機器唯一欠缺的就是消費者對於陌生品牌的接受程度, 不過我相信只要實際試聽過應該都會同意這是一部性價比極高的機器, 北部的鄉民比較容易找到試聽的地方, 南部的大概還要看該品牌跟通路談得如何, 真的有心想試也可以找我.&nbsp;\
​

![Picture](/uploads/8/4/4/0/8440048/sam-5837_orig.jpg){@.none}

回歸正題先來一張正面照. 從機構很容易評估一個新品牌到底是不是拼裝白牌, 這種比較凌厲的線條CNC件的質感很明顯是老 OEM/ODM 的手筆(至於幕後作誰的代工當然是禁忌不能談). 複合型的 Neutrik 平衡+6.3mm 母座同時插兩隻單端的耳機來聽是沒問題的(這個時候後面的 analog out 也是同時有作用的, 不能自由開關 DAC out/HP out倒也稱不上缺點), 圓孔導角的風格會讓人聯想到 HDVD800, 機殼好像也有全黑的版本, 不過霧面銀加上面板拉髮絲紋還是好看一些.\
\
GAIN 在試作機階段原本設計了四段阻抗(45, 150, 300, 600 之類的), 不過後來實際聽起來 600 ohm 的太亮, 45 ohm 的表現也不佳, 最後就變成比較精簡的 Hi/Lo 兩段式設計. 這部機器唯一的缺點大概就是推不好低阻抗高感度的耳機 , 比方說 W1000X 還是有些微底噪, 紮實的中低頻反而減損了鐵家木殼的韻味, 搭開放式的 AD2000X 也有不夠清透的缺陷(不過話說回來這類型的前端我通常會刻意找低頻鬆軟量感少的搭配, 專攻人聲或流行樂), 不過若是以弦樂來說(比如說我常聽 Haydn 的 string Quartets) 表現尚可, 整體上偏向三頻均衡, 屬於較為豐潤飽滿的調性.\
​<br />

![Picture](/uploads/8/4/4/0/8440048/sam-5811_orig.jpg){@.none}

<br />​\
嚴格說起來這台機器我也不算開發者, 也不太像寫手, 除了針對試作機給了一些意見外, 這機器反倒有點像是自掏腰包買 (這品牌下一台以 Soekris 為核心的純 DAC 機韌體的技術顧問就是我, 開案的訂金一部分就用這台 epsode1 折讓了). 鈑金件跟隔離銅壁的厚度保證了機構強度與適當的屏蔽, 電源部分的變壓器據我所知下了不少工夫, 正常來說這種機構含工帶料出圖訂做隨便就要四,五張小朋友以上. 模組化的設計帶來最大的優點就是非常好改, 接線的部分相當明確, 想把這台的 analog Out 改成 Analog In 其實不難

![Picture](/uploads/8/4/4/0/8440048/sam-5814_orig.jpg){@.none}

<br />USB 方案用的是新版的 XMOS xu208, 個人認為贏 u8 不只一個馬身, WIN/Mac/Android 的支援度也無可挑剔, 估計一兩年這種價位公板模組都會是 xu208的天下. 這模組作的比較好的就是大陸的 singxar (韌體據聞有 XMOS 的 FAE 支援), 也許這個換成 singxar 的飛秒時鐘模組表現會更好(但是考量價格跟一般人使用DDC的偏好反而不適合在一體機加這種等級的模組). Digital Reciever 的晶片用的是 comTrue 的晶片, 這個其實是我覺得整台機器最失敗的選料, 完全證明了參數漂亮聲音不一定好聽的真理, 原本試作機有實作出這顆晶片的昇頻, 結果就是音場縮得慘不忍睹, 耐聽度大幅下降. 由於是一體機所以有類比線路的增益調整, 也用不到數位音量( I2S 段的調整), 最後就只是單純拿來達成 SPDIF/I2S 訊源切換饋入 9018 的功能.\
\
DAC 線路另外一個亮點就是 I/V 段跟 Voltage gain , LPF 段的 OP 選料, 以 es9018 的質要做到沒有數位聲, 均衡好聽的條件這部分的處理非常關鍵. Analog Device 的 ADA4637 (JFET 型的 Low noise, low bias 放大器, 應該可以算是 AD6XX 系列的後繼)就是很棒的現代 OP,也不像 797那樣昂貴難搞, epsode1 有質感的低頻也許得歸功於這顆 OP. 整台好像用了12顆的樣子, 各位有空可以查查這顆的 B-type 的價格, 基本上只有廠機的量才有辦法這樣搞,我後來弄了幾顆拿去設計工業用的低雜訊量測線路也有不錯的效果. 整部機器我估過零件部分一般人零買搞不好都要超過機器定價的一半了, 以當初的預購價來感覺跟買 DIY 套件叫人組的感覺差不多 XD\
\
當初嫌它太便宜建議定價加個五千比較符合它的定位想不到後來真的有調整(這就是人性, 太便宜反而容易被質疑, 就算系列首發有不賺錢的打算也不能在價格做出太多讓步, 否則搞不定以價論聲的異音)\
\
OP部分不建議更換不過真的要換也不難, 從單轉雙OP的轉版去拆卸就可以了.拆下去保證破保, 其他大陸土炮廠的亂拆也就算了, E3audio 這間新品牌的母公司絕對有辦法做到網頁宣稱的 3年保修(這大概就是代工轉品牌的優勢, 我也是有偷偷看過人家非保密部分的產線, 出貨區)\
​<br />

![Picture](/uploads/8/4/4/0/8440048/sam-5815_orig.jpg){@.none}

機殼底部左右各三顆螺絲拆卸即可抽出ㄇ型蓋版. 這裡看到的散熱孔與頂部的位置相同, 主要是給擴大線路 MOS 自然對流散熱用, 最早試作機偏壓設計大概有問題只要堵住上方散熱孔整台機器會飆到60度以上, 新版修正過就算稍微擋到, 有留間隙的情況下也只是微溫. 接兩聲道測試時發現震動對於細節有影響所以腳座有另外選過.\
\
​<br />

![Picture](/uploads/8/4/4/0/8440048/sam-5841_orig.jpg){@.none}

<br />進入聽感描述以前先簡單介紹一下測試系統\
\
耳機方面: W1000X/AD2000X/AKG K7XX/HD600/HD800/GMP450pro/X2\
預定加測(最近剛到手): HD800 平衡/DT990/E-MU Teak Ebony\
一對仿 AR-MST 的氣墊式喇叭(兩側的 tweeter 換成超高音), 有點軟調的 marantz PM-30 綜擴\
訊源的部分 PC 走 USB 不做分離, hifidiy 的 Athena DDC 出同軸, PS4 放藍光或串流音訊出光纖, MOD HDMI 進電視出光纖\
\
\
兩聲道的部分標準聽感大概是以土豪我朋友的系統當基準

![Picture](/uploads/8/4/4/0/8440048/freindsys_orig.jpg){@.none}

有試過用土豪哥電源系統跟地盒去搾 Epsode1 的效能, 不過我覺得實在太智障了所以結論不細講(拿比一體機還貴的7N&nbsp;電源線測根本毫無道理), 不過實驗的結果大概證明 9018 對於電源這部分的確有些敏感. 不過在自家測的時候一律用普通小黑線.\
\
測試的樂曲流行部分用和樂器樂團所有的專輯(從華風月時期的開始比較不成熟的混音, 到最新鈴華ゆう子那張顯然EQ兩端加過頭的個人專輯), 常聽的大編制德弗札克9號, 貝多芬3號, 馬勒之類的. Spotify 聽一些 American POP.\
\
以最佳組合的 HD600/800 來說有點彈性的低頻跟包圍感非常舒適, 器樂的分離度與層次感極佳, 音場寬闊(這個幾乎是這部一體機的主打特色, 很多可以讓儀測更漂亮的手段都會破壞這個特性, 專案裡的儀測參數派跟調音派會這個分界上拉鋸, 還好成品沒有往儀測一面倒). 人聲的位置中等, 比較不容易引起特別關注的那型(舉例來說背景中如果有像 take five 那種迷人的鼓點注意力馬上會被吸過去), 整體上可以說是三頻均衡的類型, 調音過分的流行樂或 ACG 放下去很容易被整片背景樂器搶走風采 (阿聽ACG就是要聽女聲不是背景啊)&nbsp;. 平衡輸出比單端優異也是事實, 這個價位能找到全平衡推 HD800 推得有聲有色的一體機也是不容易的一件事.\
\
不同的數位訊源差異其實不會那麼明顯, USB 的部分坦白講沒做電訊分離的話比較容易受干擾(比如說同一個主機板接個外接光碟機之類的), 多用一台 DDC 轉 SPDIF 餵進來長距離比較不會出問題. 不過大多數的情況下 XMOS 的方案夠用了, 想聽 DSD over PCM 也只能透過 USB 插孔來傳輸.\
\
兩聲道方面其實主要用來評定低頻的表現是否符合預期, 一方面我的空間喬一下可以散去低頻駐波(長型的空間, 兩側開窗開門),還可以刻意加大音量來判斷超低頻跟胸腔共振那段的表現(姑且算是找低頻下潛吧). 另外不好的 DAC 在系統刻意加大音量的情況底下很容易出現缺陷, 三頻不均 , 分離度不佳等等. 在這方面的測試 Epsode1 的最終調音符合我對於客廳系統的要求: 具質與量的低頻表現(不過頭), 耐聽, 反映擴大器特色的聲音表現, 好好選擇擴大器應該也可以調出銳利的音色\
\
簡而言之如果想找完成度不錯的 9018 DAC, 手上剛好又有聲海家耳機的可以考慮這台一體機, 特別想簡單接個手機當訊源擺床頭來輕鬆聆聽(我原本的計畫, 新的XMOS用了就回不去了 )\
&nbsp;\
\
最後還是老本行, 用儀器來驗證一下參數有沒有亂給 (這機器賣了我也沒辦法抽成, 所以憑喜好惡搞測試)<br />

:::::::::: multicol
::::::::: col 50%

![Picture](/uploads/8/4/4/0/8440048/null_orig.png){@.none}

24bit/ 200KHz 量測, 差不多跟 APx515 同級別, 不設濾波器 noise floor 在 -130dB 到 -140dB 左右, 要量耳機負載端的 THD 應該綽綽有餘

:::::::::
::::::::: col 50%

![Picture](/uploads/8/4/4/0/8440048/play-96-pink_orig.png){@.none}

簡單丟個 pink noise 可以看出 FIR 設定的截止頻率&nbsp;

:::::::::
::::::::::

究竟有沒有達到原廠宣稱的 0.01% 諧波失真?\
​<br />

![Picture](/uploads/8/4/4/0/8440048/play-441-1k-thd_orig.png){@.none}

在 >3V pk-pk 的條件下超過 85dB (THD, 算20根諧波) 如果依照標準有限帶寬的量測條件下應該可以更低,但是以耳機負載端來說沒什麼好挑剔, 以 9018 原始的設定來純 DAC 配合 AD797 之類的 I/V , 多 channel 並聯要榨出 110dB 的THD+N並不難.&nbsp;

![Picture](/uploads/8/4/4/0/8440048/play-44-m10db_orig.png){@.none}

以 1V pk-pk 來說數字就很漂亮了, 二次以上的諧波基本上看不太到

![Picture](/uploads/8/4/4/0/8440048/play-44-m70db_orig.png){@.none}

衰減到 1mV 左右的振幅整個波型還很漂亮, 如果是離散 R2R 幾乎醜到不行. 以現代 delta-sigma 型的 DAC 來說數位音量不管衰減到多低都不容易聽到雜音.\
\
最後就是比較殘酷的測試, 實際用一個 Chirp Signal 來掃全頻段 (\<20KHz) 的 THD, 用程式自動計算生成這樣的訊號並不難

<div class="wsite-youtube" style="margin-bottom:10px;margin-top:10px;"><div class="wsite-youtube-wrapper wsite-youtube-size-auto wsite-youtube-align-center">
<div class="wsite-youtube-container">
<iframe allowfullscreen="" frameborder="0" src="//www.youtube.com/embed/0UoFbvnHOdI?wmode=opaque"></iframe>
</div>
</div></div>

20KHz 以內的 THD 已經很穩定的符合開出來的 0.01% 規格, 還是實際掛上耳機當附載的結果\
\
​另外我一直在想空間感跟拍頻到底會不會跟聽感有所關連, 所以也做了以下的測試訊號

<div class="wsite-youtube" style="margin-bottom:10px;margin-top:10px;"><div class="wsite-youtube-wrapper wsite-youtube-size-auto wsite-youtube-align-center">
<div class="wsite-youtube-container">
<iframe allowfullscreen="" frameborder="0" src="//www.youtube.com/embed/PCxgOptuZNk?wmode=opaque"></iframe>
</div>
</div></div>

<br />​看起來好像沒什麼, 不過我把同樣的訊號丟到一台用 AD1955 當 DAC 晶片的機器諧波多的慘不忍睹, 雖然它的buffer 設計的的確不好但也是以前聽得相當習慣的機器

<div class="wsite-youtube" style="margin-bottom:10px;margin-top:10px;"><div class="wsite-youtube-wrapper wsite-youtube-size-auto wsite-youtube-align-center">
<div class="wsite-youtube-container">
<iframe allowfullscreen="" frameborder="0" src="//www.youtube.com/embed/zl5kd8sDHPM?wmode=opaque"></iframe>
</div>
</div></div>

到底動態失真有沒有一個好的方法去衡量, 恐怕還要多方嘗試. 目前只能說好的儀測結果不保證好聽, 但是好聽的機器儀測絕對不能太差 (目前碰到的例外搞不好只有 R2R 的 THD). 單就儀測方面 E3audi Epsode 1 我想不會輸同價位的機器.
