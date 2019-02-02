// Programa que muestra un reloj digital
// http://www.mediafire.com/file/ovkcbqdwkc9jkks/basicos_pseint_5.zip
// http://subefotos.com/ver/?1910810df9f184ac7ab2a9aec52f3c83o.jpg
Proceso digital_clock
	horas <- 0
	minutos <- 59
	segundos <- 55
	
	Mientras Verdadero Hacer
		
		// Mostrar
		
		Si horas < 10 Entonces
			Escribir "0" Sin Saltar
		Fin Si
		
		Escribir horas, ":" Sin Saltar
		
		Si minutos < 10 Entonces
			Escribir "0" Sin Saltar
		FinSi
		
		Escribir minutos, ":" Sin Saltar
		
		Si segundos < 10 Entonces
			Escribir "0" Sin Saltar
		FinSi
		
		Escribir segundos
	
		// Aumentar en un segundo
		segundos <- segundos + 1
	
		// Comprobar el tiempo
	
		Si segundos = 60 Entonces
			minutos <- minutos + 1
			segundos <- 0
		
			Si minutos = 60 Entonces
				horas <- horas + 1
				minutos <- 0
				Si horas = 24 Entonces
					horas <- 0
				FinSi
			FinSi
		FinSi
		
		Esperar 1 Segundos
	Fin Mientras
FinProceso