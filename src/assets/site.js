// Lightbox for content images (replaces the Weebly/fancybox lightbox). Local GLightbox, no CDN.
(function () {
  function init() {
    try {
      var imgs = document.querySelectorAll("#wsite-content img");
      for (var i = 0; i < imgs.length; i++) {
        var img = imgs[i];
        var src = img.getAttribute("src") || "";
        if (/\/_ext\//.test(src) || /^data:/.test(src)) continue; // icons, formula images, ...
        var a = img.closest ? img.closest("a") : null;
        if (a && a.getAttribute("href") && !a.classList.contains("glightbox")) continue; // real link (e.g. pdf icon)
        if (!a) {
          a = document.createElement("a");
          img.parentNode.insertBefore(a, img);
          a.appendChild(img);
        }
        if (!a.getAttribute("href")) a.setAttribute("href", img.currentSrc || img.src);
        a.classList.add("glightbox");
        a.setAttribute("data-gallery", "page");
      }
      if (window.GLightbox) window.lightbox = GLightbox({ selector: ".glightbox", touchNavigation: true, loop: false });
    } catch (e) {}
  }
  if (document.readyState === "loading") document.addEventListener("DOMContentLoaded", init);
  else init();
})();
