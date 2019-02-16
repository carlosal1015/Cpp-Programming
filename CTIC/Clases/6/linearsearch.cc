#include <iostream>
#include <cstdlib>
#include <ctime> //http://www.cplusplus.com/reference/ctime/
#define LENGTH 80

using namespace std;

void Generar(int v[], int n);
void Listar(int v[], int n);
void Search(int v[], int n, int key);
void Sort(int v[], int n);

int main(){

	int v[LENGTH], n, key;
	cout << "Cantidad de elementos del vector: "; cin >> n;
	Generar(v, n);
	cout << "Ingrese la clave: ";
	cin >> key;
	cout << "****************\tLista desordenada\t*******************" << endl;
	Listar(v, n);
	Search(v, n, key);
	cout << "****************\tLista ordenada\t****************" << endl;
	Sort(v, n); Listar(v, n);
	return 0;
}

void Generar(int v[], int n){
	// Genera n valores entre 3 y 12
	srand(time(NULL));
	for(int i = 1; i <= n; i++){
		v[i] = rand()%10 + 3;
	}
}

void Listar(int v[], int n){
	for(int i = 1; i < n; i++)	cout << v[i] << "\t";
	cout << endl;
}

void Search(int v[], int n, int key){
	bool found = false;
	int position = -1;
	int w[LENGTH], pos_w = 0;
	
	for(int i = 0; i < n; i++)
		if (key == v[i]) {
			found = true;
			position = i;
			w[pos_w] = i; pos_w ++; 
		}
		if (found = true){
			cout << "Encontrado en la posicion:" << endl;
			// Recorrer el vector w
			for(int j = 0; j < pos_w; j ++)
				cout << w[j] << "\t";
				cout << endl;
		}
		else cout << "La clave no fue encontrada." << endl;
	}

	void Sort(int v[], int n){
		int temp;
		
		for(int i = 0; i < n; i++){	
			for(int j = 0; j < n - (i + 1); j++){
				if (v[j+1]> v[j]) {
					temp = v[j + 1];
					v[j + 1] = v[j];
					v[j] = temp;
				}
			}
		}
	}

//	http://www.cs.cornell.edu/courses/cs1112/2011sp/Notes/egL26/L26pre.pdf