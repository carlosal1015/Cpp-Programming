// Programa que calcula el precio de un art�culo con descuento.
// http://www.mediafire.com/file/9js12t3um6rn5ma/basicos_pseint_2.rar
Proceso precio_de_un_art�culo

	DESCUENTO = 0.15

	Escribir "Escriba el precio de un art�culo"
	Leer article

	price = article - (article * DESCUENTO)

	Escribir "El precio del art�culo es ", price, "."

FinProceso