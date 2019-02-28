---
layout: post
title: User-Defined Functions (T)
tags: hello-world good-practics 
categories: theory
eye_catch: https://images.pexels.com/photos/546819/pexels-photo-546819.jpeg
---

En este capítulo, aprenderás

<!--more-->

En el Capítulo 2, aprendiste que un programa en C++ es una colección de funciones. Uno como la función `main`. Los programas en los Capítulos 1 hasta el Capítulo 5 usa solo la función `main`; las instrucciones de programación son comprimidos dentro de una función. Esta técnica, sin embargo, es buena solo para programas cortos. Para programas largos, esto no es práctico (a pesar de que es posible) de colocar las instrucciones de programación enteras. Debes aprender a romper el problema dentro piezas manejables. Este capítulo primero discute las funciones previamente definidas y entonces discute las funciones definidas por el usuario.

Imagine un fábrica de automóviles. Cuando se fabrica un automóvil, no está hecho de materias primas básicas; se pone a partir de piezas fabricadas anteriormente. Algunas partes están hechas por la propia empresa; otros, por diferentes empresas.

Las funciones son como bloques de construcción. Te permiten dividir programas complicados en piezas manejables. Ellos tiene otras ventajas, también:

* Cuando trabaje con una función, puede enfocarse en solo la parte del programa y construirlo, depurarlo y perfeccionarlo.
* Diferentes personas pueden trabajar en diferentes funciones simultáneamente.
* Si necesita una función, puede escribirla en más de una vez y colocarla en muchos programas.


* Usando funciones en gran medida mejora la legibilidad porque reduce la complejidad de la función `main`.

Las funciones son frecuentemente llamados **módulos**. Elos son como programas miniatura; puede ponerlo juntos para formar un programa grande. Cuando las funciones definidas por el usuario son discutidas, verás que este es el caso. Esta habilidad es menos aparente con las funciones predefinidas porque su código de programación no está disponible para nosotros. Sin embargo, las funciones predefinidas son también escritas para nosotros, aprenderás primero que puede usar estas cuando las necesite.

## Funciones predefinidas

Antes de discutir formalmente las funciones predefinidas en C++, permítanos revisar el concepto de un curso de álgebra escolar. En álgebra, una función es considerada una regla o correspondencia entre valores, llamados los *argumnetos de la función*, y los valores son únicos de la función asociado con los argumentos. Así, si $$f(x)=2x+5$$, entonces $$f(1)=7$$, $$f(2)$$.


Capitulo 6

Funciones definidas por el usuario

15 ejercicios de teoria

10 ejercicios de práctica