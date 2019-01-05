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

Términos tales como "el internet", que fueron desconocidos justo hace 25 años ahora son comunes. Los estudiantes en la escuela elemental "surfean" regularmente el internet y usan computadoras para diseñar e implementar sus projectos de clase. Muchas personas usan el internet para buscar información y para comunicarse con otros. Todo esto es posible por el uso de una varidad de software, también conocido como programas de ordenadores. Sin el software, las computadoras no pueden trabajar. El software es desarrollado por el uso de lenguajes de programación. C++ es uno de los lenguajes de programación, que es muy adecuado para desarollar software que cumplan tareas específicas. El objetivo principal del libro es ayudar que aprendas el lenguaje de programación C++ para escribir programas. Antes que inicies a programar, resulta útil entender algunas de la terminología básica y los diferentes componentes de una computadora. Empezaremos con un resumen de la historia de las computadoras.

# Un breve resumen de la historia de las computadoras

* El primer dispositivo conocido para llevar a cabo cálculos fue el ábaco.
* En 1642, el filósofo francés y matemático Blaise Pascal inventó un dispositivo de cálculo llamado la Pascalina.
* Luego en el siglo XVII, Gottfried von Leibniz inventó un dispositivo que podía sumar, restar, multiplicar y dividir.
* En 1819, Joseph Jacquard, un tejedor francés, descubrió que las instrucciones de tejer para sus telares se pueden almacenar en tarjetas con agujeros perforados.
* A principios y mediados de 1800, Charles Babbage, un matemático inglés, diseñó dos máquinas calculadoras: la diferencia entre la máquina diferencial y la máquina analítica.

# Elementos de un sistema computacional

Una computadora es un dispositivo electrónico capaz de realizar comandos. Los comandos básicos que una computadora realiza son la entrada (obtener datos), salida (mostrar el resultado), almacenamiento, y realizar operaciones artiméticas y lógicas. Existen dos componentes principales de un sistema informático: hardware y software. En las siguientes secciones, aprenderás un breve resumen de estos componentes. Veamos primero el hardware.

## Hardware

Los componentes principales incluyen la unidad de procesamiento central (CPU), memoria principal (MM), también llamado como memoria de acceso aleatorio (RAM), dispositivos de entrada/salida y el almacenamiento secundario. Algunos ejemplos de dipositivos de entrada son el teclado, el mouse y el almacenamiento secundario. Ejemplos de dispositivos de salida son la pantalla, la impresora y el almacenamiento secundario. Veamos cada uno de estos componentes en mayor detalle.

### Unidad de procesamiento central y memoria principal

La **unidad de procesamiento central** es el "cerebro" de una computadora y la pieza más costosa del hardware de una computadora. Cuanto más poderosa sea el CPU, más rápida será el ordenador. Las operaciones aritméticas y lógicas se llevan a cabo en el CPU.

![Componentes del hardware de una computadora y la memoria principal](/Cpp-Programming/assets/img/figure1.png)

La **memoria principal**, o la **memoria de acceso aleatorio**, es conectada directamente al CPU. Todos los programas deben ser cargadas en la memoria principal antes de que ellos sean ejecutados. Similarmente, todos los datos deben ser llevados a la memoria principal antes que un programa puede ser manipulado. Cuando la computadora se apaga, todo en la memoria principal se pierde.

La memoria principal es una secuencia ordenada de celdas, llamada **celdas de memoria**. Cada celda tiene una única localización en la memoria principal, llamada la **dirección** de la celda. Cada dirección le ayuda a acceder la información guardada en la celda. La Figura 1-1 (b) muestra la memoria principal con algunos datos.

Las computadoras de hoy vienen con la memoria principal que consta de millones de billones de celda. A pesar que la Figura 1-1 (b) muestra los datos guardados en celdas, el contenido de cada celda puede ser una instrucción de programación o datos. Es más, esta figura muestra los datos como números y letras. Sin embargo, como se explicó anteriormente en este capítulo, la memoria principal guarda todo como secuencias de ceros y unos. La dirección de memoria también es expresada como secuencias de ceros y unos.

### Almacenamiento secundario

Porque los programas y los datos deben ser cargados en la memoria principal antes del procesamiento y porque todo en la memoria principal es perdida cuando la computadora es apagada, la información guardada en la memoria principal debe ser guardado en algún otro dispositivo para su almacenamiento permamente. El dispositivo que almacena información permanentemente (a menos que el dispositivo se vuelva inutilizable o cambia la información reescribiéndola) es llamada **almacenamiento secundario**. Para habilitar la transferencia de información desde la memoria principal hacia la memoria secundaria, estos componentes deben estar directamente conectados entre sí. Ejemplos de almacenamiento secundario son los discos duros, unidades flash y los CD-ROM.

## Dispositivos de entrada/salida

Para que una computadora realice una tarea útil, debe de permiterle tomar los datos y programas y mostrar los resultados de los cálculos. Los dispositivos que alientan los datos y programas a las computadoras son llamados **dispositivos de entrada**. El teclado, el mouse, el escáner, la cámara y el almacenamiento secundario son ejemplos de dispositivos de entrada. Los dispositivos que la computadora usa para mostrar los resultados son llamados **dispositivos de salida**. El monitor, la impresora y el almacenamiento secundario son ejemplos de dispositivos de salida.

## Software

El software son programas escritos para realizar tareas específicas. Por ejemplo, los procesadores de textos son programas que usa para escribir cartas, artículos, e incluso libros. Cualquier software es escrito en lenguajes de programación. Existen dos tipos de programas: los programas del sistema y los programas de aplicación.

Los **programas del sistema** controla el ordenador. El programa del sistema que se carga primero cuando enciende su computadora es llamado *sistema operativo*. Sin un sistema operativo, la computadora es inútil. El **sistema operativo** maneja la actividad general de un ordenador y provee servicios. Algunos de estos servicios incluye la administración de memoria, actividades de entrada/salida, y administración del almacenamiento. El sistema operativo tiene un programa especial que organiza el almacenamiento secundario para que pueda acceder cómodamente a la información. Algunos sistemas operativos bien conocidos son Windows 10, Mac OS X, GNU/Linux, FreeBSD, UNIX y Android.

Los **programas de aplicación** realiza una tarea específica. Los procesadores de texto, hojas de cálculo son ejemplos de programas de aplicación. El sistema operativo es el programa que corre los programas de aplicación.

## El lenguaje del ordenador

Cuando oprime <kbd>A</kbd> en su teclado, la computadora muestra A en la pantalla. Pero, ¿qué es lo que realmente se almacena dentro de la memoria principal del ordenador? ¿Cuál es lenguaje del ordenador? ¿Cómo almacena lo que escribe en el teclado?

Recuerde que un ordenador es un dispositivo electrónico. Las señales eléctricas son usadas dentro de la computadora para procesar la información. Existen dos tipos de señales eléctricas: analógica y digital. Las **señales analógicas** son formas de onda que varían continuamente y se usan para representar cosas como el sonido. Las cintas de audio, por ejemplo, almacenan datos en señales analógicas. Las **señales digitales** representan información con una secuencia de ceros y unos. Un `0` representa una baja tensión, y el `1` representa una alta tensión. Las señales digitales son portadores de información más confiables que las señales analógicas y pueden ser copiados desde un dispositivo a otro con una precisión exacta. Es posible que haya notado que cuando hace una copia de una cinta de audio, la calidad del sonido de la copia no es tan buena como el de la cinta original. Por otro lado, cuando copia un CD, la copia es la misma que el original. Las computadoras usan señales digitales.

Porque las señales digitales son procesadas dentro de una computadora, el lenguaje de la computadora, llamada **lenguaje máquina**, es una secuencia de ceros y unos. El digito `0` o `1` es llamado **dígito binario**, **bit**. Algunas veces una secuencia de ceros y unos es llamado como un **código binario** o un **número binario**.

**Bit**: Un dígito binario `0` o `1`.

Una secuencia de ocho dígitos es llamado un **byte**. Es más, $$2^{10}$$ bytes $=1024$ bytes es llamado un **kilobyte (KB)**. La Tabla 1-1 resume los términos utilizados para describir varios números de bytes.

| Unidad   | Símbolo | Bits/Bytes |
|:--------:|:-------:|:----------:|
| Byte     |         | $$8$$ bits     |
| Kilobyte | KB      | $$2^{10}$$ bytes = $$1024$$ bytes |
| Megabyte | MB      | $$1024$$ KB $$=2^{10}$$ KB $$=2^{20}$$ bytes = $$1048576$$ bytes |
| Gigabyte | GB      | $$1024$$ MB $$=2^{10}$$ MB $$=2^{30}$$ bytes = $$1073741824$$ bytes |
| Terabyte | GB      | $$1024$$ GB $$=2^{10}$$ GB $$=2^{40}$$ bytes = $$1099511627776$$ bytes |
| Petabyte | TB      | $$1024$$ TB $$=2^{10}$$ GB $$=2^{50}$$ bytes = $$1125899906842624$$ bytes |
| Exabyte  | EB      | $$1024$$ MB $$=2^{10}$$ PB $$=2^{60}$$ bytes = $$1152921504606846976$$ bytes |
| Zettabyte| ZB      | $$1024$$ EB $$=2^{10}$$ EB $$=2^{70}$$ bytes = $$1180591620717411303424$$ bytes |

Cualquier letra, número, o símbolo especial (tales como $$\ast$$ o $$\{$$) en su teclado es codificado como una secuencia de bits, cada uno tiene una única representación. La codificación comúnmente usado esquema de codificación en computadoras personales es el *siete-bit* **American Standard Code for Information Interchange (ASCII)**. El conjunto de datos ASCII consiste de $$128$$ caracteres numerados del $$0$$ al $$127$$. Esto es, en el el conjunto de datos ASCII, la posición del primer carácter es 0, la posición del segundo carácter es 1, y así. En este esquema **A** es codificado con el número binario `1000001`. De hecho, **A** es el carácter en la posición 66 en el código de caracteres ASCII, pero su posición es 65 debido a la posición del primer carácter es 0. Además, el número binario `1000001` es la representación binaria del 65. El carácter `3` es 51, entonces el carácter 3 es el carácter en la posición 52 del conjunto ASCII. También se sigue que `0110011` es la representación binaria de `51`. Para una lista completa del conjunto de caracteres imprimibles ASCII, consulte el apéndice C.

> Nota: El sistema numérico que usamos en nuestra vida diaria es llamado **sistema decimal**, o **base 10**. Porque todo dentro de la computadora es representada como una secuencia de ceros y unos, esto es, números binarios, el sistema numérico que la computadora usa es llamado **binario**, o **base 2**. Indicamos en el párrafo precedente que el número 1000001 es la representación binaria de 65. El Apéndice E describe cómo convertir el número desde la base 10 hacia la base 2 y viceversa.

Dentro de la computadora, cualquier carácter es representado como una secuencia de *ocho* bits, que es, como un byte. Ahora la representación binaria de 65 es `01000001`. Note que nosotros agregamos `0` a la izquierda de la representación de siete-bit de 65 para obtener su representación binaria de ocho-bit `01000001`.

ASCII es un código de siete bits. Por lo tanto, para representar cada carácter ASCII dentro de la computadora, debe convertir la representario binaria de siete bits a un carácter ASCII de un representación binaria de ocho bits. Esto se logra añadiendo `0` a la izquierda de la codificación ASCII de siete bits del carácter. Además, `3` es representado como `00110011`.

Existe otros esquemas de codificación, tales como Unicode. Unicode consiste de 65536 carácteres. Para almacenar un carácter perteneciente a Unicode, necesitarás 16 bits o dos bytes. Unicode fue creado para representar una variedad de caracteres y está en continua expansión. Consiste en carácteres de otros idiomas además del inglés.

## La evolución de los lenguajes de programación

El lenguaje más básico de una computadora, el lenguaje máquina, proporciona instrucciones del programa en bits. Aunque la mayoría de las computadoras realizan el mismo tipo de operaciones, los diseñadores de la computadora pueden haber elegido diferentes conjuntos de códigos binarios para realizar las operaciones. Por lo tanto, el lenguaje máquina de un ordenador no es necesariamente el mismo lenguaje máquina de otro ordenador. La única coherencia entre las computadoras es que en cualquier computadora moderna, todos los datos se almacenan y manipulan como códigos binarios. Las primeras computadoras fueron programadas en lenguaje máquina. Para ver cómo las instrucciones son escritas en lenguaje máquina, suponga que quiere usar la ecuación:

```
wages = rate $\cdot$ hours
```
para calcular salarios mensuales. Más allá, suponga que el código binario `100100` significa para cargar, `100110` significa multiplicar, y `10010` significar almacenar. En lenguaje máquina, Es posible que necesite la siguiente secuencia de instrucciones para calcular los salarios semanales:

```
100100 010001
100110 010010
100010 010011
```

Para representar la ecuación de los salarios mensuales en lenguaje máquina, el programador tiene que recordar los códigos de lenguaje máquina para las operaciones diversas. También, para manipular los datos, el programador tiene que recordar las posiciones de los datos en la memoria principal. Esta necesidad de recordar códigos específicos hizo que la programación no solo fuera muy difícil, sino también propensa a errores.

Los lenguajes ensambladores fueron desarrollados para hacer el trabajo del programador más fácil. En el lenguaje ensamblador, una instrucción es una forma fácil de recordar llamada **mnemotécnica**. Por ejemplo, suponga que `LOAD` significa para el código máquina `100100`, `MULT` significa para el código máquina `100110` (multiplicación), y `STOR` significa para el código máquina `100010`.

Usando las instrucciones del lenguaje ensamblador, puede escribir la ecuación para calcular el salio mensual como sigue:
```
LOAD rate
MULT hours
STOR wages
```
Como puede ver, esto es mucho más fácil que escribir instrucciones en lenguaje ensamblador. Sin embargo, un computador no puede ejecutar las instrucciones del lenguaje ensamblador directamente. Las instrucciones primero tiene que transladarse en lenguaje máquina. Un programa llamado **ensamblador** traduce las instrucciones del lenguaje ensambadlor en lenguaje máquina.

**Emsamblador**: Un programa que traduce un programa escrito en lenguaje ensamblador en un programa equivalente en lenguaje máquina.

Pasando del lenguaje máquina a el lenguaje ensamblador hace la programación más fácil, pero un programador todavía estaba obligado a pensar en términos de instrucciones de máquina individuales. El siguiente paso hacia facilitar la programación fue idear **lenguajes del alto nivel** que fueran cercanos a los lenguajes naturales, tales como el inglés, francés, alemán y español. Basic, FORTRAN, COBOL, C, C++, C#, Java, y Python son todos lenguajes de alto nivel. Aprenderás el lenguaje de alto nivel C++ en este libro.

En C++, escribe la ecuación del salario semanal como sigue:

```cpp
wages = rate * hours;
```
La instrucción escrita en C++ es mucho más fácil de entender y es autoexplicativo para un usuario novato que está familiarizado con la aritmética básica. Como en el caso del lenguaje ensamblador, sin embargo, la computadora no puede directamente ejecutar instrucciones en lenguaje de alto nivel. Para ejecutar en una computadora, estas instrucciones C++ primero necesita ser traducido al lenguaje de máquina. Un programa llamado **compilador** traduce las intrucciones escritas en lenguajes de alto nivel al código máquina.

**Compilador**: Un programa que traduce instrucciones escritas en un lenguaje de alto nivel en el lenguaje máquina equivalente.

## Procesando un programa en C++

En las secciones previas, discutimos el lenguaje máquina y los lenguajes de alto nivel y mostramos una declaración C++. Debido a que la computadora puede entender solo lenguaje máquina, está listo para revisar los pasos necesarios para procesar un programa escrito en C ++.

Considere el siguiente programa C++:
{% highlight cpp %}
#include <iostream>
using namespace std;
int main()
{
	cout << "My first C++ program." << endl;
	return 0;
}
{% endhighlight %}
En este punto, no necesita estar demasiado preocupado con los detalles de este programa. Sin embargo, si corre (ejecuta) este programa, se mostrará la siguiente línea en la pantalla
```
My first C++ program.
```
Recordemos que la computadora puede entender solo lenguaje máquina. Por lo tanto, con el fin de correr el programa satisfactoriamente, el código primero debe ser traducido en lenguaje máquina. En esta sección, repasaremos los pasos que se requiere para ejecutar los programas escritos en C++.

Los siguientes pasos, como se muestran en la Figura 1-2, son necesarios para procesar un programa C++.

1. Debe usar un edtor de texto para crear un programa C++ siguiendo las reglas o *sintáxis*, del lenguaje de alto nivel. Este programa es llamado el **código fuente**, o **programa fuente**. El programa debe ser guardado en un archivo de texto que tenga la extensión `.cpp`. Por ejemplo, si guarda el programa precedente en el archivo llamado `FirstCPPProgram`, entonces su nombre completo es `FirstCPPProgram.cpp`.
> **Programa fuente**: Un programa escrito en un lenguaje de alto nivel.
2. El programa C++ dado en la sección precedente contiene la declaración `#include <iostream>`. En un programa C++, las declaraciones que empiezan con el símbolo `#` son llamados directivas del preprocesador. Estas declaraciones son procesadas por un programa llamado **preprocesador**.
3. Después de procesar las directivas del preprocesador, el siguiente paso es verificar que el programa obedece las reglas del lenguaje de programación, esto es, el programa es sintácticamente correcto -- y la traducción del programa en el lenguaje máquina equivalente. El *compilador* comprueba el programa fuente en busca de errores de sintaxis y, si no se encuentra ningún error, traduce el programa en el lenguaje máquina equivalente. El programa equivalente al lenguaje máquina es llamado un **programa objeto**.
> **Programa objeto**: La versión del lenguaje máquina de lenguaje de alto nivel.
4. Los programas que escribe en lenguaje de alto nivel son desarrollados usando un entorno de desarrollo integrado (IDE). El IDE contiene varios programas que son útiles en la creación de su programa. Por ejemplo, contiene el código necesario (programa) para mostrar los resultados del programa y varias funciones matemáticas que hacen el trabajo del programador algo más fácil. Por lo tanto, si cierto código ya está disponible, puedes usar este código en lugar de escribir tu propio código. Una vez que el programa se haya desarrollado y compilado con éxito, aún debe llevar el código de los recursos utilizados desde el IDE a su programa para producir un programa final que la computadora pueda ejecutar. Este código pre escrito (programa) reside en un lugar llamado la **biblioteca**. Un programa llamado **enlazador** combina el programa objeto con los programas de las bibliotecas.
> **Enlazador:**Un programa que combina el programa objeto con los otros programas en la biblioteca y es usado en el programa para crear el código ejecutable.
5. A continuación debe cargar el programa ejecutable en la memoria principal para su ejecución. Un programa llamado **cargador** logra esta tarea.
> **Cargador**: Un programa que carga un programa ejecutable en la memoria principal.
6. El paso final es ejecutar el programa.

![Procesando un programa en C++](/Cpp-Programming/assets/img/figure2.png)
Figura 1-2 muestra cómo se procesa un programa típico de C++.

Como un programador, principalmente necesitas preocuparte con el paso 1. Esto es, debes aprender, entender, y dominar las reglas del lenguaje de programación para creaar programas fuentes.

Como se señaló anteriormente, los programas se desarrollan utilizando un IDE. Los IDEs conocidos utilizados para crear programas en el lenguaje de alto nivel C ++ incluyen Visual C++ Express (2013 o 2016) y Visual Studio 2015 (de Microsoft), GNU/Emacs, CLion de JetBeans y C++ Builder (de Borland). También puede usar Dev-C++ IDE de Bloodshed Software para crear y probar programas C++. Estos IDEs contiene un editor de texto para crear programas fuente, un compilador para verificar el programa fuente en busca de errores de sintaxis, un programa para enlazar el código objeto con los recursos del IDE, y un programa para ejecutar el programa.

Estos IDEs son muy fáciles de usar. Cuando compila su programa, el compilador no solo identificas los errores de sintáxis, pero también suele sugerir cómo corregirlos. Es más, con un simple comando, el código objeto es enlazado con los recursos usado desde el IDE. Por ejemplo, el comando que hace el enlace en Visual C++ Express (2013 o 2016) o Emacs o CLion o Visual Studio 2015 es **Construir** o **Reconstruir**. (Para mayor aclaración sobre el uso de estos comandos, revise la documentación de estos IDEs.) Si el programa aún no está compilado, cada uno de estos comandos primero compila el programa y luego enlaza y produce el código ejecutable.

## Programando con el análisis del problemas, codificación, ciclo de ejecución

La *programación es un proceso de resolución de problemas*. Diferentes personas usan técnicas diferentes para resolver problemas. Algunas técnicas son bien delineadas y fáciles de seguir. No solo resuelven el problema, sino que también dan una idea de cómo se alcanza la solución. Estos ténicas de resolución de problemas pueden ser fácilmente modificadas si el dominio del problema cambia.

Para ser un buen solucionador de problemas y bune programador, debe seguir buenas técnicas de resolución de problemas. Una técnica de resolución de problemas común incluye analizar un problema, describir los requisitos del problema y diseñar pasos, llamado un **algoritmo**, para resolver el problema.

**Algoritmo**: Un proceso de resolución de problemas paso a paso en el que se llega a una solución en un tiempo finito.

En el entorno de la programación, el proceso de resolución de problemas requiere los siguientes tres pasos:
1. Analizar y esbozar el problema y sus requisitos de solución, y diseño de un algoritmo para resolver el problema.
2. Implementar el algoritmo en un lenguaje de programación, tal como C++, y verificar que el algoritmo funciona.
3. Mantener el programa usándolo y modificándolo si el dominio del problema cambia.

![El ciclo del problema del análisis, codificación y ejecución](/Cpp-Programming/assets/img/figure3.png)

La figura 1-3 resume los dos primeros pasos del proceso de programación.

Para desarrollar un programa para resolver un problema, empieza por analizar el problema. Luego diseñas el algoritmo; escribe las instrucciones del programa en un lenguaje de alto nivel, o codifica el programa; y entra al programa al sistema informático. Analizando el problema es el primer paso y el más importante. Este paso requiere que haga lo siguiente:
1. Entender completamente el problema.
2. Entender los requerimientos del problema. Los requerimientos puede incluir si el programa requiere interacción con el usuario, si manipula los datos, si produce resultados y cómo se ve el resultado. Si el programa manipula los datos, el programador debe saber cuáles son los datos y cómo están representados. Esto es, necesita mirar datos de muestra. Si el programa muestra una salida, debe saber cómo se deben generar y formatear los resultados.
3. Si el problema es complejo, divide el problema en subproblemas y repita los pasos 1 y 2. Esto es, para problemas complejos, necesita analizar cada subproblema y analizar los requisitos de cada uno de los subproblemas.

Después que cuidadosamente analizó el problema, el siguiente paso es diseñar un algoritmo para resolver el problema. Si rompes el problema en subproblemas, necesitas diseñar un algoritmo para cada subproblema. Una vez que diseñó un algoritmo, necesita comprobar que sea correcto. A veces se puede probar la corrección de un algoritmo utilizando datos de muestra. En otras veces, es posible que necesite realizar algún análisis matemático para probar la exactitud del algoritmo.

Una vez hayas diseñado el algoritmo y verificado su exactitud, el siguiente paso es convertirlo en un código de programación equivalente. A continuación, utiliza un editor de texto para ingresar el código programado o el programa en la computadora. Luego, asegúrese que el programa siga la sintaxis del lenguaje. Para verificar la exactitud de la sintaxis, corra el código mediante un compilador. Si el compilador genera mensajes de error, debe identificar los errores en el código, removerlos, y entonces correr el código mediante el compilador nuevamente. Cuando todos los errores de sintaxis fueron removidos, el compilador genera el código máquina equivalente. el enlazador enlace el código máquina con los recursos del sistema, y el cargador colocar el programa en la memoria principal para que pueda ser ejecutado.

El paso final es ejecutar el programa. El compilador garantiza que solo el programa siga la sintaxis del lenguaje. No garantiza que el programa se ejecutará correctamente. Durante la ejecución, el programa podría terminar anormalmente debido a errores lógicos, como la división por cero. Incluso si el programa termina normalmente, todavía puede generar resultados erróneos. Bajo estas circunstancias, Es posible que tenga que volver a examinar el código, el algoritmo o incluso el análisis del problema.

Su experiencia de programación en general será exitosa si dedica suficiente tiempo a completar el análisis del problema antes de intentar escribir las instrucciones de programación. Usualmente, haga este trabajo en papel con un bolígrafo o un lápiz. Tomando este enfoque cuidadoso de la programación tiene varias ventajas. Es mucho más fácil encontrar errores en un programa que está bien analizado y bien diseñado. Además, un programa cuidadosamente analizado y diseñado es mucho más fácil de seguir y modificar. Incluso los programadores más expertos pasan un cantidad considerable de tiempo analizando un problema y diseñando un algoritmo.

A lo largo de este libro, no solo aprenderá las reglas de escribir programas en C++, sino que también aprenderá técnicas de resolución de problemas. La mayoría de los capítulos contienen ejemplos de programación que tratan problemas de programación. Estos problemas de programación enseñan técnicas de cómo analizar y resolver problemas, diseñar algoritmos, codificar los algoritmos en C++, y también ayudar a entender los conceptos discutidos en el capítulo. Para obtener el máximo beneficio de este libro, le recomendamos que analice estos ejemplos de programación.

A continuación, proporcionamos ejemplos de varias técnicas de análisis de problemas y de diseño de algoritmos.

### Ejemplo 1-1

En este ejemplo, diseñamos un algoritmo para encontrar el perímetro y el área de un rectángulo.

Para encontrar el perímetro y el área de un rectángulo, necesitas conocer el largo y ancho del rectángulo. El perímetro y el área del rectángulo luego son dadas por las siguientes fórmulas:
```
perimeter = 2 $\cdot$ (length + width)
area = length $\cdot$ width
```
El algoritmo para encontrar el perímetro y el área de un rectángulo es como sigue:
1. Consigue el largo del rectángulo.
2. Consigue el ancho del rectángulo.
3. Encuentre el perímetro usando la siguiente ecuación:
```
perimeter = 2 $\cdot$ (length + width)
```
4. Encuentre el área usando la siguiente ecuación:
```
area = length $\cdot$ width
```

### Ejemplo 1-2

En este ejemplo, diseñamos un algoritmo que calcula el impuesto a las ventas y el precio de un artículo vendido en un estado particular.

El impuesto a las ventas es calculado como sigue: La parte del impuesto a las ventas de los estados es 4%, y la parte del impuesto a las ventas de la ciudad es del 1.5%. Si el artículo es un artículo de lujo, como un automóvil más de $50000, entonces hay un impuesto de lujo del 10%.

Para calcular el precio del artículo, necesitamos calcular la parte del impuesto a las ventas del estado, la parte del impuesto al impuesto a las ventas, y, si el artículo es de lujo, el impuesto de lujo. Suponga que `salePrice` denota el precio de venta del artículo, `stateSalesTax` denota el impuesto a la venta del estado, `citySalesTax` denota el impuesto a la venta de la ciudad, `luxuryTax` denota el impuesto de lujo, `salesTax`, denota el impuesto a la venta total, y `amountDue` denota el precio final del artículo.

Para calcular el impuesto a la venta, debemos conocer el precio de venta de cada artículo y cuando sea un artículo de lujo.

El `stateSalesTax` y `citySalesTax` puede ser calculado usando las siguientes fórmulas:
```
stateSalesTax = salePrice $\cdot$ 0.04
citySalesTax = salePrice $\cdot$ 0.015
```
A continuación, puede determinar `luxuryTax` como sigue:
```
if (item is a luxury item)
	luxuryTax = salePrice $\cdot$ 0.1
otherwise
	luxuryTax = 0
```
A continuación, puede determinar `salesTax` como sigue:
```
stateSalesTax = stateSalesTax + citySalesTax + luxuryTax
```
Finalmente, puede determinar `amountDue` como sigue:
```
amountDue = salePrice + salesTax
```
El algoritmo para determinar `salesTax` y `amountDue` is, therefore:
1. Conseguir el precio de venta de cada artículo.
2. Determinar cuándo el artículo es un artículo de lujo.
3. Encuentre la parte del impuesto a la venta del estado usando la fórmula:
```
stateSalesTax = salePrice $\cdot$ 0.04
```
4. Encuentre la parte del impuesto a la venta de la ciudad usando la fórmula:
```
citySalesTax = salePrice $\cdot$ 0.015
```
5. Encuentre el impuesto de lujo usando la siguiente fórmula:
```
if (item is a luxury item)
	luxuryTax = salePrice $\cdot$ 0.1
otherwise
	luxuryTax = 0
```
6. Encuentre `salesTax` usando la fórmula:
```
salesTax = stateSalesTax + citySalesTax + luxuryTax
```
7. Encuentre `amountDue` usando la fórmula:
```
amountDue = salePrice + salesTax
```

### Ejemplo 1-3

En este ejemplo, diseñamos un algoritmo que calcula el cheque mensual de un vendedor en una tienda por departamentos local.

Cualquier vendedor tiene un salario base. El vendedor también recibe un bono al final de cada mes, basado en los siguientes criterios: Si el vendedor ha estado en la tienda por cinco años o menos, el bono es $\$10$ por cada año que él o ella ha trabajo allá. Si el vendedor ha estado trabajando en la tienda por más de cinco años, el bono es $\$20$ por acada año que él o ella ha trabajado allá. El vendedor puede ganar una bonificación adicional de la siguiente manera: Si las ventas totales realizadas por el vendedor durante el mes son al menos $\$5000$ pero menos que
$\$10000$, él o ella recibe una comisión del 3% de la venta. Si el total de las ventas realizadas por el vendedor son por lo menos $\$10000$, él o ella reciben una comisión del 6% de la venta.

Para calcular el cheque mensual de un vendedor, necesitas conocer el salio base del número de años que el vendedor ha estado en la compañía, y las ventas total realizadas por vendedor durante el mes. Suponga que el `baseSalary` denota el salio base, `noOfServiceYears` denota el número de años que el vendedor ha estado en la tienda, `bonus` denota el bono, `totalSales` denota las ventas totales realizadas por el vendedor durante el mes, y `additionalBonus` denota el bono adicional.

Puede determinar el bono como sigue:
```
if (noOfServiceYears is less than or equal to five)
	bonus = 10 $\cdot$ noOfServiceYears
otherwise
	bonus = 20 $\cdot$ noOfServiceYears
```
A continuación, puede determinar el bono adicional del vendedor como sigue:
```
if (totalSales is greather than or equal to 5000 and totalSales is less than 10000)
	additionalBonus = totalSales $\cdot$ (0.03)
otherwise
	additionalBonus = totalSales $\cdot$ (0.06)
```
Siguiendo la discusión de arriba, puede ahora diseñar el algoritmo para calcular el cheque mensual de un vendedor:
1. Consiga `baseSalary`.
2. Consiga `noOfServiceYears`.
3. Calcule el bono usando la siguiente fórmula:
```
if (noOfServiceYears is less than or equal to five)
	bonus = 10 $\cdot$ noOfServiceYears
otherwise
	bonus = 20 $\cdot$ noOfServiceYears
```
4. Consiga `totalSales`.
5. Calcule `additionalBonus` usando la siguiente fórmula:
```
if (totalSales is less than 5000)
	additionalBonus = 0
otherwise
	if (totalSales is greather than or equal to 5000 and totalSales is less than 10000)
		additionalBonus = totalSales $\cdot$ (0.03)
	otherwise
		additionalBonus = totalSales $\cdot$ (0.06)
```
6. Calcule `payCheck` usando la ecuación:
```
payCheck = baseSalary + bonus + additionalBonus
```

### Ejemplo 1-4

En este ejemplo, diseñamos un algoritmo para jugar un juego de adivinar números. El objetivo es generar aleatoriamente un número entero mayor o igual a 0 y menor de 100. Entonces el aviso del jugador (usuario) conjetura el número. Si el jugador adivina el número correctamente, muestra un mensaje apropiado. De lo contrario, compruebe si el número adivinado es menor que el número aleatorio, muestra el mensaje, "Tu conjetura es menor que el número. Conjetura otra vez!"; caso contrario, muestra el mensaje, "Tu conjetura es mayor que el número Conjetura otra vez!". El jugador es avisado para ingresar otro número. El jugador es avisado para adivinar el número aleatorio a menos que el jugador ingrese el número correcto.

El primer paso es generar un número aleatorio, como es descrito arriba. C++ proporciona los medios para hacerlo, que se discute en el capítulo 5. Suponga que `num` representa el número aleatorio y `guess` representa el número adivinado por el jugador.

Después que el jugador ingresa el `guess`, puede comparar el `guess` con el nüumero aleatorio como sigue:
```
if (guess is equal to num)
	Print "You guessed the correct number."
otherwise
	if (guess is less than num)
		Print "Your guess is lower than the number. Guess again!"
	otherwise
		Print "Your guess is higher than the number. Guess again!"
```
Puede ahora diseñar el algoritmo como sigue:
1. Genere el número aleatorio y llámalo `num`.
2. *Repita* los siguientes pasos hasta el que jugador ha adiviando el número correcto:
   a. Pida al jugador que ingrese `guess`.
   b. Verifique el valor de `guess`.
```
if (guess is equal to num)
	Print "You guessed the correct number."
otherwise
	if (guess is less than num)
		Print "Your guess is lower than the number. Guess again!"
	otherwise
		Print "Your guess is higher than the number. Guess again!"
```
En el capítulo 5, usaremos este algoritmo para escribir un programa C++ para juegar el juego de adivinar números.

### Ejemplo 1-5

Hay 10 estudiantes en una clase. Cada estudiante ha tomado cinco pruebas, y cada prueba vale 100 puntos. Queremos diseñar un algoritmo que calcule el grado para cada estudiante, así como el promedio de la clase. El grado es asignado como sigue: Si el puntaje medio de la prueba es mayor o igual que 90, el grado es `A`; si el puntaje medio de la prueba es mayor o igual que  80 y menor que 90, el grado es `B`; si el puntaje medio de la prueba es mayor o igual que  70 y menor que 80, el grado es `C`; si el puntaje medio de la prueba es mayor o igual que  60 y menor que 70, el puntaje es `D`; caso contrario, el grado es `F`. Tenga en cuenta que los datos consisten en los nombres de los estudiantes y sus puntajes de la prueba.

Este es un problema que puede ser dividio en subproblemas como sigue: Hay cinco pruebas, diseñe un algoritmo para encontrar el puntaje promedio de la prueba. A continuación, diseñe un algoritmo que determine el grado. Los dos subproblemas son para determinar el puntaje promedio de la prueba y calcular el grado.

Primero diseñemos un algoritmo para determinar el puntaje medio de la prueba. para encontrar el puntaje medio de la prueba, agregue los cinco puntajes de la prueba y luego divida la suma por 5. Por lo tanto, el algorimo es como sigue:
1. Consiga los cinco puntajes de la prueba.
2. Suma los cinco puntajes de la prueba. Suponga que `sum` representa la suma de los puntajes de la prueba.
3. Suponga que `average` represent el puntaje promedio de la prueba. Entonces
```
average = sum / 5;
```
A continuación, diseñe un algoritmo que determine el grado. Suponga que `grade` representa el grado asignado a un estudiante. El siguiente algoritmo determina el grado:
```
if average is greater than or equal to 90
	grade = A
otherwise
	if average is greater than or equal to 80
		grade = B
	otherwise
		if average is greater than or equal to 70
			grade = C
		otherwise
			if average is greater than or equal to 60
				grade = D
			otherwise
				grade = F
```
Puede usar las soluciones de estos subproblemas para diseñar el algoritmo principal como sigue: (Suponga que `totalAverage` representa la suma de los promedios de la nota media de cada estudiante)
1. `totalAverage = 0;`
2. *Repita* los siguientes pasos para cada estudiante en la clase:
	a. Consiga el nombre del estudiante.
	b. Use el algoritmo discutido arriba para encontrar el puntaje medio de la prueba.
	c. Use el algoritmo discutido arriba para encontrar el grado.
3. Actualice `totalAverage` añadiendo el puntaje promedio de la prueba del estudiante actual.
4. Determine el promedio de clase como sigue:
```
classAverage = totalAverage / 10
```
Un ejercicio de programación en el capítulo 8 le pregunta que escriba un programac C++ para calcular el puntaje promedio de la prueba y el grado de cada estudiante en una clase.

> Nota> Al inicio de este capítulo se describió el análisis del problema, codificación y el ciclo de ejecución. En esta sección, ganamos varios ejemplos que ilustran el análisis del problema y el ciclo de codificación. Hay que señalar que el análisis de problemas es la parte más importante de la programación. Una vez que haya analizado el problema y haya escrito los pasos necesarios de la solución en su idioma nativo, entonces, como verá a través del texto, escribir el código C++ para implementar su solución es relativamente fácil. Además, pronto reconocerá que los pasos de sus soluciones se pueden traducir efectivamente a un código C++. Además, un buen análisis de problemas conducirá a un programa mejor y más limpio. Incluso aunque todavía no hemos introducido la sintaxis de C++, para ilustrar cómo escribir un código de C++ correspondiente a los pasos de su solución, consideremos el algoritmo diseñado en el ejemplo 1-1. Suponga `length`, `width`, `perimeter`, and `area` representa la longitud, ancho, perímetro, y área de un rectángulo. Aquí están los cuatro pasos de un algoritmo y sus correspondientes declaraciones C++:

| Paso de algoritmo | Instrucción C++ (código) |
| 1. Consiga la longitud del rectángulo. | `cin >> length;` |
| 2. Consiga el ancho del rectángulo. | `cin >> width;` |
| 3. Calcule el perímetro. | `perimeter = 2 * (length + width);` |
| 4. Calcule el área. | `area = length * width;` |

Considere la primera declaración. En C++, `cin` representa la entrada común. Durante la ejecución del programa, el código asociado a él le indica al usuario que ingrese datos y si el usuario ingresa un dato válido, ese dato se almacenará en la memoria, es decir, se convertirá en el valor de `length`. El código C++ en el paso 3 usa los valores de `length` y `width` para calcular el `perimeter`, que luego se asigna a `perimeter`.

Para escribir un programa completo en C++ para calcular el área y el perímetro, necesita conocer la estructura básica de un programa en C++, el cual será introducido en el siguiente capítulo. Sin emabargo, si tiene curiosidad por saber cómo se ve el programa completo de C++, puede visitar el sitio web que acompaña a este libro y consultar el código de programación almacenado en el archivo `Ch1_Example_1-1_Code.cpp`.

## Metodologías de programación

Dos enfoques populares para el diseño de programación son el enfoque estructurado y el enfoque orientado a objetos, que se describen a continuación.

### Programación estructurada

Dividir un problema en subproblemas más pequeños se llama **diseño estructurado**. Luego se analiza cada subproblema y se obtiene una solución para resolver el subproblema. Las soluciones a todos los subproblemas se combinan para resolver el problema general. Este proceso de implementación de un diseño estructurado se denomina **programación estructurada**. El enfoque de diseño estructurado también se conoce como **diseño descendente**, **diseño ascendente**, **refinamiento por pasos** y **programación modular**.

### Programación orientada a objetos

**Diseño orientado a objetos (ODD)** es una metodología de programación muy utilizada. En ODD, el primer paso en la resolución de problemas es identificar los componentes llamados objetos, que forman la base de la solución, y para determinar cómo estos objetos interactúan entre sí. Por ejemplo, suponga que desea escribir un programa que automatice el proceso de alquiler de DVD para una tienda de DVD local. Los dos objetos principales en este problema son el DVD y el cliente.

Después de identificar los objetos, el siguiente paso es especificar para cada objeto los datos relevantes y las posibles operaciones a realizar en esos datos. Por ejemplo, para un objeto de DVD, la *data* pueden incluir: 
* nombre de la película
* año de lanzamiento
* productor
* compañía de producción
* número de copias en stock
Algunas de las *operaciones* en un objeto dvd podría incluir:
* verificando el nombre de la película
* reduciendo el número de copias en stock en una luego que se alquila una copia.
* incrementando el número de copias en stock por unidad después de un cliente devuelve un DVD particular.

Esto ilustra que cada objeto consiste de datos y operaciones en los datos en una sola unidad. Un objeto combina datos y operaciones en los datos en una sola unidad. En ODD, el programa final es una colección de objetos que interactúan. Un lenguaje de programación que implementa ODD se denomina lenguaje de programación orientado a objetos (OPP). Aprenderá acerca de las muchas ventajas de ODD en capítulos posteriores.

Porque un objeto consiste en datos y operaciones en esos datos, antes de que pueda diseñar y usar objetos, necesita aprender cómo representar los datos en la memoria de la computadora, cómo manipular los datos y cómo implementar operaciones. En el capítulo 2, aprenderá los tipos de datos básicos de C++ y descubrirá cómo representar y manipular los datos en la memoria de la computadora. El capítulo 3 explica cómo ingresar datos en un programa C++ y generar los resultados generados por un programa C++.

Para crear operaciones, escriba algoritmos e implemente en un lenguaje de programación. Debido a que el elemento de datos en un programa complejo generalmente tiene muchas operaciones, para separar las operaciones entre sí y para usarlas de manera efectiva y conveniente, se usan funciones para implementar algoritmos. después de una breve introducción en el Capítulo 2 y 3, aprenderá los detalles de las funciones en el Capítulo 6. 

Ciertos algoritmos requieren que un programa tome decisiones, un proceso llamado selección. Otros algoritmos pueden requerir que ciertas declaraciones se repitan hasta que se cumplan ciertas condiciones, un proceso llamado repetición. Otros algoritmos requieren selección y repetición. Aprenderá sobre los mecanismos de selección y repetición, llamados estructuras de control en los capítulos 4 y 5. También, en el capítulo 8, utilizando un mecanismo llamado arreglo, aprenderá cómo manipular los datos cuando los elementos de datos son del mismo tipo, como los artículos en una lista de cifras de ventas.

Finalmente, para trabajar con objetos, necesita saber cómo combinar datos y operaciones en los datos en una sola unidad. En C++, el mecanismo que le permite combinar datos y operaciones en los datos en una sola unidad se llama clase. aprenderá cómo funcionan las clases, cómo trabajar con clases y cómo crear clases en el capítulo Clases y la abstracción de datos (más adelante en este libro).

Como puede ver, necesita aprender algunas cosas antes de trabajar con la metodología OOD. Para hacer este aprendizaje más fácil y efectivo, este libro divide a propósito las estructuras de control en dos capítulos. (Capítulo 4--Selección; Capítulo 5--Repetición).

Para algunos problemas, el enfoque estructurado del diseño del programa será muy efectivo. Otros problemas serán mejor tratados por ODD. Por ejemplo, si un problema requiere manipular conjuntos de números con funciones matemáticas, puede usar el enfoque de diseño estructurado y describir los pasos necesarios para obtener la solución. La biblioteca de C++ proporciona una gran cantidad de funciones que puede usar de manera efectiva para manipular números. Por otro lado, si desea escribir un programa que haga que una máquina de jugo funcione, el enfoque ODD es más efectivo. C++ fue diseñado especialmente para implementar ODD. Además, ODD *funciona bien con diseño estructurado*. Tanto el enfoque estructurado como el ODD requieren que domines los componentes básicos de un lenguaje de programación para ser un programador eficaz. En los capítulos 2 al 8, aprenderá los componentes básicos de C++, tales como tipos de datos, entrada/salida, estructuras de control, funciones definidas por el usuario y arreglos, requeridas por cualquier tipo de programación. Desarrollamos e ilustramos cómo funcionan estos conceptos utilizando el enfoque de programación estructurada. A partir del capítulo Clases y abstracción de datos, desarrollamos y utilizamos el enfoque ODD.

## Mathematics :+1:
