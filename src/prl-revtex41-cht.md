---
title: "PRL-revTex4.1-cht"
htmlTitle: "PRL-revTex4.1-cht - 湖中月影"
description: "RevTeX 是美國物理學會所提供旗下期刊的 latex 範本，詳細的說明可以從  http://publish.aps.org/revtex/  找到。基本上只要在 preamble 區加上 xelatex..."
permalink: "/prl-revtex41-cht.html"
layout: layouts/page.njk
bodyClass: "wsite-theme-light no-header-page wsite-page-prl-revtex41-cht"
banner: false
navId: "443332599207023937"
snapshot: "2026-09-17"
snapshotTs: "20260917050348"
sourceUrl: "https://chihhanlin.weebly.com/prl-revtex41-cht.html"
---

RevTeX 是美國物理學會所提供旗下期刊的 latex 範本，詳細的說明可以從&nbsp;[http://publish.aps.org/revtex/](http://publish.aps.org/revtex/)&nbsp;找到。基本上只要在 preamble 區加上 xelatex 所需要的設定就能編輯中文文件。英文範例使用 pdfLatex 編譯，中文範例則使用 XeLaTeX 來作，詳細說明請看程式碼註解與&nbsp;[簡易中文範例](/317772613120013259913168420363.html)。

## <font color="#3333ff">英文範例：</font>

:::::::::: multicol
::::::::: col 31.177446102819%

<div style="margin: 10px 0 0 -10px">
<a href="/uploads/8/4/4/0/8440048/sample.pdf" title="Download file: sample.pdf"><img height="36" src="/vendor/www/ui/images/file_icons/pdf.png" style="float: left; position: relative; left: 0px; top: 0px; margin: 0 15px 15px 0; border: 0;" width="36"/></a><div style="float: left; text-align: left; position: relative;"><table style="font-size: 12px; font-family: tahoma; line-height: .9;"><tr><td colspan="2"><b> sample.pdf</b></td></tr><tr style="display: none;"><td>File Size:  </td><td>170 kb</td></tr><tr style="display: none;"><td>File Type:  </td><td> pdf</td></tr></table><a href="/uploads/8/4/4/0/8440048/sample.pdf" style="font-weight: bold;" title="Download file: sample.pdf">Download File</a></div>
</div>

<hr style="clear: both; width: 100%; visibility: hidden"/>

:::::::::
::::::::: col 35.489220563847%

<div style="margin: 10px 0 0 -10px">
<a href="/uploads/8/4/4/0/8440048/example.zip" title="Download file: example.zip"><img height="36" src="/vendor/www/ui/images/file_icons/gz.png" style="float: left; position: relative; left: 0px; top: 0px; margin: 0 15px 15px 0; border: 0;" width="36"/></a><div style="float: left; text-align: left; position: relative;"><table style="font-size: 12px; font-family: tahoma; line-height: .9;"><tr><td colspan="2"><b> example.zip</b></td></tr><tr style="display: none;"><td>File Size:  </td><td>233 kb</td></tr><tr style="display: none;"><td>File Type:  </td><td> zip</td></tr></table><a href="/uploads/8/4/4/0/8440048/example.zip" style="font-weight: bold;" title="Download file: example.zip">Download File</a></div>
</div>

<hr style="clear: both; width: 100%; visibility: hidden"/>

:::::::::
::::::::: col 33.333333333333%
:::::::::
::::::::::

<div class="wsite-scribd">
<div id="592231167929885519-pdf-fallback" style="display: none;">
					Your browser does not support viewing this document. Click <a href="/uploads/8/4/4/0/8440048/sample.pdf" rel="noopener noreferrer" target="_blank">here</a> to download the document.
				</div>
<div id="592231167929885519-pdf-embed" style="display: none; height: 500px;">
</div>
<script type="text/javascript">
					(function () {
						if (window.wpdf && window.wpdf.supportsPDFs && window.wpdf.isPDF('uploads/8/4/4/0/8440048/sample.pdf')) {
							var embed = document.getElementById('592231167929885519-pdf-embed');
							embed.style.display = 'block';
							window.wpdf.embed('uploads/8/4/4/0/8440048/sample.pdf', embed);
						} else {
							var fallback = document.getElementById('592231167929885519-pdf-fallback');
							fallback.style.display = 'block';
						}
					})();
				</script>
</div>

## <font color="#3333ff">原始碼：</font>

```latex
\documentclass[pra,twocolumn,reprint]{revtex4}
\usepackage{amsmath}
\usepackage{graphicx}
\usepackage{natbib}
%\pagestyle{empty} %去除頁碼
\begin{document}
\begin{abstract}
You should put abstract here. Briefly describe what you've done and the main idea of your project in ``abstract". Generally the abstract contains 60 to 100 words. Using 2 or 3 sentences to clealy define your work and point out the main idea in it.   
\end{abstract}
\title{Ex. Student project: Refractive index measurement of glass and polymer}
\author{Chih-Han Lin, Chengfred and Yuhung Lai}
\affiliation{Experimental Physics Laboratory, Class A, Group 13}
\affiliation{Department of Physics, National Central University}
\date{8 December 2010}
\maketitle
\section{introduction}
You should introduce the whole background and make short discuss in this section just like pre-report in previous laboratory experiment. There may be a lot of method to practice your idea, you have to tell me why choosing one of them but not others. Collect and read journals or reliable reference articles  to help you listing the advantage and disadvantage of these method.
  
Here is an example of citation\cite{prl1,prl2,prl3} and book citation \cite{book1}. 

\section{theory or method}
You can express the main idea of your project in this section. Use {\verb $...$ } to present inline math equation. For example,  {\verb $a_1^2+a_2^2=c_1^2$ } will show $a_1^2+a_2^2=c_1^2$ in paragraph. If you want to type numerated independent equations, you can use {\verb eqnarray } environments. 

\begin{verbatim}
\begin{eqnarray}\label{example-eq}
a_1^2+b_1^2&=&c_1^2 \\
a_2^2+b_2^2&=&c_2^2.
\end{eqnarray}
\end{verbatim}

will display follows:

\begin{eqnarray}
a_1^2+b_1^2=c_1^2 \\
a_2^2+b_2^2=c_2^2.
\end{eqnarray}
\section{Characteristic of the sensor}
You need to specify the sensor used in your own experiment during 3-weeks project. 
\section{Experimental setup}
\subsection{refractive index of glass}
Using {\verb \subsection } to generate a subsection. 
\subsection{refractive index of polymer}
Use {\verb figure } environment to include figures in \LaTeX ~documents. It better for you to edit your data plot or picture with Inkscape or other vector graphic editor and save them as {\verb .png } {\verb .eps } or {\verb .pdf } file. For example, following codes shows FIG.~ \ref{test-pic}. 

\begin{verbatim}
\begin{figure}
\centering
\includegraphics[width=0.4\textwidth]
{test-pic.pdf}
\caption{This is test-pic picture}
\label{test-pic}
\end{figure}
\end{verbatim}

Commonds {\verb \label } and {\verb \ref } are used to extract figure or equation number automatically  generated by \LaTeX. \begin{verbatim}FIG.~ \ref{test-pic}\end{verbatim} will show FIG.~ \ref{test-pic}.


\begin{figure}
\centering
\includegraphics[width=0.4\textwidth]{test-pic.pdf}
\caption{This is test-pic picture}
\label{test-pic}
\end{figure}
\section{result}
Express your result and data plot here.

\section{conclusions}
Discuss and make conclusions here. 

\appendix
\section{Arduino code}
Command {\verb \appendix } signals that all following sections are appendices. For example, the section ``Arduino code" after {\verb \appendix } has prefix ``Appendix". Use {\verb verbatim } environvemt to list your computing code as follows:

\begin{verbatim}

const int buttonPin = 2;     
const int ledPin =  13;      

// Variables will change:
int ledState = HIGH;         
int buttonState;             
int lastButtonState = LOW;   


long lastDebounceTime = 0;  
long debounceDelay = 50;    

void setup() {
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
// read the state of the switch into 
  //a local variable:
  int reading = digitalRead(buttonPin);

  // check to see if you just pressed 
  //the button (i.e. the input went from 
  //LOW to HIGH), and you've waited
  //long enough since the last press to 
  //ignore any noise:  

  // If the switch changed, due to noise 
  //or pressing:
  if (reading != lastButtonState) {
// reset the debouncing timer
    lastDebounceTime = millis();
  }
 
  if ((millis() - lastDebounceTime)
> debounceDelay) {
// whatever the reading is at, it's been 
    //there for longer than the debounce delay,
    // so take it as the actual current state:
    buttonState = reading;
  }
// set the LED using the state of the button:
  digitalWrite(ledPin, buttonState);

  // save the reading.  Next time through 
  //the loop, it'll be the lastButtonState:
  lastButtonState = reading;
}
\end{verbatim}
\begin{acknowledgements}
If you want to acknowledge someone, put the paragraph in {\verb acknowledgements } environment. Ex. Chih-Han Lin acknowledges fruitful discussion and patient debugging with Chengfred, and partial support by department of Physics of NCU.   
\end{acknowledgements}
\bibliography{testbib}
%save your bib database in testbib.bib
\end{document}
```

---

## <font color="#3333ff">中文範例：</font>

:::::::::: multicol
::::::::: col 25%

<div style="margin: 10px 0 0 -10px">
<a href="/uploads/8/4/4/0/8440048/coherentstate.tex" title="Download file: coherentstate.tex"><img height="36" src="/vendor/www/ui/images/file_icons/tex.png" style="float: left; position: relative; left: 0px; top: 0px; margin: 0 15px 15px 0; border: 0;" width="36"/></a><div style="float: left; text-align: left; position: relative;"><table style="font-size: 12px; font-family: tahoma; line-height: .9;"><tr><td colspan="2"><b> coherentstate.tex</b></td></tr><tr style="display: none;"><td>File Size:  </td><td>6 kb</td></tr><tr style="display: none;"><td>File Type:  </td><td> tex</td></tr></table><a href="/uploads/8/4/4/0/8440048/coherentstate.tex" style="font-weight: bold;" title="Download file: coherentstate.tex">Download File</a></div>
</div>

<hr style="clear: both; width: 100%; visibility: hidden"/>

:::::::::
::::::::: col 25%

<div style="margin: 10px 0 0 -10px">
<a href="/uploads/8/4/4/0/8440048/coherentstatenotes.bib" title="Download file: coherentstatenotes.bib"><img height="36" src="/vendor/www/ui/images/file_icons/file.png" style="float: left; position: relative; left: 0px; top: 0px; margin: 0 15px 15px 0; border: 0;" width="36"/></a><div style="float: left; text-align: left; position: relative;"><table style="font-size: 12px; font-family: tahoma; line-height: .9;"><tr><td colspan="2"><b> coherentstatenotes.bib</b></td></tr><tr style="display: none;"><td>File Size:  </td><td>0 kb</td></tr><tr style="display: none;"><td>File Type:  </td><td> bib</td></tr></table><a href="/uploads/8/4/4/0/8440048/coherentstatenotes.bib" style="font-weight: bold;" title="Download file: coherentstatenotes.bib">Download File</a></div>
</div>

<hr style="clear: both; width: 100%; visibility: hidden"/>

:::::::::
::::::::: col 25%

<div style="margin: 10px 0 0 -10px">
<a href="/uploads/8/4/4/0/8440048/coherentstate.pdf" title="Download file: coherentstate.pdf"><img height="36" src="/vendor/www/ui/images/file_icons/pdf.png" style="float: left; position: relative; left: 0px; top: 0px; margin: 0 15px 15px 0; border: 0;" width="36"/></a><div style="float: left; text-align: left; position: relative;"><table style="font-size: 12px; font-family: tahoma; line-height: .9;"><tr><td colspan="2"><b> coherentstate.pdf</b></td></tr><tr style="display: none;"><td>File Size:  </td><td>150 kb</td></tr><tr style="display: none;"><td>File Type:  </td><td> pdf</td></tr></table><a href="/uploads/8/4/4/0/8440048/coherentstate.pdf" style="font-weight: bold;" title="Download file: coherentstate.pdf">Download File</a></div>
</div>

<hr style="clear: both; width: 100%; visibility: hidden"/>

:::::::::
::::::::: col 25%
:::::::::
::::::::::

<div class="wsite-scribd">
<div id="951515584146053760-pdf-fallback" style="display: none;">
					Your browser does not support viewing this document. Click <a href="/uploads/8/4/4/0/8440048/coherentstate.pdf" rel="noopener noreferrer" target="_blank">here</a> to download the document.
				</div>
<div id="951515584146053760-pdf-embed" style="display: none; height: 500px;">
</div>
<script type="text/javascript">
					(function () {
						if (window.wpdf && window.wpdf.supportsPDFs && window.wpdf.isPDF('uploads/8/4/4/0/8440048/coherentstate.pdf')) {
							var embed = document.getElementById('951515584146053760-pdf-embed');
							embed.style.display = 'block';
							window.wpdf.embed('uploads/8/4/4/0/8440048/coherentstate.pdf', embed);
						} else {
							var fallback = document.getElementById('951515584146053760-pdf-fallback');
							fallback.style.display = 'block';
						}
					})();
				</script>
</div>

---

## <font color="#3333ff">原始碼：</font>

```latex
\documentclass[pop,reprint]{revtex4-1}
\usepackage{fontspec}
\usepackage{indentfirst}
\usepackage{amsmath}
\usepackage{amsfonts}
\usepackage{amssymb}
\usepackage{bm}
\usepackage[bf,medium]{titlesec}
\usepackage{graphicx}% Include figure files
\setmainfont[BoldFont=cwTeXQHei-Bold]{cwTeX Q Ming}
\linespread{1.15}
\XeTeXlinebreaklocale "zh"
\XeTeXlinebreakskip = 0pt plus 1pt

%\titlelabel{\S\ \thetitle\quad}
%%%%%%%%%%%%%%%
%自定義的符號指令
\newcommand{\norm}[1]{\|#1\|}
\newcommand{\sdelta}{{\scriptstyle\Delta}}
\newcommand{\bra}[1]{\langle#1|}
\newcommand{\ket}[1]{|#1\rangle }
\newcommand{\braket}[2]{\langle#1|#2\rangle }
\newcommand{\proj}[2]{|#1\rangle\langle#2|}
\newcommand{\expect}[2]{\langle #1\rangle_{#2}}
%%%%%%%%%%%%%%%
\begin{document}
\title{Coherent State }
\author{Chih-Han Lin}
\email{clin@ltl.iams.sinica.edu.tw}
\begin{abstract}
\end{abstract}
\maketitle
\section{相干態}
相干態（coherent state）即湮滅算子 $ \bm{a} $ \textbf{對應到的 eigenstate} $ \ket{a} $
\begin{eqnarray}
\bm{a}\ket{a}=a\ket{a}.
\end{eqnarray}

由於 $ \bm{a} $ 非 Heritian ，相干態的 eigenvalue 一般而言為複數。如果使用 $ \ket{n} $ 將 $ \ket{a} $ 展開，即 $ \ket{a}=\sum_n c_n\ket{n} $ ，$ c_n=\braket{n}{a} $ 則

\begin{eqnarray}
\bm{a}\ket{a}&=&\sum_{n=0}^\infty c_n\bm{a}\ket{n}=\sum_{n=1}^\infty c_n\sqrt{n}\ket{n-1}\\&=&a\sum_{n=0}^\infty c_n\ket{n}.
\end{eqnarray}

由此可知 $  c_n\sqrt{n}=ac_{n-1} $，故 $ c_1=ac_0 $、$ c_2=ac_1/\sqrt{2}=a^2c_0/\sqrt{2!} $、$ c_n=a^nc_0/\sqrt{n!} $，我們可以將 $ \ket{a} $ 改寫成

\begin{eqnarray}
\ket{a}=\sum_{n=0}^\infty c_n\ket{n}=c_0\sum_{n=0}^\infty\frac{a^n}{\sqrt{n!}}\ket{n}.
\end{eqnarray}
$ c_0 $ 可由歸一化條件 $ \braket{a}{a}=1 $ 來決定

\begin{eqnarray}
\protect\braket{a}{a}=1=|c_0|^2=\sum_{n=0}^\infty\frac{|a|^{2n}}{n!}\braket{n}{n}=|c_0|^2e^{|a|^2}.
\end{eqnarray}

因此 $ c_0 =e^{-|a|^2/2} $。 $ \ket{a} $ 投影到 $ \ket{n} $ 中可寫成

\begin{eqnarray}\label{coherent}
\ket{a}=e^{-|a|^2/2}\sum_{n=0}^\infty\frac{a^n}{\sqrt{n!}}\ket{n}.
\end{eqnarray}
$ p(n)=|\braket{n}{a}|^2=e^{-|a|^2/2}/\sqrt{n!} $ ，相干態在 Fock state $ \ket{n} $ 的投影機率即 Poisson 分佈，$ p(n) $ 為出現 $ n $ 顆光子或激發態的機率。在 $ \ket{a} $ 中光子數的平均值即 $ \sum np(n)=|a|^2=\bra{a}\bm{a}^\dag\bm{a}\ket{a} $，其數目與 $ a $ 之 sqare norm 成正比。

$ \ket{a} $ 在 q-representation 中的波函數可寫成

\begin{eqnarray}
\notag\psi_a(x)&=&\braket{x}{a}=\braket{x}{n}\braket{n}{a}\\
\notag&=& \sqrt{\frac{1}{\sqrt{\pi}}}e^{-(|a|^2+x^2)/2}\sum_{n=0}^\infty\frac{(a/\sqrt{2})^n}{n!}H_n(x)\\
&=&\sqrt{\frac{1}{\sqrt{\pi}}}e^{-(x-\sqrt{2}x)^2/2}.
\end{eqnarray}

若將 $ a $ 寫為 $ a=x+iy $ ，我們可以將 $ a $ 表示成位置 $ x $ 與動量 $ p $ 在相干態下平均值的線性組合：

\begin{eqnarray}
\expect{x}{}&=&\bra{a}\bm{x}\ket{a}=\frac{1}{\sqrt{2}}\bra{a}(\bm{a}+\bm{a}^\dag)\ket{a}=\sqrt{2}x,\\
\expect{p}{}&=&\bra{a}\bm{p}\ket{a}=-\frac{(a-a^*)i\hbar}{\sqrt{2}}=\sqrt{2}\hbar y.
\end{eqnarray}

故 $ \displaystyle a=x+iy=\frac{1}{\sqrt{2}}\left(\expect{x}{}+\frac{1}{\hbar}\expect{p}{}\right) $. 相干態在 q-reprensentation 下的波函數可表達為平均值 $ \sqrt{2}a=\expect{x}{}+\expect{p}{}/\hbar $ 的 Guass 分佈。

\section{非正交性與超完備性}
\begin{eqnarray}
\notag\ket{a}\bra{a'}&=&\bra{n}\frac{e^{-|a|^2}a^{*n}}{\sqrt{n!}}\frac{e^{-|a'|^2}a'^{n'}}{\sqrt{n'!}}\ket{n'}\\
\notag&=&\frac{e^{-(|a|^2+|a'|^2)/2}(a^*a')^2}{n!}\\
\notag&=&\exp\left[-\frac{1}{2}(|a|^2+|a'|^2)+a^*a'\right]\\
&=&\exp\left(\frac{1}{2}|a-a'|^2\right).
\end{eqnarray}

由此可看出不同的相干態並不正交，只有在 $ a $ 與 $ a' $ 差距極大的時候才趨近正交。由相干態構成的投影算子 $ \ket{a}\bra{a} $ 是否具備完備性可進行複平面上的積分來計算：

\begin{eqnarray}
\notag\int dz\ket{z}\bra{z}&=&\sum_{n,n'}\frac{\ket{n}\bra{n'}}{\sqrt{n!}\sqrt{n'}!}
\int dz e^{-|a|^2}a^na^{*n'}\\
\notag&=&\sum_{n}\frac{\ket{n}\bra{n}}{n!}\int rdrd\theta e^{-r^2}r^{2n}\\
&=&2\pi\sum_{n}\frac{\ket{n}\bra{n}}{n!}\int_0^\infty dr r^{2n+1}e^{-r^2}=\pi
\end{eqnarray} 

我們可以把任意的 state $ \ket{\psi} $ 用相干態來展開

\begin{eqnarray}
\ket{\psi}=\frac{1}{\pi}\int da\ket{a}\braket{a}{\psi}.
\end{eqnarray}

由於相干態的非正交性，相干態的基底數超出空間維數，將任意的 $ \ket{\psi} $ 在相干態上展開時各個分量彼此線性相關，故謂之超完備性。

\section{相干態的平移算子}

欲找出 $ \bm{D}(a) $ 滿足 $ \bm{D}(a)\ket{a=0}=\ket{a} $ 可改寫 eq.~(\ref{coherent})
\begin{eqnarray}
\notag\ket{a}&=&e^{-|a|^2/2}\sum_{n=0}^\infty\frac{a^n}{\sqrt{n!}}\left(\frac{\bm{a}^{\dag n}}{\sqrt{n!}}\ket{n=0}\right)\\
\notag&=&e^{-|a|^2/2}\sum_{n=0}^\infty\frac{a^n\bm{a}^{\dag n}}{n!}\ket{n=0}\\
&=&e^{-|a|^2/2}e^{a\bm{a}^\dag}\ket{n=0}.
\end{eqnarray}

由於 $ e^{-a^*\bm{a}}\ket{n=0}=\ket{n=0} $ ，我們可以加入 $e^{-a^*\bm{a}}$ 因子到前一個式子中讓它看起來更對稱：

\begin{eqnarray}
\bm{D}(a)\ket{n=0}=e^{-|a|^2/2}e^{a\bm{a}^\dag}e^{-a^*\bm{a}}\ket{n=0}=\ket{a}.
\end{eqnarray}

利用 Campbell-Baker-Hausdorff 公式，已知

\begin{eqnarray}
\notag [a\bm{a}^\dag,[a\bm{a}^\dag,-a^*\bm{a}]]=0,\\
\notag [-a^*\bm{a},[-a^*\bm{a},a\bm{a}^\dag]]=0,\\
\protect[a\bm{a}^\dag, -a^*\bm{a}]=|a|^2.
\end{eqnarray}

可將位移算子寫成更精練的形式

\begin{eqnarray}
\bm{D}(a)=e^{-|a|^2/2}e^{a\bm{a}^\dag}e^{-a^*\bm{a}}=
e^{a\bm{a}^\dag-a^*\bm{a}}.
\end{eqnarray}
$ \bm{D}(a) $ 也是 Unitary 算子，$ \bm{D}(a)\bm{D}^\dag(a)=\bm{D}^\dag(a)\bm{D}(a)=\mathbf{I} $。$ \bm{D}(a) $ 有下述特性：

\begin{enumerate}
\item Unitary transform 形成複數位移 $ a $ 或 $ a^* $
\begin{eqnarray}
\bm{D}^\dag(a)F(\bm{a},\bm{a}^\dag)\bm{D}(a)=F(\bm{a}+a,\bm{a}^\dag+a^*).
\end{eqnarray}
\item 連續作用的位移算子與合成一次位移算子的效果僅有相位差
\begin{eqnarray}
\bm{D}(a)\bm{D}(a')=e^{(aa'^*-a^*a')/2}\bm{D}(a+a').
\end{eqnarray}
\item 不同位移算子彼此正交
\begin{eqnarray}
\mbox{Tr}[\bm{D}(a)\bm{D}^\dag(a')]=\pi\delta(\Re\{a-a'\})\delta(\Im\{a-a'\}).
\end{eqnarray}
\end{enumerate}
~\\
\subsection*{Reference}
\begin{footnotesize}
[1] L.Mandel, E.Wolf, \textsl{Optical Coherence and Quantum Optics}, Cambridge, 1995.

\noindent[2] 王正行, 量子力學原理, 2nd ed, 北京大學出版社, 2008.
\end{footnotesize}
\end{document}
```
