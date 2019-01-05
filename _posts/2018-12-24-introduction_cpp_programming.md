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

**Programa fuente**: Un programa escrito en un lenguaje de alto nivel.

2. El programa C++ dado en la sección precedente contiene la declaración `#include <iostream>`. En un programa C++, las declaraciones que empiezan con el símbolo `#` son llamados directivas del preprocesador. Estas declaraciones son procesadas por un programa llamado **preprocesador**.
3. Después de procesar las directivas del preprocesador, el siguiente paso es verificar que el programa obedece las reglas del lenguaje de programación, esto es, el programa es sintácticamente correcto -- y la traducción del programa en el lenguaje máquina equivalente. El *compilador* comprueba el programa fuente en busca de errores de sintaxis y, si no se encuentra ningún error, traduce el programa en el lenguaje máquina equivalente. El programa equivalente al lenguaje máquina es llamado un **programa objeto**.
**Programa objeto**: La versión del lenguaje máquina de lenguaje de alto nivel.
4. Los programas que escribe en lenguaje de alto nivel son desarrollados usando un entorno de desarrollo integrado (IDE). El IDE contiene varios programas que son útiles en la creación de su programa. Por ejemplo, contiene el código necesario (programa) para mostrar los resultados del programa y varias funciones matemáticas que hacen el trabajo del programador algo más fácil. Por lo tanto, si cierto código ya está disponible, puedes usar este código en lugar de escribir tu propio código. Una vez que el programa se haya desarrollado y compilado con éxito, aún debe llevar el código de los recursos utilizados desde el IDE a su programa para producir un programa final que la computadora pueda ejecutar. Este código pre escrito (programa) reside en un lugar llamado la **biblioteca**. Un programa llamado **enlazador** combina el programa objeto con los programas de las bibliotecas.
**Enlazador:**Un programa que combina el programa objeto con los otros programas en la biblioteca y es usado en el programa para crear el código ejecutable.
5. A continuación debe cargar el programa ejecutable en la memoria principal para su ejecución. Un programa llamado **cargador** logra esta tarea.
**Cargador**: Un programa que carga un programa ejecutable en la memoria principal.
6. El paso final es ejecutar el programa.

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

La figura 1-3 resume los dos primeros pasos del proceso de programación.

Para desarrollar un programa para resolver un problema, empieza por analizar el problema. Luego diseñas el algoritmo; escribe las instrucciones del programa en un lenguaje de alto nivel, o codifica el programa; y entra al programa al sistema informático. Analizando el problema es el primer paso y el más importante. Este paso requiere que haga lo siguiente:
1. Entender completamente el problema.
2. Entender los requerimientos del problema. Los requerimientos puede incluir si el programa requiere interacción con el usuario, si manipula los datos, si produce resultados y cómo se ve el resultado. Si el programa manipula los datos, el programador debe saber cuáles son los datos y cómo están representados. Esto es, necesita mirar datos de muestra. Si el programa muestra una salida, debe saber cómo se deben generar y formatear los resultados.
3. Si el problema es complejo, divide el problema en subproblemas y repita los pasos 1 y 2. Esto es, para problemas complejos, necesita analizar cada subproblema y analizar los requisitos de cada uno de los subproblemas.

Después que cuidadosamente analizó el problema, el siguiente paso es diseñar un algoritmo para resolver el problema. Si rompes el problema en subproblemas, necesitas diseñar un algoritmo para cada subproblema. Una vez que diseñó un algoritmo, necesita comprobar que sea correcto. A veces se puede probar la corrección de un algoritmo utilizando datos de muestra. En otras veces, es posible que necesite realizar algún análisis matemático para probar la exactitud del algoritmo.

Una vez hayas diseñado el algoritmo y verificado su exactitud, el siguiente paso es convertirlo en un código de programación equivalente. A continuación, utiliza un editor de texto para ingresar el código programado o el programa en la computadora. Luego, asegúrese que el programa siga la sintaxis del lenguaje. Para verificar la exactitud de la sintaxis, corra el código mediante un compilador. Si el compilador genera mensajes de error, debe identificar los errores en el código, removerlos, y entonces correr el código mediante el compilador nuevamente. Cuando todos los errores de sintaxis fueron removidos, el compilador genera el código máquina equivalente. el enlazador enlace el código máquina con los recursos del sistema, y el cargador colocar el programa en la memoria principal para que pueda ser ejecutado.



~~Mist~~

## Mathematics :+1: