---
layout: post
title: An overview of computers and programming languages
tags: hello-world good-practics 
categories: cpp
eye_catch: https://images.pexels.com/photos/546819/pexels-photo-546819.jpeg
---

En este capítulo,
* Aprenderás sobre los distintos tipos de ordenadores.
* Explorarás los componentes del software y del hardware de un sistema computacional.
* Aprenderás sobre el lenguaje de las computadoras.
* Aprenderás sobre la evolución de los lenguajes de la computadora.
* Examinarás los lenguajes de programación de alto nivel.
* Descubrirás qué es el compilador y qué es lo que hace.
* Examinarás un programa en C++.
* Explorarás cómo un programa en C++ es procesado.
* Aprenderás qué es un algoritmo y explorarás las técnicas para resolver problemas.
* Tomarás conciencia del diseño de la estructura y las metodologías del diseño de la programación orientada a objetos.
* Tomarás conciencia del ANSI/ISO Standard C++, C++11, C++14.

<!--more-->

# Introducción

Términos tales como "el internet", que fueron desconocidos justo hace 25 años ahora son comunes. Los estudiantes en la escuela elemental "surfean" regularmente el internet y usan computadoras para diseñar e implementar sus projectos de clase. Muchas personas usan el internet para buscar información y para comunicarse con otros. Todo esto es posible por el uso de una varidad de software, también conocido como programas de ordenadores. Sin el software, las computadores no pueden trabajar. El software es desarrollado por el uso de lenguajes de programación. C++ es uno de los lenguajes de programación, que es muy adecuado para desarollar software que cumplan tareas específicas. El objetivo principal del libro es ayudar que aprendas el lenguaje de programación C++ para escribir programas. Antes que inicies a programar, resulta útil entender algunas de la terminología básica y los diferentes componentes de una computadora. Empezaremos con un resumen de la historia de las computadoras.

# Un breve resumen de la historia de las computadoras

* El primer dispositivo conocido para llevar a cabo cálculos fue el ábaco.
* En 1642, el filósofo francés y matemático Blaise Pascal inventó un dispositivo de cálculo llamado la Pascalina.
* Luego en el siglo XVII, Gottfried von Leibniz inventó un dispositivo que podía sumar, restar, multiplicar y dividir
* En 1819, Joseph Jacquard, un tejedor francés, descubrió que las instrucciones de tejer para sus telares se pueden almacenar en tarjetas con agujeros perforados.
* A principios y mediados de 1800, Charles Babbage, un matemático inglés y científico físico, diseñó dos máquinas calculadoras: la diferencia entre la máquina diferencial y la máquina analítica.

# Elementos de un sistema computacional

Una computadora es un dispositivo electrónico capaz de realizar comandos. Los comandos básico que una computadora realiza son la entrada (obtener datos), salida (mostrar el resultado), almacenamiento, y realizar operaciones artiméticas y lógicas. Existen dos componentes principales de un sistema informático: hardware y software. En las siguientes secciones, aprenderás un breve resumen de estos componentes. Veamos primero el hardware.

## Hardware

Los componentes principales incluyen la unidad de procesamiento central (CPU); memoria principal (MM), también llamado como memoria de acceso aleatorio (RAM); dispositivos de entrada/salida; y el almacenamiento secundario. Algunos ejemplos de dipositivos de entrada son el teclado, el mouse y el almacenamiento secundario. Ejemplos de dispositivos de salida son la pantalla, la impresora y el almacenamiento secundario. Veamos cada uno de estos componentes en mayor detalle.

### Unidad de procesamiento central y memoria principal

La **unidad de procesamiento central** es el "cerebro" de una comptadora y la pieza más costosa del hardware de una computadora. Cuanto más poderosa sea el CPU, más rápida será el ordenador. Las operaciones aritméticas y lógicas se llevan a cabo en el CPU.


La **memoria principal**, o la **memoria de acceso aleatorio**, es conectada directamente al CPU. Todos los programas deben ser cargadas en la memoria princiapl antes de que ellos sean ejecutados. Similarmente, todos los datos deben ser llevados a la memoria principal antes que un programa puede ser manipulado. Cuando la computadora se apaga, todo en la memoria principal se pierde.

La memoria principal es una secuencia ordenada de celdas, llamada **celdas de memoria**. Cada celda tiene una única localización en la memoria principal, llamada la **dirección** de la celda. Cada dirección le ayuda a acceder la información guardada en la celda. La Figura 1-1 (b) muestra la memoria principal con algunos datos.

Las computadoras de hoy vienen con la memoria principal que consta de millones de billones de celda. A pesar que la Figura 1-1 (b) muestra los datos guardados en celdas, el contenido de cada celda puede ser una instrucción de programación o datos. Es más, esta figura muestra los datos como números y letras. Sin embargo, como se explicó anteriormente en este capítulo, la memoria principal guarda todo como secuencias de ceros y unos. La dirección de memoria también es expresada como secuencias de ceros y unos.

### Almacenamiento secundario

Porque los programas y los datos deben ser cargados en la memoria principal antes del procesamiento y porque todo en la memoria principal es perdida cuando la computadora es apagada, la información guardada en la memoria principal debe ser guardado en algún otro dispositivo para su almacenamiento permamente. El dispositivo que almacena información permanentemente (a menos que el dispositivo se vuelva inutilizable o cambia la información reescribiéndola) es llamada **almacenamiento secundario**. Para habilitar la transferencia de información desde la memoria principal hacia la memoria secundaria, estos componentes deben estar directamente conectados entre sí. Ejemplos de almacenamiento secundario son los discos duros, unidades flash y los CD-ROM.

## Dispositivos de entrada/salida

Para que una computadora realice una tarea útil, debe de permiterle tomar los datos y programas y mostrar los resultados de los cálculos. Los dispositivos que alientan los datos y programas a las computadoras son llamados **dispositivos de entrada**. El teclado, el mouse, el escáner, la cámara y el almacenamiento secundario son ejemplos de dispositivos de entrada. Los dispositivos que la computura usa para mostrar los resultados son llamados **dispositivos de salida**. El monitor, la impresora y el almacenamiento secundario son ejemplos de dispositivos de salida.

## Software

El software son programas escritos para realizar tareas específicas. Por ejemplo, los procesaores de textos son programas que usa para escribir cartas, artículos, e incluso libros. Cualquier software es escrito en lenguajes de programación. Existen dos tipos de programas: los programas del sistema y las programas de aplicación.

Los **programas del sistema** controla el ordenador. El programa del sistema que se carga primero cuando enciende su computadora es llamado sistema operativo. Sin un sistema operativo, la computadora es inútil. El **sistema operativo** maneja la actividad general de un ordenador y provee servicios. Algunos de estos servicios incluye la administración de memoria, actividades de entrada/salida, y administración del almacenamiento. El sistema operativo tiene un programa especial que organiza el almacenamiento secundario para que pueda acceder cómodamente a la información. Algunos sistemas operativos bien conocidos son Windows 10, Mac OS X, GNU/Linux, FreeBSD, UNIX y Android.

Los **programas de aplicación** realiza una tarea específica. Los procesadores de texto, hojas de cálculo son ejemplos de programas de aplicación. El sistema operativo es el programa que corre los programas de aplicación.

## El lenguaje del ordenador

Cuando oprime <kbd>A</kbd> en su teclado, la computadora muestra A en la pantalla. Pero, ¿qué es lo que realmente se almacena dentro de la memoria principal del ordenador? ¿Cuál es lenguaje del ordenador? ¿Cómo almacena lo que escribe en el teclado.?

Recuerde que un ordenador es un dispositivo electrónico. Las señales eléctricas son usadas dentro de la computadora para procesar la información. Existen dos tipos de señales eléctricas: analógica y digital. Las **señales analógicas** son formas de onda que varían continuamente y se usan para representar cosas como el sonido. Las cintas de audio, por ejemplo, almacenan datos en señales analógicas. Las **señales digitales** representan información con una secuencia de ceros y unos. Un `0` representa una baja tensión, y el `1` representa una alta tensión. Las señales digitales Son portadores de información más confiables que las señales analógicas y pueden ser copiados desde un dispositivo a otro con una precisión exacta. Es posible que haya notado que cuando hace una copia de una cinta de audio, la calidad del sonido de la copia no es tan buena como el de la cinta original. Por otro lado, cuando copia un CD, la copia es la misma que el original. Las computadoras usan señales digitales.

Porque las señales digitales son procesadas dentro de una computadora, el lenguaje de la computadora, llamada **lenguaje máquina**, es una secuencia de ceros y unos. El digito `0` o `1` es llamado **dígito binario**, **bit**. Algunas veces una secuencia de ceros y unos es llamado como un **código binario** o un **número binario**.

**Bit**: Un dígito binario `0` o `1`.

Una secuena de ocho dígitos es llamado un **byte**. Es más, $2^10$ bytes $=1024$ bytes es llamado un **kilobyte (KB)**. La Tabla 1-1 resume los términos utilizados para describir varios números de bytes.

| Unidad   | Símbolo | Bits/Bytes |
|:--------:|:-------:|:----------:|
| Byte     |         | 8 bits     |
| Kilobyte | KB      | 2^10$ bytes = 1024 bytes |
| Megabyte | MB      | 1024 KB $=2^10$ KB $=2^20$ bytes = 1048576 bytes |
| Gigabyte | GB      | 1024 MB $=2^10$ MB $=2^30$ bytes = 1073741824 bytes |
| Terabyte | GB      | 1024 GB $=2^10$ GB $=2^40$ bytes = 1099511627776 bytes |
| Petabyte | TB      | 1024 TB $=2^10$ GB $=2^50$ bytes = 1125899906842624 bytes |
| Exabyte  | EB      | 1024 MB $=2^10$ PB $=2^60$ bytes = 1152921504606846976 bytes |
| Zettabyte| ZB      | 1024 EB $=2^10$ EB $=2^70$ bytes = 1180591620717411303424 bytes |

Cualquier letra, número, o símbolo especial (tales como $\ast$ o $\{$) en su teclado es codificado como una secuencia de bits, cada uno tiene una única representación. La codificación comúnmente usado esquema de codificación en computadoras personales es el *siete-bit* **American Standard Code for Information Interchange (ASCII)**. El conjunto de datos ASCII consiste de 128 caracteres numerados del 0 al 127. Esto es, en el el conjunto de datos ASCII, la posición del primer carácter es 0, la posición del segundo carácter es 1, y así. En este esquema **A** es codificado con el número binario `1000001`. De hecho, **A** es el carácter en la posición 66 en el código de caracteres ASCII, pero su posición es 65 debido a la posición del primer carácter es 0. Además, el número binario `1000001` es la representación binaria del 65. El carácter `3` es 51, entonces el carácter 3 es el carácter en la posición 52 del conjunto ASCII. También se sigue que `0110011` es la representación binaria de `51`. Para una lista completa del conjunto de caracteres imprimibles ASCII, consulte el apéndice C.


{% highlight cpp %}
#include <iostream>
using namespace std;
int main()
{
	cout << "My first C++ program." << endl;
	return 0;
}
{% endhighlight %}

## Strikethrough

~~Mist~~

## Mathematics :+1:
