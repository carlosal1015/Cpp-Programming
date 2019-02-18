// http://www.mediafire.com/file/k3tg9h82pe6vf8q/arrays_pseint_1.rar
Algoritmo arreglos
	
	LENGTH = 10
	
	Dimension arreglo(LENGTH)
	
	Definir suma Como Entero 
	
	suma <- 0
	media <- 0
	//Llenar el arreglo
	Para i<-0 Hasta LENGTH - 1 Con Paso 1 Hacer
		arreglo(i) <- i
		suma <- suma + arreglo(i)
		Escribir arreglo(i)
	Fin Para
	
	Escribir "La suma es ", suma
	
	media <- suma / LENGTH
	
	Escribir "La media es ", media
FinAlgoritmo