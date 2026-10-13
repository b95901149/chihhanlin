---
title: "LaTeX"
htmlTitle: "LaTeX - 湖中月影"
description: "我使用 LaTeX 經驗不算久，不過與許多同年齡的人相比，也勉強稱得上資深。還記得是在大一上汪老（正好是我現在的指導老師，很多 fashion..."
permalink: "/latex.html"
layout: layouts/page.njk
bodyClass: "wsite-theme-light tall-header-page wsite-page-latex"
banner: true
navId: "846271916976728485"
headerImage: "/uploads/8/4/4/0/8440048/header_images/1367457800.jpg"
snapshot: "2026-09-17"
snapshotTs: "20260917052212"
sourceUrl: "https://chihhanlin.weebly.com/latex.html"
---

我使用 LaTeX 經驗不算久，不過與許多同年齡的人相比，也勉強稱得上資深。還記得是在大一上汪老（正好是我現在的指導老師，很多 fashion 的事情都是跟他學來的）的普通物理課的時候，第一次聽到有這麼厲害的工具（在此之前我的排版經驗僅限於不包含數學式的排版），應該說一看到 Computer Modern 字體加上排得非常漂亮的方程式，就打定主意要好好研究這個系統。由於年紀輕，還不太會看原文的 manual，於是就從吳聰敏那套 cwTeX 開始學起，也透過翻譯講義來實踐 TeX 編譯，自此漸漸脫離 MS Word 的魔掌，走入越來越龜毛的 LaTeX 排版之路。\
\
我第一次 compile 中文的 TeX 文件成功耗了一整個晚上，那是僅僅六至七頁簡單的實驗報告；從不會看 debug 資訊一直到可以編出上百頁的書稿，我花了三到四年。直到最近我連投影片也開始試著用 TeX 來作，因為我開始覺得這可以節省排版數學式的時間，同時讓學術性質的報告看起來很有說服力。LaTeX 的學習曲線相當陡峭，很多時候自動化的排版指令也不能完整表達出你想要的版面（總是有很多編輯對於每個方程式、段落的間隔有很強的控制慾、不喜歡斷行又想要整齊的版面，於是乎你得一個地方一個地方手動加入指令修改，當然真正的高手只需要自己寫 package 來最佳化），不過 LaTeX 還是有個地方遠勝過其他的排版軟體：<span style="color: rgb(51, 51, 255)">一旦設計出了一個滿意的版面，你可以一直用它，用到膩為止。</span>所有針對版面細節所作的努力，自行定義的快捷指令，只要寫進全文設定區，就能繼續流用到下一份文件；於是你用 LaTeX 越久，同樣篇幅文章的排版可以越作越快。當然一般所見即所得的軟體也可以用範本與樣式來完整定義一個版面，比如侯捷寫過一本我曾經覺得很棒的『<span style="color: rgb(51, 51, 255)">Word 的排版藝術</span>』（現在當然也覺得是本好書，只是不再用 word，此書自然無用），他也教你怎麼讓編碼自動化，怎麼用 word 來寫出一本本厚輒數百頁的巨著。但是我相信沒有一本用 word 編的書稿可以活過二十年，word 兩三年換一版，過去輸入的方程式又有多少可以重編？相反地 LaTeX 的稿件永遠可以用純粹的文字格式來儲存，所有排版細節都以指令形式存在，只要包含指令的套件還在，總是可以編譯出一模一樣的文件，比如Knuth 那套寫了幾十年的計算機藝術，還是用 Plain-TeX 來編輯，完稿品質依舊驚人。\
\
其實 TeX 越來越便利，近幾年在非英語系語言的支援越來越好（特別是中文），我從早期 cwTeX （需要透過中介程式轉譯成 big5 ）開始編中文 TeX 檔，後來轉換到 CJK package 掛 cwTeX 字型，一直到最近開始 XeTeX / XeCJK （使用裝在 widows 中的 cwTeX 明體。我超愛這個字型，特別是搭半形標點來作句讀）。現在的初學者想用 TeX 寫中文文件，只要裝 MikTeX（假設人人都有 windows 作業系統），用內建的 editor，依序按下幾個快捷鍵就行了--- 不需要煩惱怎麼裝字型，不需要擔心相容性（cwTeX 的原罪），一切變得如此簡單。\
\
不用裝 Mathtype 也能有期刊等級美觀的方程式，不用擔心格式，不用擔心換行換頁，不用擔心編號問題，偶而學些新套件還可以走花俏路線，甚至走火入魔連圖都交給 TeX 來畫。我期待有那麼一天 LaTeX 變成像 html 一樣，不會寫的人還是可以透過瀏覽器閱讀由雲端伺服器即時編譯 LaTeX 產生的向量文檔（其實這是如何將 LaTeX 融入現有網頁標準的問題，早有許多成果，只是目前還沒有可與單純以 pdf 檔傳遞匹敵的方案），或者有像 weebly 之類的網站可以讓使用者拖拉 UI 介面就可以結合各種指令完成一般文章的排版與輸出，或者透過手寫辨識輸出完整的 LaTeX 數學式之類的。\
\
希望再過一二十年我的經驗也足以寫一本『中文 LaTeX 的排版藝術』（笑）<br /><br />

---

## <font color="#3333ff">中文 &nbsp;Latex &nbsp;配置</font>

目前我使用 wiidows 上最常用的 [&nbsp;MikTeX2.9 (64-bit)](http://miktex.org/) &nbsp;配合支援 unicode 的文字編輯器 [Texmaker](http://www.xm1math.net/texmaker/) （個人認為使用上比 MikTeX 內建的 TeXwork 還方便），使用 XeLaTeX 來編譯非英語文件，字體則選用一直以來看得很習慣的 &nbsp;cwTeX &nbsp;字體 (詳細的設定說明與字型下載連結可以從 [簡易中文範例](/317772613120013259913168420363.html)&nbsp;找到）。\
\
preamble 區 XeLaX 追加的指令為：<br /><br /><br />

<div align="left" class="wcustomhtml" id="683423007758130033" style="width: 100%; overflow-y: hidden;"><font face="Courier New">
\usepackage{fontspec}<br/>
\setmainfont[BoldFont=cwTeXQHei-Bold]{cwTeX Q Ming}<br/>
\linespread{1.35}    %1.2~1.35 is better for Cht font <br/>
\XeTeXlinebreaklocale "zh" <br/>
\XeTeXlinebreakskip = 0pt plus 1pt<br/>
</font>
</div>

---

## <font color="#3333ff">線上 LaTeX 編輯器</font>

通常我製作投影片或 poster 的時候很喜歡使用線上的編輯器來匯出向量檔案格式（.svg）的方程式圖塊到繪圖軟體理去編輯（比如說 Coreldraw 或者 Inkscape），這些線上編輯器甚至可以輸出 html code 的編碼來讓你把這些式子放到網頁上，非常的方便

:::::::::: multicol
::::::::: col 33.738938053097%

用 [codecogs](http://www.codecogs.com/latex/eqneditor.php) 線上編輯器嵌入網頁的方程式（用 svg 格式可以向量縮放）

:::::::::
::::::::: col 66.261061946903%

<div align="left" class="wcustomhtml" id="430919690631226813" style="width: 100%; overflow-y: hidden;"><img src="/vendor/latex.codecogs.com/svg.latex.svg" title="\frac{d}{dx}e^{ax}=a\,e^{ax}"/></div>

:::::::::
::::::::::

[g](http://atomurl.net/math/)oogle chrome shop 可以找到的 &nbsp;TeX editor &nbsp; &nbsp;[http://atomurl.net/math/](http://atomurl.net/math/)\
以前最常用來轉 svg 的編輯器 &nbsp; &nbsp; &nbsp;<a href="http://www.codecogs.com/latex/eqneditor.php" style="line-height: 1.5;">http://www.codecogs.com/latex/eqneditor.php</a>\
中研院數學所的 online editor &nbsp; &nbsp;<a href="http://www.math.sinica.edu.tw/www/tex/online_latex.jsp" style="line-height: 1.5;">http://www.math.sinica.edu.tw/www/tex/online\_latex.jsp</a>

## <font color="#3333ff">MathML&nbsp;</font>

想要在網頁上呈現大量數學式最好透過 MathML 格式來呈現（大量呼叫 codecogs 來即時 complie 方程式圖檔會有延遲），中研院數學所的 latex online editor&nbsp;就可以講你的方程式轉成 MathML 的程式碼，把原始碼轉貼到網頁中就可以呈現你的方程式，以下提供一段範例

<div align="left" class="wcustomhtml" id="266828824679448444" style="width: 100%; overflow-y: hidden;"><font face="Courier New">
\frac{d}{dx}e^{ax}=a\,e^{ax} 
</font></div>

這段 TeX 方程式 code 若轉成 MathML 會是：

:::::::::: multicol
::::::::: col 64.58111463862%

```xml
<math xmlns="http://www.w3.org/1998/Math/MathML" display="block">
  <mstyle>
    <mi>f</mi>
    <mrow>
      <mo>(</mo>
      <mi>a</mi>
      <mo>)</mo>
    </mrow>
    <mo>=</mo>
    <mfrac>
      <mn>1</mn>
      <mrow>
        <mn>2</mn>
        <mi>&#x3C0;</mi>
        <mi>i</mi>
      </mrow>
    </mfrac>
    <msub>
      <mo>&#x222E;</mo>
      <mrow>
        <mi>&#x3B3;</mi>
      </mrow>
    </msub>
    <mfrac>
      <mrow>
        <mi>f</mi>
        <mo>(</mo>
        <mi>z</mi>
        <mo>)</mo>
      </mrow>
      <mrow>
        <mi>z</mi>
        <mo>&#x2212;</mo>
        <mi>a</mi>
      </mrow>
    </mfrac>
    <mi>d</mi>
    <mi>z</mi>
  </mstyle>
</math>
```

:::::::::
::::::::: col 4.7594127204355%
:::::::::
::::::::: col 30.659472640945%

<font color="#3333ff">瀏覽器看到的會是：</font>

<div align="left" class="wcustomhtml" id="753457638216837639" style="width: 100%; overflow-y: hidden;"><math display="block" xmlns="http://www.w3.org/1998/Math/MathML">
<mstyle>
<mi>f</mi>
<mrow>
<mo>(</mo>
<mi>a</mi>
<mo>)</mo>
</mrow>
<mo>=</mo>
<mfrac>
<mn>1</mn>
<mrow>
<mn>2</mn>
<mi>π</mi>
<mi>i</mi>
</mrow>
</mfrac>
<msub>
<mo>∮</mo>
<mrow>
<mi>γ</mi>
</mrow>
</msub>
<mfrac>
<mrow>
<mi>f</mi>
<mo>(</mo>
<mi>z</mi>
<mo>)</mo>
</mrow>
<mrow>
<mi>z</mi>
<mo>−</mo>
<mi>a</mi>
</mrow>
</mfrac>
<mi>d</mi>
<mi>z</mi>
</mstyle>
</math></div>

<div class="paragraph" style="text-align:left;"><br/><br/><br/></div>

<font color="#ff0000">有支援</font> MathML 的瀏覽器看起來會是：

![图片](/uploads/8/4/4/0/8440048/7972723_orig.png){@style="width:100%;max-width:293px"}

<div class="paragraph" style="text-align:left;"><br/><br/></div>

<font color="#ff0000">沒有支援</font> MathML 的瀏覽器看起來會是：<br />

![图片](/uploads/8/4/4/0/8440048/9035019_orig.png){@style="width:100%;max-width:304px"}

:::::::::
::::::::::

預設上我用 Chrome 或者 IE 是看不到 render 好的 MathML 方程式（firefox 很 ok），如果是 chrome 的使用者請直接找相關擴充功能比如 mathJax for chrome 或者 Math anywhere (個人使用前者)，在 google 線上程式應用商店以關鍵字搜尋即可取得。<br /><br />

<div class="paragraph" style="text-align:left;"><br/><br/></div>

:::::::::: multicol
::::::::: col 50%

## <font color="#3333ff">建立包含 LaTeX 文檔網頁的工具</font><span style="color: rgb(51, 51, 255)">&nbsp;&nbsp;- MathJax</span>

website: &nbsp;[http://www.mathjax.org/](http://www.mathjax.org/)\
中研院數學所的 online editor 就用到了 MathJax （一個可以很棒的將 tex 語法轉成 mathML 或 SVG 格式呈現的 javescript liberary。用 MathJax 創造的網頁元素可以讓瀏覽者輕易的取出方程式的原始碼（mathML or TeX code），使得複製變得非常方便。<br /><br /><br />

:::::::::
::::::::: col 50%

![图片](/uploads/8/4/4/0/8440048/20488_orig.gif){@.none style="width:100%;max-width:273px"}

:::::::::
::::::::::

---

:::::::::: multicol
::::::::: col 50%

## <font color="#3333ff">轉貼 latex 數學式至文書編輯軟體</font>

由 online latex editor （或者 tex compile 出來的 pdf 檔）轉存成 pdf 檔，截圖以點陣圖檔的形式輸入其他文書編輯軟體<br />

<div class="wsite-youtube" style="margin-top:10px;margin-bottom:10px;"><div style="text-align: center;"><object height="330" width="400"><param name="movie" value="https://www.youtube.com/v/g4l9seRHjnE?version=3"/><param name="wmode" value="transparent"/><param name="allowFullScreen" value="true"/><param name="allowScriptAccess" value="always"/><embed allowfullscreen="true" allowscriptaccess="always" height="330" src="https://www.youtube.com/v/g4l9seRHjnE?version=3" type="application/x-shockwave-flash" width="400" wmode="transparent"/></object></div></div>

:::::::::
::::::::: col 50%

## <font color="#3333ff">轉貼向量格式 latex 數學式至 PowerPoint</font>

利用 online editor 生成的 emf 檔匯入 ppt 中的好處除了解析度不受限制，也可以自由修改方程式字體的顏色，與背景和其他文字段落的整合較佳。<br />

<div class="wsite-youtube" style="margin-top:10px;margin-bottom:10px;"><div style="text-align: center;"><object height="330" width="400"><param name="movie" value="https://www.youtube.com/v/_FfXHKFxgQQ?version=3"/><param name="wmode" value="transparent"/><param name="allowFullScreen" value="true"/><param name="allowScriptAccess" value="always"/><embed allowfullscreen="true" allowscriptaccess="always" height="330" src="https://www.youtube.com/v/_FfXHKFxgQQ?version=3" type="application/x-shockwave-flash" width="400" wmode="transparent"/></object></div></div>

:::::::::
::::::::::

## <font color="#3333ff">編輯小技巧</font>

<br />XelaTeX 使用 \\hat{} 有時後會導致 Internal error: bad native font flag，最簡單避免 error 的方法是把 \\hat 換成 \\widehat\
\
斜體僅限於變數表達，下標倒無所謂，長一點的最好最都轉回正體\
ex: magnitude -> \\mbox{magnitude} &nbsp; &nbsp; &nbsp; &nbsp;const &nbsp; -> \\mbox{const}\
\
\
\\because 跟 \\therefore 後面可以稍微加幾個空格，我自己是加 \~\~\~\
\
\
單位向量直接用 \\mathbf{i} or \\mathbf{j} 會好些 \\hat{r} 可以改成 \\mathbf{r}&nbsp;\
\
\
\
\\sin\\theta \|\_{\\pi/2}^{\\pi/2}，要嘛想辦法把 \| 拉到跟積分符號一樣長，不然別用 \\frac 比較好看\
\
\
\\begin{enumerate} 再多套一層就會用 (a),(b) 標示，不一定每個都要自己用 \[\] 打\
\
\
句子里式子就算簡單如 x=r 還是要用 $ $ 把他套成數學模式，否除 tex 不會幫你調間距，有沒有斜體也差很多，務必謹記，\
\
\
行間用到數學式子儘量避免用到 \\frac ，像 \\frac{1}{2}R 還無所謂，如果更複雜點不如改成 R/2 來表示會更好，不會破壞行距的整齊感\
\
\
\
\
與其用 \\notag不如用 &nbsp; \\begin{align\*} &nbsp;....... &nbsp;\\end{align\*} &nbsp; 來的方便，多加兩個星號你可以把事情變得更簡單\
\
\
很多 flushleft 指令加跟沒加根本沒差\
\
\
如果用到括號的時候，千萬記得該加 \\left( 和 \\right) 一定要記得加，不要用簡單的 （ 和 ），不然出來的括號小的難看\
ex：偏微分： \\left(\\frac{\\partial U}{\\partial T}\\right)\_V\
\
\
align environment 斷行符號　& 位置放的不好會影響到 \\left 跟 \\right &nbsp;的判讀\
\
\
使用 texmaker，將 quick build 的指令改為 xelatex % （Miktex ver. 2.7）即可使用 xetex macro 做出 pdf 檔，不過似乎得 include pdf 的圖檔才行，eps 啃不進去。\
\
容易忽略的常用指令\
\\intov &nbsp;=> 積分上下限都會出現在積分符號的正上方跟正下方\
\\bm &nbsp; &nbsp; => 把希臘字母加粗 需要 bm package\
displatmath &nbsp;=> 調整隨文數式的行距的環境\
\
\
\
\
自訂指令 renewcommand； &nbsp;ex: braket notation\
想創造一個新指令 &nbsp;\\braket{a}{b} 產生 \<a\|b> 就要用\
\\newcommand{\\braket}\[2\]{\\langle #1 \| #2 \\rangle}\
\[2\] 代表這個指令要兩個參數，#1 與 #2 代表這兩個參數的位置（如果是 \[3\] 就要有 #1, #2 與 #3）\
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp;\
\
\
如果報告中想要出現一段程式碼，大部分書在這時候就會用灰底呈現，我們可以簡單定義一個環境來達成此目的\
使用 newcommand 指令配合 color 巨集跟 minipage 來作灰底：\
全文設定區放入\
\
\\usepackage{color}\
\\definecolor{algorbgm}{gray}{0.85} &nbsp;定義灰階色，數字越大越淺\
\
\\newcommand{\\grayblock}\[1\]{\
\\colorbox{algorbgm}{\\centering\
\\begin{minipage}{0.8\\textwidth} \~\\\\\[-15pt\]#1\~\\\\\[-25pt\] \\end{minipage}}}\
\
&nbsp;往後在文中使用 \\grayblock{程式碼} 即有灰底效果\
\----------範例--------------\
\
配合 algorithmic\
\\documentclass\[12pt,a4paper,oneside\]{article}\
\
\\usepackage{algorithmic}\
\\usepackage{color}\
\\definecolor{algorbgm}{gray}{0.85}\
\
\\newcommand{\\grayblock}\[1\]{\
\\colorbox{algorbgm}{\\centering\
\\begin{minipage}{0.8\\textwidth} \~\\\\\[-15pt\]#1\~\\\\\[-25pt\] \\end{minipage}}}\
\
\\begin{document}\
\
\\begin{figure}\
\\centering\
\
\\grayblock{\
\\begin{algorithmic}\
\\IF{somebody open the door 1}\
\\STATE he gets an apple\
\\STATE he gets an key\
\\ELSIF{somebody open the door 2}\
\\STATE he gets nothing\
\\ENDIF\
\\end{algorithmic}\
}\
\\caption{psudocode example}\
\\end{figure}\
\
\\end{document}\
&nbsp; ----------------------------------------------------\
\
\~\\\\\[-15pt\]#1\~\\\\\[-25pt\] &nbsp;主要是讓灰色背景能夠向上下延伸一些長度，但是單純加入空白行會又顯得色塊過大，所以用 \[-15pt\] 這樣的指令縮減這樣的長度；然後因為是 minipage 的環境，所以加在文中最好。\
\
\
段落文字\
(空行)\
\\bigskip\
\\grayblock{....}\
\\bigskip\
(空行)\
\
\
這樣就可以有效隔離版面<br /><br />

## <font color="#3333ff">我的 LaTeX Book 範本 （Beta）</font>

雖然內容尚未完成，不過章節標題設計以及一些自己設計的 environment 已經可以當作很不錯的範例，有空會加上完整的講解另起章節介紹

<div class="wsite-scribd">
<div id="357350047113812975-pdf-fallback" style="display: none;">
					Your browser does not support viewing this document. Click <a href="/uploads/8/4/4/0/8440048/lnep_programming.pdf" rel="noopener noreferrer" target="_blank">here</a> to download the document.
				</div>
<div id="357350047113812975-pdf-embed" style="display: none; height: 500px;">
</div>
<script type="text/javascript">
					(function () {
						if (window.wpdf && window.wpdf.supportsPDFs && window.wpdf.isPDF('uploads/8/4/4/0/8440048/lnep_programming.pdf')) {
							var embed = document.getElementById('357350047113812975-pdf-embed');
							embed.style.display = 'block';
							window.wpdf.embed('uploads/8/4/4/0/8440048/lnep_programming.pdf', embed);
						} else {
							var fallback = document.getElementById('357350047113812975-pdf-fallback');
							fallback.style.display = 'block';
						}
					})();
				</script>
</div>
