---
layout: post
title: An overview of computers and programming languages (P)
tags: hello-world odd 
categories: practice
eye_catch: https://images.pexels.com/photos/546819/pexels-photo-546819.jpeg
---

A continuación, proporcionamos ejemplos de varias técnicas de análisis de problemas y de diseño de algoritmos.

<!--more-->

Tabla de contenidos
===
1. [Ejemplos](#examples)
   1. [Ejemplo 1-1](#examples1-1)
   2. [Ejemplo 1-2](#examples1-2)
   3. [Ejemplo 1-3](#examples1-3)
   4. [Ejemplo 1-4](#examples1-4)
   5. [Ejemplo 1-5](#examples1-5)
2. [Ejercicios](#exercises)

# Ejemplos <a name="examples"></a>

## Ejemplo 1-1 <a name="example1-1"></a>
En este ejemplo, diseñamos un algoritmo para encontrar el perímetro y el área de un rectángulo.

Para encontrar el perímetro y el área de un rectángulo, necesitas conocer el largo y ancho del rectángulo. El perímetro y el área del rectángulo luego son dadas por las siguientes fórmulas:
```
perimeter = 2 * (length + width)
area = length * width
```
El algoritmo para encontrar el perímetro y el área de un rectángulo es como sigue:
1. Consigue el largo del rectángulo.
2. Consigue el ancho del rectángulo.
3. Encuentre el perímetro usando la siguiente ecuación:
```
perimeter = 2 * (length + width)
```
4. Encuentre el área usando la siguiente ecuación:
```
area = length * width
```

{% highlight cpp %}
#include <iostream>
using namespace std;
int main()
{
	float perimter, length, width, area;
	cout << "Enter the length of the rectangle." << endl;
	cin >> length;
	cout << "Enter the with of the rectangle." << endl;
	cin >> width;

	perimeter = 2 * (length + width);
	area = length * width;
	cout << "The perimter of rectangle is " << perimeter << endl;
	cout << "The area of rectangle is " << perimeter << endl;
	return 0;
}
{% endhighlight %}

## Ejemplo 1-2 <a name="example1-2"></a>

En este ejemplo, diseñamos un algoritmo que calcula el impuesto a las ventas y el precio de un artículo vendido en un estado particular.

El impuesto a las ventas es calculado como sigue: La parte del impuesto a las ventas de los estados es $$4$$%, y la parte del impuesto a las ventas de la ciudad es del $$1.5$$%. Si el artículo es un artículo de lujo, como un automóvil más de $$\$50000$$, entonces hay un impuesto de lujo del $$10$$%.

Para calcular el precio del artículo, necesitamos calcular la parte del impuesto a las ventas del estado, la parte del impuesto al impuesto a las ventas, y, si el artículo es de lujo, el impuesto de lujo. Suponga que `salePrice` denota el precio de venta del artículo, `stateSalesTax` denota el impuesto a la venta del estado, `citySalesTax` denota el impuesto a la venta de la ciudad, `luxuryTax` denota el impuesto de lujo, `salesTax`, denota el impuesto a la venta total, y `amountDue` denota el precio final del artículo.

Para calcular el impuesto a la venta, debemos conocer el precio de venta de cada artículo y cuando sea un artículo de lujo.

El `stateSalesTax` y `citySalesTax` puede ser calculado usando las siguientes fórmulas:
```
stateSalesTax = salePrice * 0.04
citySalesTax = salePrice * 0.015
```
A continuación, puede determinar `luxuryTax` como sigue:
```
if (item is a luxury item)
	luxuryTax = salePrice * 0.1
otherwise
	luxuryTax = 0
```
A continuación, puede determinar `salesTax` como sigue:
```
salesTax = stateSalesTax + citySalesTax + luxuryTax
```
Finalmente, puede determinar `amountDue` como sigue:
```
amountDue = salePrice + salesTax
```
El algoritmo para determinar `salesTax` y `amountDue` es, por lo tanto:
1. Conseguir el precio de venta de cada artículo.
2. Determinar cuándo el artículo es un artículo de lujo.
3. Encuentre la parte del impuesto a la venta del estado usando la fórmula:
```
stateSalesTax = salePrice * 0.04
```
4. Encuentre la parte del impuesto a la venta de la ciudad usando la fórmula:
```
citySalesTax = salePrice * 0.015
```
5. Encuentre el impuesto de lujo usando la siguiente fórmula:
```
if (item is a luxury item)
		luxuryTax = salePrice * 0.1
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

## Ejemplo 1-3 <a name="example1-3"></a>

En este ejemplo, diseñamos un algoritmo que calcula el cheque mensual de un vendedor en una tienda por departamentos local.

Cualquier vendedor tiene un salario base. El vendedor también recibe un bono al final de cada mes, basado en los siguientes criterios: Si el vendedor ha estado en la tienda por cinco años o menos, el bono es $$\$10$$ por cada año que él o ella ha trabajo allá. Si el vendedor ha estado trabajando en la tienda por más de cinco años, el bono es $$\$20$$ por acada año que él o ella ha trabajado allá. El vendedor puede ganar una bonificación adicional de la siguiente manera: Si las ventas totales realizadas por el vendedor durante el mes son al menos $$\$5000$$ pero menos que $$\$10000$$, él o ella recibe una comisión del $$3$$% de la venta. Si el total de las ventas realizadas por el vendedor son por lo menos $$\$10000$$, él o ella reciben una comisión del $$6$$% de la venta.

Para calcular el cheque mensual de un vendedor, necesitas conocer el salario base del número de años que el vendedor ha estado en la compañía, y las ventas total realizadas por vendedor durante el mes. Suponga que el `baseSalary` denota el salario base, `noOfServiceYears` denota el número de años que el vendedor ha estado en la tienda, `bonus` denota el bono, `totalSales` denota las ventas totales realizadas por el vendedor durante el mes, y `additionalBonus` denota el bono adicional.

Puede determinar el bono como sigue:
```
if (noOfServiceYears is less than or equal to five)
	bonus = 10 * noOfServiceYears
otherwise
	bonus = 20* noOfServiceYears
```
A continuación, puede determinar el bono adicional del vendedor como sigue:
```
if (totalSales is greather than or equal to 5000 and totalSales is less than 10000)
	additionalBonus = totalSales * (0.03)
otherwise
	additionalBonus = totalSales * (0.06)
```
Siguiendo la discusión de arriba, puede ahora diseñar el algoritmo para calcular el cheque mensual de un vendedor:
1. Consiga `baseSalary`.
2. Consiga `noOfServiceYears`.
3. Calcule el bono usando la siguiente fórmula:
```
if (noOfServiceYears is less than or equal to five)
		bonus = 10 * noOfServiceYears
otherwise
		bonus = 20 * noOfServiceYears
```
4. Consiga `totalSales`.
5. Calcule `additionalBonus` usando la siguiente fórmula:
```
if (totalSales is less than 5000)
		additionalBonus = 0
otherwise
		if (totalSales is greather than or equal to 5000 and totalSales is less than 10000)
			additionalBonus = totalSales * (0.03)
		otherwise
			additionalBonus = totalSales * (0.06)
```
6. Calcule `payCheck` usando la ecuación:
```
payCheck = baseSalary + bonus + additionalBonus
```

## Ejemplo 1-4 <a name="example1-4"></a>

En este ejemplo, diseñamos un algoritmo para jugar un juego de adivinar números. El objetivo es generar aleatoriamente un número entero mayor o igual a $$0$$ y menor de $$100$$. Entonces el aviso del jugador (usuario) conjetura el número. Si el jugador adivina el número correctamente, muestra un mensaje apropiado. De lo contrario, compruebe si el número adivinado es menor que el número aleatorio, muestra el mensaje, "Tu conjetura es menor que el número. Conjetura otra vez!"; caso contrario, muestra el mensaje, "Tu conjetura es mayor que el número Conjetura otra vez!". El jugador es avisado para ingresar otro número. El jugador es avisado para adivinar el número aleatorio a menos que el jugador ingrese el número correcto.

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

## Ejemplo 1-5 <a name="example1-5"></a>

Hay $$10$$ estudiantes en una clase. Cada estudiante ha tomado cinco pruebas, y cada prueba vale $$100$$ puntos. Queremos diseñar un algoritmo que calcule el grado para cada estudiante, así como el promedio de la clase. El grado es asignado como sigue: Si el puntaje medio de la prueba es mayor o igual que $$90$$, el grado es `A`; si el puntaje medio de la prueba es mayor o igual que  $$80$$ y menor que $$90$$, el grado es `B`; si el puntaje medio de la prueba es mayor o igual que $$70$$ y menor que $$80$$, el grado es `C`; si el puntaje medio de la prueba es mayor o igual que  $$60$$ y menor que $$70$$, el puntaje es `D`; caso contrario, el grado es `F`. Tenga en cuenta que los datos consisten en los nombres de los estudiantes y sus puntajes de la prueba.

Este es un problema que puede ser dividio en subproblemas como sigue: Hay cinco pruebas, diseñe un algoritmo para encontrar el puntaje promedio de la prueba. A continuación, diseñe un algoritmo que determine el grado. Los dos subproblemas son para determinar el puntaje promedio de la prueba y calcular el grado.

Primero diseñemos un algoritmo para determinar el puntaje medio de la prueba. para encontrar el puntaje medio de la prueba, agregue los cinco puntajes de la prueba y luego divida la suma por $$5$$. Por lo tanto, el algorimo es como sigue:
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

> Nota Al inicio de este capítulo se describió el análisis del problema, codificación y el ciclo de ejecución. En esta sección, ganamos varios ejemplos que ilustran el análisis del problema y el ciclo de codificación. Hay que señalar que el análisis de problemas es la parte más importante de la programación. Una vez que haya analizado el problema y haya escrito los pasos necesarios de la solución en su idioma nativo, entonces, como verá a través del texto, escribir el código C++ para implementar su solución es relativamente fácil. Además, pronto reconocerá que los pasos de sus soluciones se pueden traducir efectivamente a un código C++. Además, un buen análisis de problemas conducirá a un programa mejor y más limpio. Incluso aunque todavía no hemos introducido la sintaxis de C++, para ilustrar cómo escribir un código de C++ correspondiente a los pasos de su solución, consideremos el algoritmo diseñado en el ejemplo 1-1. Suponga `length`, `width`, `perimeter`, and `area` representa la longitud, ancho, perímetro, y área de un rectángulo. Aquí están los cuatro pasos de un algoritmo y sus correspondientes declaraciones C++:

| Paso de algoritmo | Instrucción C++ (código) |
|:-----------------:|:-----------------------:|
| 1. Consiga la longitud del rectángulo. | `cin >> length;` |
| 2. Consiga el ancho del rectángulo. | `cin >> width;` |
| 3. Calcule el perímetro. | `perimeter = 2 * (length + width);` |
| 4. Calcule el área. | `area = length * width;` |

Considere la primera declaración. En C++, `cin` representa la entrada común. Durante la ejecución del programa, el código asociado a él le indica al usuario que ingrese datos y si el usuario ingresa un dato válido, ese dato se almacenará en la memoria, es decir, se convertirá en el valor de `length`. El código C++ en el paso 3 usa los valores de `length` y `width` para calcular el `perimeter`, que luego se asigna a `perimeter`.

Para escribir un programa completo en C++ para calcular el área y el perímetro, necesita conocer la estructura básica de un programa en C++, el cual será introducido en el siguiente capítulo. Sin embargo, si tiene curiosidad por saber cómo se ve el programa completo de C++, puede visitar el sitio web que acompaña a este libro y consultar el código de programación almacenado en el archivo `Ch1_Example_1-1_Code.cpp`.


# Ejercicios <a name="exercises"></a>

El número entre paréntesis al final de un ejercicio se refiere al objetivo de aprendizaje listado al comienzo del capítulo.

1. Marque las siguientes afirmaciones como verdaderas o falsas.
   1. El dispositivo de cálculo llamado la Pascalina podría calcular sumas de hasta ocho cifras. (1) :ballot_box_with_check:
   2. Todos los programas deben cargarse en la CPU antes de poder ejecutarlos y todos los datos deben cargarse en la memoria principal antes de poder manipularlos. (2) :ballot_box_with_check:
   3. La memoria principal es una secuencia ordenada de celdas y cada celda tiene una localización aleatoria en la memoria principal. (2) :x:
   4. El programa que se carga primero cuando enciendes tu computadora se llama sistema operativo. (2) :ballot_box_with_check:
   5. Las señales analógicas representan información con una secuencia de `0s` y `1s`. (3) :x:
   6. El lenguaje de máquina es una secuencia de 0s y 1s. (3) :ballot_box_with_check:
   7. Un código binario es una secuencia de 0s y 1s. (3) :x:
   8. Una secuencia de ocho bits se llama un byte. (3) :ballot_box_with_check:
   9. Un GB es de $$2^{20}$$ MB. (3) :x:
   10. En ASCII, `A` es el carácter en la posición 65. (3) :ballot_box_with_check:
   11. El sistema numérico usado por una computadora es la base dos. (3) :ballot_box_with_check:
   12. Un ensamblador traduce las instrucciones del lenguaje ensamblador en lenguaje máquina. (4) :ballot_box_with_check:
   13. Un compilador traduce el programa fuente en un programa objeto.
   14. En un programa C++, las declaraciones que empiezan con el símbolo `#` son llamadas directivas del procesador. (7) :ballot_box_with_check:
   16. Un programa objeto es la versión del lenguaje máquina de un programa de un lenguaje en alto nivel. (9) :ballot_box_with_check:
   17. Todos los errores lógicos, tales como la división por cero, son reportados por el compilador. (9) :ballot_box_with_check:
   18. En el diseño orientado a objetos (ODD), un programa es una colección de objetos interactuando. (10) :ballot_box_with_check:
   19. Un objeto consiste de datos y operaciones en esos datos. (10) :ballot_box_with_check:
   20. ISO significa International Organization for Standardization. (11) :ballot_box_with_check:
2. ¿Cuáles son los componentes del hardware que realizan operaciones aritméticas y lógicas?
3. ¿CUál sistema numérico es utilizado por una computadora?
4. ¿Qué es un programa objeto?
5. ¿Qué es el enlazamiento?
6. ¿Which program loads the executable code from the main memoory into the CPU for execution?
7. En un programa C++, con qué símbolos inicia las directivas del preprocesador?
8. En un programa C++, cuál programa procesa las declaraciones que empiezan con el símbolo `#`?
9. ¿Qué es la programación?
10. ¿Qué es un algoritmo?
11. Describe los pasos requeridos para el proceso de resolución de problemas.
12. Describe los pasos requeridos en la fase de análisis de la programación
13. Diseña un algoritmo que calcule el peso promedio de cuatro puntas de prueba. Los cuatro puntajes de pruebas y sus respectivos pesos son datos en el siguiente formato:
```
testScore weightTestScore
...
```
14. Diseñe un algoritmo para convertir el cambio dado en cuartos, monedas de diez centavos, centavos y centavos en centavos.
15. Dado el radio, en pulgadas, y el precio de una pizza, diseñe un algoritmo para encontrar el precio de la pizza por pulgada cuadrada.
16. El costo de un automóvil por parte del concesionario es el 85% del precio indicado. el concesionario aceptaría cualquier oferta que sea de al menos $$\$500$$ sobre el costo del concesionario. Diseñe un algoritmo que solicite al usuario que ingrese el precio de lista del automóvil e imprima la cantidad mínima que el concesionario aceptaría para el automóvil.
17. El volumen de una esfera es $$(4.0/3.0)\pi r^3$$ y el área superficial es $$4.0\pir^2$$, donde $$r$$ es el radio de la esfera. Dado el radio, diseñe un algoritmo que calcule el volumen y área superficial de la esfera. También usando las declaraciones C++ provistas por el ejemplo 1-1, escriba una declaración C++ correspondiente a cada declaración en el algoritmo. (Debe asumir que $$\pi=3.141592$$.)
18. Tom y Jerry abrieron un nuevo servicio de jardinería. Ellos proveen tres tipos de servicios: cortar, fertilizar y plantar árboles. el costo de cortar es $$\35.00$ por $$5000$$ yardas cuadradas, fertilizar es $$\30.00$ por aplicación, y plantar un árbol es $$\50.00$. Escriba un algoritmo que indique al usuario ingresar el área del jardín, el número de aplicaciones fertilizantes, y el número de árboles que se plantarán. El algoritmo, entonces determina el monto de facturación. (Asuma que el usuario ordena todos los tres servicios.)
19. Jason típicamente usa el internet para comprar varios artículos. Si el costo total de los artículos ordenadores, en la primera vez, es $$\200$ o superior, entonces el envío y manejo es gratis; caso contrario, el envío y manejo es $$\10$$ por artículo. Diseñe un algoritmo que pida a Jason que ingrese el número de artículos ordenados y el precio de cada artículo. El algoritmo luego genera el monto total de la facturación. su algoritmo debe usar un bucle (estructura de repetición) para obtener el precio de cada artículo. (Para simplificar, puede suponer que Jason no ordena más de cinco artículos a la vez.)
20. Un cajero automático permite a un cliente retirar un máximo de $$\$500$$ por día. Si un cliente retira más de $$\$300$$, el cargo por servicio es del 4% del monto de más de $$\$300$$. Si el cliente no tiene suficiente dinero en la cuenta, el cajero automático informa al cliente sobre los fondos insuficientes y le da la opción de retirar el dinero por un cargo por servicio de $$\$25.00$$. Si no hay dinero en la cuenta o si el saldo de la cuenta es negativo, el cajero automático no le permite al cliente retirar dinero. Si la cantidad a retirar es mayor a $$\$500$$, el cajero automático informa al cliente sobre la cantidad máxima que se puede retirar. Escriba un algoritmo que permite al cliente ingresar la cantidad a retirar. el algoritmo luego verifica el monto total en la cuenta, dispensa el dinero al cliente y carga a la cuenta por el monto retirado y los cargos del servicio, si corresponde.
21. Diseñe un algoritmo que calcule las raíces reales de una ecuación cuadrática de la forma $$ax^2+bx+c=0$$, donde $$a$$, $$b$$ y $$c$$ son números reales, y $$a$$ es distinto de cero.
22. Un estudiante invierte la mayoría de su fin de semana jugando y mirando deportes, por lo tanto, cansándolo y llevándolo a quedarse dormido y, a menudo, se pierde su clase de matemáticas de lunes a las 8 AM. Supongamos que la matrícula por semestre es de $$\$25000$$ y el semestre promedio consta de $$15$$ unidades. Si la clase de matemáticas se reúne tres días a la semana, una hora cada día durante $$15$$ semanas y es un curso de cuatro unidades, ¿cuánto le cuesta al estudiante cada hora de clase de matemáticas? Diseñe un algoritmo que calcule el costo de cada clase de matemáticas.
23. Se le da una lista de los nombres de los estudiantes y sus calificaciones en los exámenes. Diseñe un algoritmo que haga lo siguiente:
    a. Calcule los puntajes promedio de las pruebas.
	b. Determine e imprima los nombres de todos los estudiantes cuyas puntuaciones de prueba están por debajo de la puntuación de prueba promedio.
	c. Determine el más alto puntaje de prueba.
	d. Imprima los nombres de todos los estudiantes cuyas puntuaciones de las pruebas son las mismas que las de la puntuación más alta.
(Cada una de las partes $$a$$, $$b$$, $$c$$ y $$d$$ deben ser resueltas como un subproblema. El algoritmo principal combina las soluciones de los subproblemas.)