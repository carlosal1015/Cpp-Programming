// Programa que calcula la suma de cuadrados de los primeros naturales.
// http://www.mediafire.com/file/tn8gxq8fhjri2sa/basicos_pseint_4.zip
Proceso Sum_of_squares

	Repetir
		Escribir "Escribe un número natural."
		Leer n
		
		Si n <=1 Entonces
			Escribir "Debe ser mayor o igual que 1."
		Fin Si

	Hasta Que n > 0

	resultado = 0

	Para i<-1 Hasta n Con Paso 1 Hacer

		resultado = i^2

		Escribir "El valor al cuadrado de ", i, " es de ", resultado, "."
	Fin Para

FinProceso