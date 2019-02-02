Proceso bisiesto

	Escribir "Ingrese un año"
	Leer año
	
	Si ((año mod 4) = 0) Y ( (año mod 100) = 0) O (año mod 400) = 0) ) Entonces
		bisiesto = Verdadero
	SiNo
		bisiesto = Falso
	Fin Si
FinProceso