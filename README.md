# 湖中月影 / Lake's Shadow of the MooN — Markdown 版 (Eleventy)

由 `../chihhanlin-weebly/`（Wayback 重建的 Weebly 靜態鏡像，108 頁）轉成的 Eleventy 11ty 網站。
內容是 Markdown（`src/**/*.md`），外觀沿用原 Weebly 主題 CSS/結構（藍色大頭圖、白卡片、水平導覽列含下拉、fancybox 風格 lightbox 改用本地 GLightbox）。
所有舊網址不變（每頁 front matter 的 `permalink` = 原站 URL，部落格文章維持 `/<id>/<slug>.html`）。

## 目錄

```
eleventy.config.js        建置設定（markdown-it 擴充、passthrough、PATH_PREFIX）
package.json              11ty 與外掛都是本地 devDependency（不需全域安裝）
src/*.md                  各頁內容（由 ../tools/to_markdown.py 產生，之後可直接手改）
src/_data/nav.json        導覽列資料（含 more... 下拉的子層）
src/_data/blogs.json      兩個部落格（更新日誌、歌詞）的側欄資料
src/_data/flyout.json     Weebly 導覽 JS 需要的樣板
src/_includes/layouts/    base.njk(頁首/導覽/頁尾) page.njk blogpost.njk bloglist.njk blogshell.njk
src/assets/               site.css(程式碼框、lightbox 微調) site.js(lightbox 掛接)
static/vendor, static/files   原主題 CSS/JS/字型/圖示（從鏡像逐字複製；vendor = 鏡像的 _ext，已把 weebly/editmysite 主機名改成 cdn1/cdn2/...）
_report/                  convert_stats.json compare.md verify.md
.github/workflows/deploy.yml   push 到 main 自動建置並部署 GitHub Pages
```

## 本機預覽

```bash
cd D:\claude\website\chihhanlin-md
npm install                 # 第一次
npx @11ty/eleventy --serve  # http://localhost:8080/ ，改 .md 會自動重建
npx @11ty/eleventy          # 只建置到 _site/
```
（Windows 要先把 `C:\Program Files\nodejs` 放進 PATH。）

建置輸出 `_site/` 約 300 MB（含 uploads）。要用別的 server 看：`cd _site && python -m http.server 8766`。

## 新增 / 修改文章

* 一般頁面：在 `src/` 新增 `xxx.md`，front matter 至少：
  ```yaml
  ---
  title: "頁名"
  permalink: "/xxx.html"
  layout: layouts/page.njk
  bodyClass: "wsite-theme-light no-header-page wsite-page-xxx"   # tall-header-page = 有藍色大頭圖
  banner: false                                                 # 大頭圖頁填 true
  navId: ""
  ---
  ```
  然後在 `src/_data/nav.json` 加一筆（`url` 要等於 permalink）就會出現在導覽列。
* 部落格文章：複製 `src/26356260322608535468/20130501.md`，改 `postId`(任意不重複字串)、`postTitle`、`date`、`dateText`(M/D/YYYY)、`monthKey`(MM-YYYY)、`order`（數字越小越前面，新文章給 -1 再依序往後最方便）、`permalink`。文章列表/封存/分類頁由 `bloglist.njk` 自動從文章集合產生；新月份要在 `src/_data/blogs.json` 的 `archives` 加一筆，並新增對應 `archives/MM-YYYY.md`（複製既有的那種只有 front matter 的檔）。
* Markdown 擴充語法（只在這個站有效，由 `eleventy.config.js` 實作）：
  * 圖片：`![說明](/uploads/8/4/4/0/8440048/xxx.jpg)`；加註解 `![說明](/uploads/... "圖說")`；
    無框 `{@.none}`、靠左 `{@.left}`、指定大小 `{@style="width:100%;max-width:890px"}`，可併用，例如 `![x](/uploads/a.png "圖說"){@.none}`。單獨一行的圖會變成原站的圖片區塊並可點開 lightbox。
  * 多欄：
    ```
    :::::: multicol
    ::::: col 50%
    左欄內容（可放 Markdown）
    :::::
    ::::: col 50%
    右欄內容
    :::::
    ::::::
    ```
    外層冒號數必須比內層多（巢狀多欄再多加）。
  * 二級標題 `##` = 原站的藍色內文標題；`---` = 原站的分隔線；段落 = 原站的 `div.paragraph`。外部連結自動新分頁開啟。
  * 帶色彩/字級的字用內嵌 `<font color="#3333ff">…</font>` 或 `<span style="…">`；表格、表單、iframe(YouTube)、檔案下載列等 Markdown 表達不了的區塊就直接寫 HTML。
  * 程式碼：用 ```` ```latex ```` / ```` ```cpp ```` 圍欄，由 Prism 上色。
* 如果之後想重新從鏡像轉一次（會**覆蓋** `src/*.md`，包含手改的內容）：
  `/c/ProgramData/anaconda3/envs/claude/python.exe D:\claude\website\tools\to_markdown.py`。
  正式開始手改 .md 之後就不要再跑它。

## uploads 的放置方式（約 1036 檔、300 MB）

`uploads/`（圖片、PDF、tex、zip）**不複製進本專案**。`eleventy.config.js` 預設從 `../chihhanlin-weebly/uploads` 直接 passthrough 到輸出的 `/uploads`：

1. 優先序：環境變數 `UPLOADS_DIR` > 專案內 `./uploads`（若存在）> `../chihhanlin-weebly/uploads`。
2. 要上 GitHub 時：把 `uploads/` 複製（或搬）到本專案根目錄 `./uploads` 再 commit（300 MB < GitHub 單 repo 建議上限 1 GB，單檔都遠小於 100 MB；日後想瘦身可另放獨立 repo / 以 `UPLOADS_DIR` 指向 submodule）。`deploy.yml` 會檢查 `./uploads` 存在，不存在就失敗並提示。
3. 約 54 個檔案原本就沒被 Wayback / Weebly CDN 存下來（清單見 `../chihhanlin-weebly/_report/missing.md`），那些圖會 404，和鏡像一樣。

## 部署到 GitHub Pages

1. 建立 repo（尚未 `git init`；使用者決定 repo 名稱與是否 user site），把本資料夾（含 `uploads/`、不含 `node_modules/`、`_site/`，`.gitignore` 已排除）推到 `main`。
2. Repo Settings > Pages > Source 選 **GitHub Actions**。
3. push 到 `main` 即觸發 `.github/workflows/deploy.yml`：`npm ci` → `npx @11ty/eleventy` → `actions/deploy-pages`。
4. 子路徑：workflow 會用 `actions/configure-pages` 的 `base_path` 當 `PATH_PREFIX`（專案站 `https://user.github.io/repo/` 自動變 `/repo/`，user site 自動是 `/`）。本機要模擬：`PATH_PREFIX=/repo/ npx @11ty/eleventy`。
5. 自訂網域：在 `static/` 放 `CNAME` 並加進 `eleventy.config.js` 的 passthrough（目前只有 `.nojekyll`）。

## 已知限制

* 鏡像是 Wayback 快照（多數 2026-09-16~21，個別舊頁 2014/2017），內容以快照為準；快照日期在各頁 front matter 的 `snapshot`。
* 失效功能已移除：部落格留言區與 0 Comments、Facebook/Twitter 分享、RSS 連結、Weebly 頁尾註冊連結、Google Analytics 等。聯絡表單仍是原 HTML，但 action 指向已不存在的 Weebly 端點，送不出去。
* `LaTeXMathML.js` 從未被存下，`353363163922120-beta.html` 的數學預覽 demo 因此不會運作（鏡像同）。
