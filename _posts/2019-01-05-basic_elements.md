---
layout: post
title: Basic elements of C++
tags: data iostream 
categories: cpp
eye_catch: https://images.pexels.com/photos/546819/pexels-photo-546819.jpeg
---

En este capítulo,
* Te harás familiar con los componentes básicos de un programa en C++, incluyendo funciones, símbolos especiales e identificadores.
* Explorarás tipos de datos simples
* Descubrirás cómo usar las operaciones aritméticas
* Examinarás cóom un programa evalúa las expresiones aritméticas
* Te harás familiar con el tipo de dato `string`
* Aprenderás qué es una declaración de asignación y qué es lo que hace.
* Aprenderás sobre la declaración de variables
* Descubrirás cómo ingresar los datos en la memoria usando las declaraciones de ingreso
* Te harás familiar con el uso de operaciones de incremento y decremento
* Examinarás formas de resultados de salida usando declaraciones de salida.
* Aprenderás cómo usar las directivas de preprocesador y porqué son necesarios
* Aprenderás a depurar errores de sintáxis
* Explorarás cómo estructura un programa apropiadamente, incluyendo usando comentarios para documentar un programa.
* Te harás familiar con las declaraciones compuestas
* Aprenderás cómo escribir un programa en C++

<!--more-->

En este capítulo aprenderás lo básico de C++. Como tu objetivo es aprender el lenguaje de programación C++, dos preguntas surgen naturalmente. Primero, ¿qué es un programa de computadora? Segundo, ¿qué es la programación? Un **programa de computadora**, o un programa, es una secuencia de enunciados cuyo objetivo es cumplir una tarea. La **programación** es un proceso de planificación y creación de un programa. Estas dos definiciones dicen la verdad, pero no toda la verdad, acerca de la programación. Es muy posible que se necesite de un libro completo para dar una definición satisfactoria de la programación. Puede obtener una mayor comprensión de la naturaleza de la programación a partir de una analogía, por lo que pasemos a un tema sobre el que casi todo el mundo tiene algún conocimiento -- cocinar--. Una recta es también un programa, y todos los que tengan alguna experiencia en la cocina puede ponerse de acuerdo sobre lo siguiente:
1. En general, es más fácil seguir una receta que crear una.
2. Hay buenas rectas y hay malas recetas.
3. Algunas recetas son fáciles de seguir y otras no son fáciles de seguir.
4. Algunas recetas producen resultados confiables y otras no.
5. Debe tener algún conocimiento de cómo usar las herramientas de cocina para seguir una receta hasta completarla.
6. Para crear buenas recetas nuevas, debe tener muchos conocimientos y una buena comprensión de la cocina.

Estos mismos seis puntos también son ciertos sobre la programación. Tomemos un paso más la analogía de la cocina. Supongamos que necesitas enseñarle a alguien cómo convertirse en chef. ¿Cómo lo harías? ¿Primero le presentarías a la persona una buena comida, esperando que desarrolle el gusto por la buena comida? ¿Le pediría a la persona que siguiera recta tras receta con la esperanza que algo de eso se borre? ¿O primero le enseñaría el uso de las herramientas y la naturaleza de los ingredientes, los alimentos y las especias, y explicaría cómo encajan? Al igual que hay desacuerdo sobre cómo enseñar programación. Aprender un lenguaje de programación es como aprender a ser chef o aprender a aprender tocar un instrumento musical. Los tres requieren interacción directa con las herramientas. No puedes convertirte en un buen chef solo leyendo recetas. Del mismo modo, no puede convertise en un músico leyendo libros sobre instrumentos musicales. Lo mismo ocurre con la programación. Debe tener un conocimiento fundamental del idioma y debe probar sus programas en la computadora para asegurarse de que cada programa haga lo que se supone que debe hacer.

# Una mirada rápida a un programa en C++

En este capítulo, aprenderás los elementos básicos y conceptos del lenguaje de programación C++ para crear programas en C++. Además de dar ejemplos para ilustrar varios conceptos, también mostramos programas en C++ para clarificar estos conceptos. En esta sección, proveemos un ejemplode un programa en C++ que calcula el perímetro y el área de un rectángulo. En este punto, no debe preocuparse demasiado por los detalles de este programa. Solo neceista conocer el efecto de una declaración de salida, que se introduce en este programa.

En el ejemplo 1-1 (Capítulo 1), diseñamos un algoritmo para encontrar el perímetro y el área de un rectángulo. Dado el largo y el ancho de un rectángulo. Dado el largo y el ancho de un rectángulo, el programa en C++, en el ejemplo 2-1 calcula y muestra el perímetro y el área.

{% highlight cpp %}
#include <iostream>
using namespace std;

int main()
{
	double length;
	double width;
	double area;
	double perimeter;

	cout << "Program to compute and output the perimeter and"
			 << "area of a rectangle." << endl;

	length = 6.0;
	width = 4.0;
	perimeter = 2 * (length + width);
	area = length * width;

	cout << "Length = " << length << endl;
	cout << "Width = " << width << endl;
	cout << "Area = " << area << endl;

	return 0;
}
{% endhighlight %}

**Ejecución de muestra**: (Cuando compilas y ejecuta este programa, las siguientes cinco líneas son mostradas en la pantalla.)

{% highlight bash %}
Programa to compute and output the perimeter and area of a rectangle.
Length = 6
Width = 4
Perimeter = 20
Area = 24
{% endhighlight %}

Estas líneas son mostradas por la ejecución de las siguientes declaraciones:
{% highlight cpp %}
cout << "Program to compute and output the perimeter and "
		 << "area of a rectangle." << endl;

cout << "Length = " << length << endl;
cout << "Width = " << width << endl;
cout << "Perimeter = " << perimeter << endl;
cout << "Area = " << area << endl;
{% endhighlight %}

Luego explicaremos cómo esto ocurre. Consideremos primero la siguiente declaración:

{% highlight cpp %}
cout << "Program to compute and output the perimeter and "
		 << "area of a rectangle." << endl;
{% endhighlight %}

Este es un ejemplo de declaración de salida en C++. Hace que la computadora evalúe la expresión después del par de símbolos ``<<`` y muestre el resultado en la pantalla. Un programa en C++ puede contener varios tipos de expresiones como aritmética o cadenas.

Por ejemplo, `length + width` es una expresión aritmética. Cualquier cosa entre comillas dobles es una cadena. Por ejemplo, `Program to comoute and output the perimeter and ` es una cadena. Del mismo modo, `area of a rectangle` es también una cadena. Normalmente, una cadena se evalúa a sí misma. Las expresiones aritméticas se evalúan de acuerdo a las reglas de las operaciones aritméticas que normalmente se aprende en un curso de aritmética. Más adelante en este capítulo, explicaremos cómo se forman y evalúan las expresiones aritméticas y las cadenas. También tenga en cuenta que en una declaración de salida, `endl` hace que el punto de inserción se mueva al principio de la línea siguiete. (Tenga en cuenta que `endl`, la última letra es ele minúscula. También, en la pantalla, el punto de inserción es donde está el cursor.) Por lo tanto, la declaración anterior hace que el sistema muestra la siguiente línea en la pantalla.

{% highlight bash %}
Program to compute and output the area and perimeter of a rectangle.
{% endhighlight %}

Ahora consideremos la siguiente declaración:

{% highlight cpp %}
cout << "Length = " << length << endl;
{% endhighlight %}

Esta declaración de salida consta de dos expresiones. La primera expresión, (después del primer `<<`), es `Length = ` y la segunda expresión, (después del segundo `<<`), consta del identificador `length`. La expresión `"Length= "` es una cadena y evalúa a sí misma. (Note el espacio después de `=`.) La segunda expresión, que consta del identificador `length`, se evalúa como cualquiera que sea el valor de `length` es. Porque el valor asignado a `length` es `6.0`. Por lo tanto, la salida de la declaraación anterior es:

{% highlight bash %}
Length = 6
{% endhighlight %}

Note que el valor de `length` se muestra como `6`, no como `6.0`. Lo explicaremos en el siguiente capítulo cómo forzar al programa a generar el valor de `length` como `6.0`. El significado de las declaraciones de salida restantes es similar.

La última declaración, es decir, `return 0;` devuelve el valor `0` al sistema operativo cuando el programa termina. Daremos más detalles sobre esta declaración más adelante en este capítulo. Antes de identificar varias partes de un programa en C++, echemos un vistazo a una declaración más de salida. Considere la siguiente declaración:

{% highlight cpp %}
cout << "7 + 8 = " << 7 + 8 << endl;
{% endhighlight %}

En esta declaración de salida, la expresión `"7 + 8 = "`, que es una cadena, se evalúa a sí misma. Consideremos la segunda expresión, `7 + 8`. Esta expresión consiste de números `7` y `8`, y la operador aritmética `+` de C++. Por lo tanto, el resultado de la expresión `7 + 8` es la suma de `7` y `8`, que es `15`. Así, la salida de la declaración anterior es:

{% highlight bash %}
7 + 8 = 15
{% endhighlight %}

En este capítulo, hasta que expliquemos cómo construir correctamente un programa en C++, estaremos utilizando declaraciones de salida como las anteriores para explicar varios conceptos. Después al finalizar el Capítulo 2, deberías poder escribir programas en C++ lo suficientemente bien como para hacer algunos cálculos y mostrar los resultados. A continuación, notemos lo siguiente sobre el programa anterior en C++. Un programa en C++ es una colección de funciones, una de las cuales es la función principal. En términos generales, una función es un conjunto de afirmaciones cuyo objetivo es lograr algo. El programa anterior se compone de la única función principal; todos los programas de C++ requieren de una función principal.

Las primeras cuatro líneas de un programa empieza con el par de símbolos `//` (se muestra en verde), que son comentarios. Los comentarios son para el usuario, normalmente explican el propósito de los programas, es decir, el significado de las declaraciones. (Vamos a detallar cómo incluir comentarios en un programa más adelante en este capítulo). La siguient línea del programa, es decir,

{% highlight cpp %}
#include <iostream>
{% endhighlight %}

nos permite usar el (objeto predefinido) `cout` para generar saluda y el (manipulador) `endl`. La declaración
{% highlight cpp %}
using namespace std;
{% endhighlight %}

le permite usar el `cout` y el `endl` sin el prefijo `std::`. Esto significa que si no incluye esta declaración, entonces `cout` debería ser usado como `std::cout` y `endl` debería ser usado como `std::endl.  Elaboraremos esto al final de este capítulo.

Ahora consideremos la siguiente línea:

{% highlight cpp %}
int main()
{% endhighlight %}

Esta es la cabezera de la función `main`. La siguiente línea consiste de una llave izquierda. Esto marca el inicio del (cuerpo) de la función `main`. La llave derecha (al final de última línea del programa) coincide con esta llave izquierda y marca el fin del cuerpo de la función `main`. Explicaremos el significado de los otros términos, tales como aquellos mostrados en azul, después en este libro. Note que en C++, `<<` es un operador llamado el *stream insertion operator*.

Antes de finalizar esta sección, permítanos identificar cietas partes de un programa en C++ en la Figura 2-1.

{% highlight cpp %}
//*************************************************************
// Given the length and width of a rectangle, this C++ program
// computes and outputs the perimeter and area of the rectangle.
//*************************************************************
#include <iostream>

using namespace std;

int main()
{
	double length;
	dobule width;
	double area;
	double perimeter;

	cout << "Program to compute and output the perimeter and "
			 << "area of a rectangle." << endl;

	length = 6.0;

	width = 4.0;
	perimeter = 2 * (length + width);

	area = length * width;

	cout << "Length = " << length << endl;
	cout << "Width = " << width << endl;
	cout << "Perimter = " << perimeter << endl;
	cout << "Area = " << area << endl;

	return 0;
}
{% endhighlight %}

Uno de los términos que encontrarás a lo largo del texto y que es también identificado en la Figura 2-1 es una *variable*. Por lo tanto, introducimos este término en esta sección. Recordemos del Capítulo 1 que todos los datos deben ser cargados en la memoria principal antes que puedan ser manipulados. Por ejemplo, dado la longitud y el ancho, el programa en la Figura 2-1 calcula y muestra el área y el perímetro de un rectángulo. Esto significa que el valor de la longitud y el ancho debe ser guardado en la memoria principal. También, recordemos del Capítulo 1 que la memoria principal es una secuencia ordenada de celdas y cada celda tiene una dirección. Dentro de la computadora, la dirección de memoria está en binario. Una vez que almacenamos el valor de la longitud y el ancho, y porque estos valores podrían ser necesitados en más de un lugar en un program, nos gustaría conocer cómo las ubicaciones donde estos valores on guardados y cómo acceder a estas ubicaciones. C++ hace esto facil para un programador al especificar estas ubicaciones porque el programador puede otorgar un nombre alfabético para cada una de estas ubicaciones. Por supuesto, debemos seguir las reglas para especificar los nombres. Por ejemplo, en el programa en la Figura 2-1, le decimos al sistema que almacene cuatro espacios de memoria y los nombre ``length, `width`, `area` y `perimter`, respectivamente. (Explicaremos el significado de la palabra `double`, mostrado en azul luego en este capítulo.) Esencialmente, una *variable* es la ubicación de memoria cuyo contenido puede cambiar. Así `length`, `width`, `area` y `perimeter` son variables. También durante la ejecución de un programa, el sistema almacenará cuatro ubicaciones de memoria lo suficientemente grande para almacenar números decimales y estas ubicaciones de memoria son llamados `length`, `width`, `area` y `perimeter`, respectivamente. (vea Figura 2-2).

La declaración `length = 6.0`; llamará al sistema para almacenar `6.0` en la ubicación de memoria asociado con el nombre (o identificado por el nombre) `length`, vea Figura 2-3.

Ejemplo 2-14 y 2-19 adelante ilustran cómo el dato es manipulado en variables.

Como procedimos a lo largo del capítulo, explicaremos el significado de las partes restantes identificadas en la Figura 2-1.

# Lo básico de un programa en C++

En la sección anterior, dimos un ejemplo de un programa en C++ y también identificamos ciertas partes del programa. En general, un programa en C++ es una colección de uno o más subprogramas, llamadas funciones. Toscamente hablando, un **subprograma** o una **función** es una colección de declaraciones, y cuando este es activada, o ejectuada, esto cumple algo. Algunas funciones, llamadas **predefinidas** o funciones **estándar**, ya están escritas y son provistas como parte del sistema. Pero para cumplir muchas tareas, los programadores deben aprender a escribir sus propias funciones

Cualquier programa en C++ tiene una funcion principal. Así, si un programa en C++ tiene una sola función, este debe ser la función `main`. Hasta el Capítulo 6, otros que usan algunas funciones predefinidas, principalmente tratarás con la función `main`. Al final de este capítulo, habrás aprendido cómo escribir programas que consisten solo de la función `main`.

Si nunca has visto un programa escrito en un lenguaje de programación, el programa en C++ en el ejemplo 2-1 podría paracer un lenguaje extranjero. Para hacer las oraciones significantes en un lenguaje extraño, debes aprender su alfabeto, palabras y su gramática. Lo mismo es cierto para un lenguaje de programación. Para escribir programas significantes, debes aprender los símbolos especiales, palabras y reglas de sintáxis. Las **reglas de sintáxis** te dicen cuáles declaraciones (instrucciones) son legales o válidas, esto es, cuáles son aceptadas por el lenguaje de programación y cuáles no. Debes también aprender las **reglas de semántica**, que determinan el significado de las instrucciones. Las reglas del lenguaje de programación, los símbolos y las palabras especiales del lenguaje de programación le permite escribir programas para resolver problemas.

**Lenguaje de programación:** Un conjunto de reglas, símbolos y palabras especiales.