<!DOCTYPE html>
<html lang="en">
  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8"/>
    <link rel="icon" type="image/x-icon" href="/favicon.ico" />
    <link type="text/css" href="/css/pages.css" media="all" rel="stylesheet">

    <!-- Begin Jekyll SEO tag v2.2.0 -->
<title>GitHub Pages | Websites for you and your projects, hosted directly from your GitHub repository. Just edit, push, and your changes are live.</title>
<meta property="og:title" content="GitHub Pages" />
<meta property="og:locale" content="en_US" />
<meta name="description" content="Websites for you and your projects, hosted directly from your GitHub repository. Just edit, push, and your changes are live." />
<meta property="og:description" content="Websites for you and your projects, hosted directly from your GitHub repository. Just edit, push, and your changes are live." />
<link rel="canonical" href="https://pages.github.com/" />
<meta property="og:url" content="https://pages.github.com/" />
<meta property="og:site_name" content="GitHub Pages" />
<meta name="twitter:card" content="summary" />
<meta name="twitter:site" content="@github" />
<script type="application/ld+json">
{"@context": "http://schema.org",
"@type": "WebSite",
"name": "GitHub Pages",
"headline": "GitHub Pages",
"description": "Websites for you and your projects, hosted directly from your GitHub repository. Just edit, push, and your changes are live.",
"url": "https://pages.github.com/"}</script>
<!-- End Jekyll SEO tag -->

  </head>

  <body class="home ">


<section id="hero-spot" class="hero-spot">
    <a href="/"><img src="/images/logo.svg" alt="GitHub Pages" class="logo" /></a>

    <h1>Websites for you and your projects.</h1>
    <h2>Hosted directly from your <a href="https://github.com">GitHub repository</a>. Just edit, push, and your changes are live.</h2>

    <a href="https://help.github.com/pages/" class="help-link">Pages Help</a>

    <div id="slideshow">
      <img src="/images/slideshow/bootstrap.png" alt="Bootstrap" class="slide active" width="893" />
    </div>
</section>

<section id="video" class="video">
  <h1>What is GitHub Pages?</h1>
  <iframe width="853" height="480" src="https://www.youtube.com/embed/2MsN8gpT6jY?showinfo=0" frameborder="0" allowfullscreen></iframe>
</section>

<section id="tutorial" class="tutorial">
  <h1>Ready to get started? Roll vanilla, or generate a site for your project.</h1>
  <h2>You get one site per GitHub account and organization, <br />and unlimited project sites. Ready? Let’s get started.</h2>

  <ul class="tabs">
    <li><a href="#user-site" class="selected">User or organization site</a></li>
    <li><a href="#project-site">Project site</a></li>
  </ul>

  <!-- ### Start of tutorials -->
  <ul id="user-site" class="tutorial-list wrapper active">
    <li id="create-repo-step" class="image-right">
      <h4>Create a repository</h4>
      <p>Head over to <a href="https://github.com">GitHub</a> and <a data-proofer-ignore="true" href="https://github.com/new">create a new repository</a> named <em>username</em>.github.io, where <em>username</em> is your username (or organization name) on GitHub.</p>

      <p class="details">If the first part of the repository doesn’t exactly match your username, it won’t work, so make sure to get it right.</p>
    </li>

    <li class="question">
      <h4>What git client are you using?</h4>
      <ul class="tabs">
        <li><a id="option-terminal" href="#terminal-step-1" class="selected">A terminal</a></li>
        <li><a id="option-ghfw" href="#setup-in-desktop">GitHub for Windows</a></li>
        <li><a id="option-ghfm" href="#setup-in-desktop">GitHub for Mac</a></li>
        <li><a id="option-newuser-w" href="#new-user-step-1">I don't know</a></li>
      </ul>
    </li>

    <li id="new-user-step-1" class="option-newuser-w">
      <h4>Download GitHub for Windows</h4>
      <p>GitHub for Windows is a great way to use git and GitHub on Windows.</p>

      <a class="windows-download" href="https://github-windows.s3.amazonaws.com/GitHubSetup.exe"><span class="icon"></span>Download GitHub for Windows</a>

      <img src="images/dashboard@2x.png" width="1054" alt="GitHub for Windows screenshot" class="full-size" />
    </li>

    <li class="option-newuser-m">
      <h4>Download GitHub for Mac</h4>
      <p>GitHub for Mac is a great way to use git and GitHub on Mac.</p>

      <a class="mac-download" href="https://central.github.com/mac/latest"><span class="icon"></span>Download GitHub for Mac</a>

      <img src="images/ghfm@2x.png" width="1078" alt="GitHub for Mac screenshot" class="full-size" />
    </li>

    <li id="terminal-step-1" class="option-terminal">
      <h4>Clone the repository</h4>
      <p>Go to the folder where you want to store your project, and clone the new repository:</p>

      <div class="terminal">
        <div class="header"></div>
        <div class="shell">
          <p><span class="path">~</span><span class="prompt">$</span>git clone https://github.com/<em>username</em>/<em>username</em>.github.io</p>
        </div>
      </div>
    </li>

    <li id="setup-in-desktop" class="option-ghfm option-ghfw image-right">
      <h4>Clone the repository</h4>
      <p>Click the "Set up in Desktop" button. When the GitHub desktop app opens, save the project.</p>

      <p class="details">If the app doesn't open, launch it and clone the repository from the app.</p>
    </li>

    <li id="setup-in-desktop" class="option-newuser-w option-newuser-m image-right">
      <h4>Clone the repository</h4>
      <p>After finishing the installation, head back to GitHub.com and refresh the page. Click the "Set up in Desktop" button. When the GitHub desktop app opens, save the project.</p>

      <p class="details">If the app doesn't open, launch it and clone the repository from the app.</p>
    </li>

    <li class="option-terminal">
      <h4>Hello World</h4>
      <p>Enter the project folder and add an index.html file:</p>

      <div class="terminal">
        <div class="header"></div>
        <div class="shell">
          <p><span class="path">~</span><span class="prompt">$</span>cd <em>username</em>.github.io</p>
          <p><span class="path">~</span><span class="prompt">$</span>echo "Hello World" > index.html</p>
        </div>
      </div>
    </li>

    <li class="option-ghfm option-ghfw option-newuser-w option-newuser-m">
      <h4>Create an index file</h4>
      <p>Grab your favorite text editor and add an index.html file to your project:</p>

      <div class="terminal">
        <div class="header">index.html</div>
        <code class="shell">
          <pre>&lt;!DOCTYPE html&gt;
&lt;html&gt;
&lt;body&gt;
&lt;h1&gt;Hello World&lt;/h1&gt;
&lt;p&gt;I'm hosted with GitHub Pages.&lt;/p&gt;
&lt;/body&gt;
&lt;/html&gt;</pre>
      </code>
    </li>

    <li class="option-terminal">
      <h4>Push it</h4>
      <p>Add, commit, and push your changes:</p>

      <div class="terminal">
        <div class="header"></div>
        <div class="shell">
          <p><span class="path">~</span><span class="prompt">$</span>git add --all</p>
          <p><span class="path">~</span><span class="prompt">$</span>git commit -m "Initial commit"</p>
          <p><span class="path">~</span><span class="prompt">$</span>git push -u origin master</p>
        </div>
      </div>
    </li>

    <li class="option-ghfw option-newuser-w">
      <h4>Commit &amp; sync</h4>

      <p>Enter the repository, commit your changes, and press the sync button.</p>

      <img src="images/sync-windows@2x.png" width="813" alt="GitHub for Windows screenshot" class="full-size" />
    </li>

    <li class="option-ghfm option-newuser-m">
      <h4>Commit &amp; sync</h4>

      <p>Enter the repository, commit your changes, and press the sync button.</p>

      <img src="images/sync-mac.png" alt="GitHub for Mac screenshot" class="full-size" />
    </li>

    <li class="option-all">
      <h4>…and you're done!</h4>
      <p>Fire up a browser and go to <strong>http://<em>username</em>.github.io</strong>.</p>
      <div class="hero-octicon">
        <span class="mega-octicon octicon-check"></span>
      </div>
    </li>
  </ul>
  <!-- End of user site tutorial -->

  <!-- Project Site tutorial -->
  <ul id="project-site" class="tutorial-list wrapper">
    <li class="question">
      <h4>Use a theme, or start from scratch?</h4>
      <p>You have the option to start with one of the pre-built themes,
        <br>or to create a site from scratch.
      <ul class="tabs">
        <li><a id="option-generate" href="#generate-step-1" class="selected">Choose a theme</a></li>
        <li><a id="option-vanilla" href="#vanilla-step-1">Start from scratch</a></li>
      </ul>
    </li>

    <li id="generate-step-1" class="option-generate">
      <h4>Repository Settings</h4>
      <p>Head over to <a href="https://github.com/">GitHub.com</a> and create a new repository, or go to an existing one.
        <br><strong>Click on the Settings tab</strong>.</p>

      <img src="images/repo-settings@2x.png" width="720" alt="Settings for a repository" />
    </li>

    <li class="option-generate">
      <h4>Theme chooser</h4>
      <p>Scroll down to the <strong>GitHub Pages</strong> section. Press <strong>Choose a theme</strong>.</p>
      <img src="images/launch-theme-chooser@2x.png" width="720" alt="Automatic Generator button on GitHub.com, Settings" />
    </li>

    <li class="option-generate">
      <h4>Pick a theme</h4>
      <p>Choose one of the themes from the carousel at the top.
      <br>When you're done, click <strong>Select theme</strong> on the right.</p>

      <img src="images/theme-chooser@2x.png" class="full-size" width="720" alt="Choose layout" />
    </li>

    <li class="option-generate">
      <h4>Edit content</h4>
      <p>Use the editor to add content to your site.</p>
      <img class="full-size" src="images/code-editor@2x.png" width="720" alt="Add content to your GitHub Pages site" />
    </li>

    <li class="option-generate">
      <h4>Commit</h4>
      <p>Enter a commit comment and click on <strong>Commit changes</strong> below the editor.</p>
      <img class="full-size" src="images/commit-edits@2x.png" width="720" alt="Commit Markdown content to your repository" />
    </li>

    <!-- Start of vanilla sub tutorial -->
    <li id="vanilla-step-1" class="option-vanilla">
      <h4>Create an index file</h4>
      <p>Head over to <a href="https://github.com/">GitHub.com</a> and <a data-proofer-ignore="true" href="https://github.com/new">create a new repository</a>, or go to an existing one.
      <br />Click on the <strong>Create new file</strong> button.</p>

      <img src="images/new-create-file@2x.png" width="720" alt="Create a file in your repository" />
    </li>

    <li class="option-vanilla">
      <h4>Hello World</h4>
      <p>Name the file <code>index.html</code> and type some HTML content into the editor.</p>

      <img src="images/new-index-html@2x.png" width="720" alt="Hello World on GitHub.com" />
    </li>

    <li class="option-vanilla">
      <h4>Commit the file</h4>
      <p>Scroll to the bottom of the page, write a commit message, and commit the new file.</p>

      <img src="images/new-commit-file@2x.png" width="720" alt="Commit the file" />
    </li>

    <li class="option-vanilla">
      <h4>Repository Settings</h4>
      <p><strong>Click on the Settings tab</strong> and scroll down to the GitHub Pages section.
      <br />Then select the <strong>master branch</strong> source and click on the <strong>Save</strong> button.</p>

      <img src="images/source-setting@2x.png" width="720" alt="GitHub Pages Source Setting" />
    </li>

    <li class="option-all">
      <h4>…and you're done!</h4>
      <p>Fire up a browser and go to <strong>http://<em>username</em>.github.io/<em>repository</em></strong>.</p>
      <div class="hero-octicon">
        <span class="mega-octicon octicon-check"></span>
      </div>
    </li>
  </ul>

</section>
<!-- End of tutorial section -->

<section id="next-steps">
  <h1>Now that you’re up and running, here are a few things you should know.</h1>

  <ul class="next-steps wrapper">
    <li class="jekyll">
      <a class="hero-octicon" href="https://help.github.com/articles/using-jekyll-with-pages">
        <span class="mega-octicon octicon-pencil"></span>
      </a>
      <h4><a href="https://help.github.com/articles/using-jekyll-with-pages">Blogging with Jekyll</a></h4>
      <p>Using <a href="https://jekyllrb.com">Jekyll</a>, you can blog using beautiful Markdown syntax, and without having to deal with any databases. <a href="https://jekyllrb.com/docs/quickstart/">Learn how to set up Jekyll</a>.</p>
    </li>
    <li class="custom-urls">
      <a class="hero-octicon" href="https://help.github.com/articles/setting-up-a-custom-domain-with-pages">
        <span class="mega-octicon octicon-link"></span>
      </a>
      <h4><a href="https://help.github.com/articles/setting-up-a-custom-domain-with-pages">Custom URLs</a></h4>
      <p>Want to use your own custom domain for a GitHub Pages site? Just create a file named CNAME  and include your URL. <a href="https://help.github.com/articles/setting-up-a-custom-domain-with-pages">Read more</a>.</p>
    </li>
    <li class="guides">
      <a class="hero-octicon" href="https://help.github.com/categories/20/articles">
        <span class="mega-octicon octicon-book"></span>
      </a>
      <h4><a href="https://help.github.com/categories/20/articles">Guides</a></h4>
      <p>Learn how to create custom 404 pages, use submodules, and <a href="https://help.github.com/categories/20/articles">learn more about GitHub Pages</a>.</p>
    </li>
  </ul>
</section>

<script src="/js/jquery.js"></script>
<script>window.slides = {"bootstrap":"Bootstrap","yeoman":"Yeoman","facebookdesign":"Facebook Design","foundation":"Foundation","ghtraining":"GitHub Training","adobeos":"Adobe Open Source","jekyllrb":"Jekyll","electron":"Electron","semanticui":"Semantic UI","microsoft":"Microsoft on GitHub"}</script>
<script src="/js/application.js"></script>


<footer class="page-footer">
  <ul class="site-footer-links right">
    <li><a href="https://status.github.com/">Status</a></li>
    <li><a href="https://developer.github.com">API</a></li>
    <li><a href="https://training.github.com">Training</a></li>
    <li><a href="https://shop.github.com">Shop</a></li>
    <li><a href="https://github.com/blog">Blog</a></li>
    <li><a href="https://github.com/about">About</a></li>
  </ul>

  <a href="/">
    <span class="mega-octicon octicon-mark-github"></span>
  </a>

  <ul class="site-footer-links">
    <li>&copy; 2017 <span>GitHub</span>, Inc.</li>
    <li><a href="https://github.com/site/terms">Terms</a></li>
    <li><a href="https://github.com/site/privacy">Privacy</a></li>
    <li><a href="https://github.com/security">Security</a></li>
    <li><a href="https://github.com/contact">Contact</a></li>
  </ul>
</footer>

<script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s.createElement(o),
  m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m.parentNode.insertBefore(a,m)
  })(window,document,'script','//www.google-analytics.com/analytics.js','ga');

  ga('create', 'UA-3769691-40', 'github.com');
  ga('send', 'pageview');
</script>

</body>
</html>

