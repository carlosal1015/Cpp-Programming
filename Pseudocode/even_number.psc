// Programa que indica si un número es par.
// http://www.mediafire.com/file/9js12t3um6rn5ma/basicos_pseint_2.rar
Proceso Even_number

	Escribir "Escriba un valor numérico"
	Leer number

	Si (number MOD 2) = 0 Entonces
		Escribir number, " es par."
	SiNo
		Escribir number, " no es par."
	Fin Si

FinProceso