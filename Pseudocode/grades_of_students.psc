// Programa que calcula la nota de los alumnos.
// http://www.mediafire.com/file/tn8gxq8fhjri2sa/basicos_pseint_4.zip
Proceso grades_of_students
	
	Repetir
		Escribir "Escribe la cantidad de alumnos."
		Leer alumnos
		
		Si alumnos < 1 Entonces
			Escribir "Debe ser mayor o igual que 1."
		Fin Si
	Hasta Que alumnos > 0
	
	nota_teorica = 0
	nota_practica = 0
	nota = 0
	
	Para i<-1 Hasta alumnos Con Paso 1 Hacer
		
		Repetir
			Escribir "Introduce la nota teórica."
			Leer nota_teorica
			
			Si no (nota_teorica > 0 y nota_teorica < 10) Entonces
				Escribir "Debes escribir un valor entre 0 y 10."
			Fin Si
		Hasta Que (nota_teorica > 0 y nota_teorica < 10)
		
		Repetir
			Escribir "Introduce la nota práctica."
			Leer nota_practica
			
			Si no (nota_practica > 0 y nota_practica < 10) Entonces
				Escribir "Debes escribir un valor entre 0 y 10."
			Fin Si
			
		Hasta Que (nota_practica > 0 y nota_practica < 10)
		
		nota = (nota_teorica * 0.6) + (nota_practica * 0.4)
		
		Escribir  "El alumno número ", i, " ha sacado una nota de ", nota, "."
		
	Fin Para
	
FinProceso