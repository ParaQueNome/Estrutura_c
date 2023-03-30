#include <iostream>
#include <locale.h>
#include <math.h>


using namespace std;


int main() {
	int vet[9], *ptr = NULL, *ptr2 = NULL, aux, mat[3][3];
	ptr = vet;
	ptr2 = mat[0];
	for(int i = 0; i <9; i++){
		cout << "Insira o valor " << i+1 << endl;
		cin >> *ptr;
		ptr++;
		
		
	}
	ptr = vet;
// Bubble Sort com o vetor sem usar o ponteiro	
	for(int i = 0; i<9; i++){
		for(int j = 0; j <8; j++){
			if(vet[j] > vet[j +1] ){
			aux = vet[j];
			vet[j] = vet[j+1];	
			vet[j+1] = aux;
		
			}	
			
		}
	}
	ptr = vet;
	for(int k =0; k <9; k ++){
		cout << "Elementos do vetor: " << *ptr << endl;
		
		ptr++;
	}
	ptr = &vet[0];
	
	
	for(int y =0; y <9; y ++){
		
		ptr2 = ptr;
		ptr++;
		ptr2++;
		
		cout << "Elementos da matriz: " << *ptr2 << endl;
		
	}
	
	
	
	
}
