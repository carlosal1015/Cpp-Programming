An overview of computers and programming languages
===

En este capítulo,
* Aprenderás sobre los distintitos tipos de ordenadores.
* Explorarás los componentes del software y hardware de un sistema computacional.
* Aprenderás sobre el lenguaje de las computadoras.
* Aprenderás sobre la evolución de los lenguajes de computadora.
* Examinarás los lenguajes de programación de alto nivel.
* Descubrirás que es el compilador y qué es lo que hace.
* Examinarás un programa en C++.
* Explorarás cómo un programa en C++ es procesado.
* Aprenderás qué es un algoritmo y explorarás las técnicas para resolver problemas.
* Tomarás conciencia del diseño de la estructura y las metodologías del diseño de la programación orientado a objetos.
* Tomarás conciencia del ANSI/ISO Standard C++, C++11, C++14.

## Introducción

Términos tales como "el internet", que fueron desconocidos justo hace 25 años ahora son comunes. Los estudiantes en la escuela elemental "surfean" regularmente el internet y usan computadoras para diseñar e implementar sus projectos de clase. Muchas personas usan el internet para buscar información y para comunicarse con otros. Todo esto es posible por el uso de una varidad de software, también conocido como programas de ordenarores. Sin el software, las computadores no pueden trabajar. El software es desarrollado por el uso de lenguajes de programación. C++ es uno de los lenguajes de programación, que es muy adecuado para desaroolar software que cumplan tareas específicas. El objetivo principal del libro es ayudar que aprendas el lenguaje de programación C++ para escribir programas. Antes que inicies a programar, resulta útil entender algunas de la terminología básica y los diferentes componentes de una computadora. Empezaremos con un resumen de la historia de las computadoras.

## Un breve resumen de la historia de las computadoras

El primer dispositivo conocido para llevar a cabo cálculos fue el ábaco. El ábaco fue inventado en Asia, pero fue usado en la antigua Babilonia, China y a lo largo de Europa hasta finales de la edad media. En 1642, el filósofo francés y matemático Blaise Pascal inventó un dispositivo de cálculo llamado la Pascalina. Tenía ocho discos móviles sobre ruedas y podía calcular sumas de hasta ocho cifras. Juntos el ábaco y la Pascalina pudieron realizar solo las operaciones de adición y sustracción. Luego en el siglo XVII, Gottfried von Leibniz inventó un dispositivo que podía sumar, restar, multiplicar y dividir. En 1819, Joseph Jacquard, un tejedor francés, descubrió que las instrucciones de tejer para sus telares se pueden almacenar en tarjetas con agujeros perforados. Mientras las tarjetas se movían a través del telar en secuencia, las agujas pasaron por los agujeros y recogían hilos del color y la textura correctas. Un tejedor podría reordenar las tarjetas y cambiar el patrón que se está tejiendo. En esencia, las tarjetas programaron un telar para producir patrones en tela. La industria del telar puede parecer que tiene poco en común con la industria informática. Sin embargo, la idea de almacenar información haciendo agujeros en una tarjeta demostró ser de gran importancia en el desarrollo posterior de las computadoras.

A principios y mediados de 1800, Charles Babbage, un matemático inglés y científico físico, diseñó dos máquinas calculadoras: la diferencia entre la máquina diferencial y la máquina analítica. La máquina diferencial podía realizar operaciones complejas tales como elevar al cuadrado un número automáticamente. Babbage construyó un prototipo de la máquina diferencial, pero no puedo construir el dispositivo actual. La primera completa máquina diferencial fue terminana en Londres en el 2002, 153 años después de su diseño. Este consiste de 8000 pares, pesa cinco toneladas y mide once pies de largo. Una réplica de la máquina diferencial fue completada en el 2008 y está en exhibición en el Computer History Museum in Mountain View, California. Gran parte del trabajo de Babbage es conocido a través de su colega Ada Augusta, Condesa de Lovelace. Augusta es considera la primera programadora de ordenadores.

A finales del siglo XIV, los funcionarios del Censo de los Estados Unidos de América necesitaron ayuda en tabular con precisión los datos del censo. Herman Hollerith inventó la máquina calculadora que corría sobre electricidad y usó tarjetas perforadas usadas para almacenar datos. La máquina de Hollerith fue inmensamente exitoso. Hollerith fundó la Tabulating Machine Company, que más tarde se convirtió en la corporación informática y tecnológica conocida como IBM.

La primera máquina similar a una computadora fue Mark I. Fue construida en 1944 por la Universidad de Harvad en conjunto con IBM bajo el liderazgo de Howard Aiken. Se utilizaron tarjetas perforadas para introducir datos en la máquina. El Mark I tenía 52 píes de largo, pesaba 50 toneladas y tenía 750000 partes. En 1946, el Computador e Integrador Numérico Electrónico (ENIAC) fue construido en la Universidad de Pensilvania. Esto contenía 18000 tubos vacíos y pesaba algunas 30 toneladas.

Las computadoras que conocemos hoy día usan las reglas diseñadas por John von Neumann a finales de 1940. Su diseño incluía componentes tales como la unidad aritmética lógica, una unidad de control y dispositivos de entradas y salida. Estos componentes son descritos en la siguiente sección. El diseño de la computadora de Von Neumann hizo posible guardar las instrucciones de programación y los datos en el mismo espacio de memoria. En 1951, la Computadora Automática Universal (UNIVAC) fue construida y vendida la Oficina del Censo de los Estados Unidos.

En 1956, la invención de los transistores dio como resultado computadoras más pequeñas, más rápidas, más confiables y más eficientes energéticamente. Esta era también vio la aparición de la industria de desarrollo de software, con la introducción de FORTRAN y COBOL, dos primeros lenguajes de programación. En el próximo gran avance tecnológico, los transistores fueron reemplazados por circuitos integrados de tamaño pequeño, o "chips". Los chips son mucho más pequeños y eficientes que los transistores. Dan a las computadoras tremeda rapidez de procesamiento.

En 1970, el microprocesador, una unidad central de procesos (CPU) en un solo chip, fue inventado. EN 1977, Stephen Wozniak and Steven Jobs diseñó y construyó el primer ordenador Apple en sus garajes. EN 1981, IBM presentó su computadora personal (PC). En la década de 1980, Las copias de la PC de IBM hicieron la computadora personal aún más asequible. A mediados de 1990, las peronas de muchos ámbitos de la vida fueron capaces de pagarlos. Las computadoras continúan haciéndose más rápido y menos costoso a medida que avanza la tecnología.

Las computadoras modernas son poderosas, de confianza y fáciles de usar. Ellos pueden aceptar instrucción hablada y razonamiento humano a través de la inteligencia artificial. Los sistemas expertos ayudan a los doctores a hacer diagnósticos. Las aplicaciones de computación móvil están creciendo significativamente. Utilizando dispositivos de mano, los conductores de entrega pueden acceder a satélites de posicionamiento global (GPS) para verificar las localizaciones de los clientes para recogidas y entregas. Los teléfonos celulares le permiten revisar su e-mail, hacer reservaciones aéreas, ver cómo se están desempeñando las acciones, acceder a sus cuentas bancarias, y comunicarse con la familia y amigos vía medios sociales.

Si bien existen varias categorías de computadoras, como miniframe, tamaño mediano y micro, todas las computadoras comparten algunos elementos básicos, que se describen en la siguiente sección.

## Elementos de un sistema informático

Una computadora es un dispositivo electrónico capaz de realizar comandos. Los comandos básico que una computadora realiza son la entrada (obtener datos), salida (mostrar el resultado), almacenamiento, y realizar operaciones artiméticas y lógicas. Existen dos componentes principales de un sistema informático: hardware y software. En las siguientes secciones, aprenderás un breve resumen de estos componentes. Veamos primero el hardware.

### Hardware

Los componentes principales incluyen la unidad de procesamiento central (CPU); memoria principal (MM), también llamado como memoria de acceso aleatorio (RAM); dispositivos de entrada/salida; y el almacenamiento secundario. Algunos ejemplos de dipositivos de entrada son el teclado, el mouse y el almacenamiento secundario. Ejemplode dispositivos de salida son la pantalla, la impresora y el almacenamiento secundario. Veamos cada uno de estos componentes en mayor detalle.

### Unidad de procesamiento central y memoria principal

La **unidad de procesamiento central** es el "cerebro" de una comptadora y la pieza más costosa del hardware de una computadora. Cuanto más poderosa sea el CPU, más rápida será el ordenador. Las operaciones aritméticas y lógicas se llevan a cabo en el CPU.

% Figura 1

La **memoria principal**, o la **memoria de acceso aleatorio**, es conectada directamente al CPU. Todos los programas deben ser cargadas en la memoria princiapl antes de que ellos sean ejecutados. Similarmente, todos los datos deben ser llevados a la memoria principal antes que un programa puede ser manipulado. Cuando la computadora se apaga, todo en la memoria principal se pierde.

La memoria principal es una secuencia ordenada de celdas, llamada **celdas de memoria**. Cada celda tiene una única localización en la memoria principal, llamada la **dirección** de la celda. Cada dirección le ayuda a acceder la información guardada en la celda. La Figura 1-1 (b) muestra la memoria principal con algunos datos.

Las computadoras de hoy vienen con la memoria principal que consta de millones de billones de celda. A pesar que la Figura 1-1 (b) muestra los datos guardados en celdas, el contenido de cada celda puede ser una instrucción de programación o datos. Es más, esta figura muestra los datos como números y letras. Sin embargo, como se explicó anteriormente en este capítulo, la memoria principal guarda todo como secuencias de ceros y unos. La dirección de memoria también es expresada como secuencias de ceros y unos.

## Almacenamiento secundario

Porque los programas y los datos deben ser cargados en la memoria principal antes del procesamiento y porque todo en la memoria principal es perdida cuando la computadora es apagada, la información guardada en la memoria principal debe ser guardado en algún otro dispositivo para su almacenamiento permamente. El dispositivo que almacena información permanentemente (a menos que el dispositivo se vuelva inutilizable o cambia la información reescribiéndola) es llamada **almacenamiento secundario**. Para habilitar la transferencia de información desde la memoria principal hacia la memoria secundaria, estos componentes deben estar directamente conectados entre sí. Ejemplos de almacenamiento secundario son los discos duros, unidades flash y los CD-ROM.

### Dispositivos de entrada/salida

Para que una computadora realice una tarea útil, debe de permiterle tomar los datos y programas y mostrar los resultados de los cálculos. Los dispositivos que alientan los datos y programas a las computadoras son llamados **dispositivos de entrada**. El teclado, el mouse, el escáner, la cámara y el almacenamiento secundario son ejemplos de dispositivos de entrada. Los dispositivos que la computura usa para mostrar los resultados son llamados **dispositivos de salida**. El monitor, la impresora y el almacenamiento secundario son ejemplos de dispositivos de salida.

### Software

El software son programas escritos para realizar tareas específicas. Por ejemplo, los procesaores de testos son programas que usa para escribir cartas, artículos, e incluso libros. Cualquier software es escrito en lenguajes de programación. Existen dos tipos de programas: los programas del sistema y las programas de aplicación.

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

## The Evolution of Programming Languages

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
Como puede ver, esto es mucho más fácil que escribir instrucciones en lenguaje ensamblador. Sin embargo, una computador no puede ejecutar las instrucciones del lenguaje ensamblador directamente. Las instrucciones primero tiene que transladarse en lenguaje máquina. Un programa llamado **ensamblador** traduce las instrucciones del lenguaje ensambadlor en lenguaje máquina.

**Emsamblador**: Un programa que traduce un programa escrito en lenguaje ensamblador en un programa equivalente en lenguaje máquina.

Pasando del lenguaje máquina a el lenguaje ensamblador hace la programación más fácil, pero un programador todavía estaba obligado a pensar en términos de instrucciones de máquina individuales. El siguiente paso hacia facilitar la programación fue idear **lenguajes del alto nivel** que fueran cercanos a los lenguajes naturales, tales como el inglés, francés, alemán y español. Basic, FORTRAN, COBOL, C, C++, C#, Java, y Python son todos lenguajes de alto nivel. Aprenderás el lenguaje de alto nivel C++ en este libro.

En C++, escribe la ecuación del salario semanal como sigue:

```cpp
wages = rate * hours;
```
La instrucción escrita en C++ es mucho más fácil de entender y es autoexplicativo para un usuario novato que está familiarizado con la aritmética básica. Como en el caso del lenguaje ensamblador, sin embargo, la computadora no puede directamente ejecutar instrucciones en lenguaje de alto nivel. Para ejecutar en una computadora, estas instrucciones C++ primero necesita ser traducido al lenguaje de máquina. Un programa llamado **compilador** traduce las intrucciones escritas en lenguajes de alto nivel al código máquina.

**Compilador**: Un programa que traduce instrucciones escritas en un lenguaje de alto nivel en el lenguaje máquina equivalente.

## Procesando un porgrama C++

En las secciones previas, discutimos el lenguaje máquina y los lenguajes de alto nivel y mostramos una declaración C++. Debido a que la computadora puede entender solo lenguaje máquina, está listo para revisar los pasos necesarios para procesar un programa escrito en C ++.

Considere el siguiente programa C++:
```cpp
#include <iostream>
using namespace std;
int main()
{
	cout << "My first C++ program." << endl;
	return 0;
}
```
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
4. El programa