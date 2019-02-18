//http://www.mediafire.com/file/444rp49lb8skczj/arrays_pseint_2.zip
//https://subefotos.com/ver/?1910810df9f184ac7ab2a9aec52f3c83o.jpg
Algoritmo Arreglos_4
	LENGTH = 10
	
	Dimension a1(LENGTH)
	Dimension a2(LENGTH)
	Dimension a3(LENGTH)
	
	Para i<-0 Hasta LENGTH - 1 Con Paso 1 Hacer
		Escribir "Introduce el valor del arreglo a1 en la posición " , i
		Leer a1(i)
		
		Escribir "Introduce el valor del arreglo a2 en la posición " , i
		Leer a2(i)
		
		a3(i) = a1(i) + a2(i)
		
	Fin Para
	
	Para i<-0 Hasta LENGTH - 1 Con Paso 1 Hacer
		Escribir " ", a1(i) , " + ", a2(i), " = ", a3(i)
	Fin Para

FinAlgoritmo
	