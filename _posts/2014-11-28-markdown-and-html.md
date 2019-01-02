---
layout: post
title: Markdown and HTML
feature-img: "assets/img/sample_feature_img.png"
---

Jekyll supports the use of [Markdown](http://daringfireball.net/projects/markdown/syntax) with inline HTML tags which makes it easier to quickly write posts with Jekyll, without having to worry too much about text formatting. A sample of the formatting follows.

Tables have also been extended from Markdown:

First Header  | Second Header
------------- | -------------
Content Cell  | Content Cell
Content Cell  | Content Cell

Here's an example of an image, which is included using Markdown:

![Geometric pattern with fading gradient]({{ site.baseurl }}/assets/img/sample_feature_img_2.png)

Highlighting for code in Jekyll is done using Pygments or Rouge. This theme makes use of Rouge by default.

{% highlight js %}
// count to ten
for (var i = 1; i <= 10; i++) {
    console.log(i);
}

// count to twenty
var j = 0;
while (j < 20) {
    j++;
    console.log(j);
}
{% endhighlight %}

Type Theme uses KaTeX to display maths. Equations such as $$f(x)$$ can be displayed inline.

Alternatively, they can be shown on a new line:

$$
f(x)=\oiiint
$$

$$\Alpha \Beta \Gamma \Delta \Epsilon \Zeta \Eta \Theta \Iota \Kappa \Lambda \Mu \Nu$$

$$
\overbrace{a+b+c}^{\text{note}}
$$

$$
\sum_{\mathclap{1\le i\le j\le n}} x_{ij}
$$

$$
\def\foo{x^2} \foo + \foo
$$

$$
\cfrac{a}{1 + \cfrac{1}{b}}
$$

$$
\sqrt[3]{x}
$$

$$
\xLeftrightarrow{abc}
$$

$$
\fcolorbox{red}{aqua}{A}
$$