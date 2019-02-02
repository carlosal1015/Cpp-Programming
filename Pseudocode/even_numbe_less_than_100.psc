// http://www.mediafire.com/file/08u9joxgjkephck/basicos_pseint_3.rar
Proceso Even_numbers_less_than_100
	Escribir "Con while"
	
	contador = 1
	Mientras contador <= 100 Hacer
		Si (contador MOD 2) = 0 Entonces
			Escribir contador
		Fin Si
		contador = contador + 1
	Fin Mientras
	
	Escribir "Con para"
	
	Para contador<-1 Hasta 100 Con Paso 1 Hacer
		Si (contador MOD 2) = 0 Entonces
			Escribir contador
		Fin Si
	Fin Para
	
	
FinProceso