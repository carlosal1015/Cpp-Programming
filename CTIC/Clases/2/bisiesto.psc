Proceso bisiesto

	Escribir "Ingrese un a�o"
	Leer a�o
	
	Si ((a�o mod 4) = 0) Y ( (a�o mod 100) = 0) O (a�o mod 400) = 0) ) Entonces
		bisiesto = Verdadero
	SiNo
		bisiesto = Falso
	Fin Si
FinProceso