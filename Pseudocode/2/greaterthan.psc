// Programa que compara la relaci�n de orden de los naturales de dos n�meros.
// http://www.mediafire.com/file/9js12t3um6rn5ma/basicos_pseint_2.rar
Proceso Mayor_que

	Escribir "Escribe un n�mero"
	Leer num1

	Escribir "Escriba otro n�mero"
	Leer num2

	Si num1 > num2 Entonces

		Si num1 = num2 Entonces
			Escribir "Los n�meros son iguales."
		SiNo
			Escribir num1, " es mayor que ", num2,"."
		Fin Si

	SiNo
		
		Escribir num2, " es mayor que", num1, "."

	Fin Si

FinProceso