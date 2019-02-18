//http://www.mediafire.com/file/444rp49lb8skczj/arrays_pseint_2.zip
//https://subefotos.com/ver/?1910810df9f184ac7ab2a9aec52f3c83o.jpg
Algoritmo Arreglos_4
	LENGTH = 10
	
	Dimension a1(LENGTH)
	
	a1(0) = 2
	a1(1) = 2
	a1(2) = 2
	a1(3) = 2
	a1(4) = 2
	a1(5) = 2
	a1(6) = 2
	a1(7) = 2
	a1(8) = 2
	a1(9) = 2
	
	Escribir "Inserta elemento a buscar"
	Leer numerobuscado
	
	encontrado = Falso

	Para i<-0 Hasta LENGTH - 1 Con Paso 1 Hacer
		Si numerobuscado = a1(i) Entonces
			Escribir "Se ha encontrado el número ", numerobuscado, " en la posición ", i
			encontrado = Verdadero
		Fin Si
	Fin Para
	
	si no encontrado Entonces
		Escribir "No se ha encontrado ningún elemento."
	FinSi

FinAlgoritmo
