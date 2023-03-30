#include <iostream>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <cstdlib>

using namespace std;



/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	int *vet ,qtd,qtd2,aux;
	cout << "Insira a quantidade incial de valores de seu vetor: " << endl;
	cin >> qtd;
	qtd2 = qtd;
	vet = (int*)malloc(qtd*sizeof(int));
	
	for(int i = 0; i < qtd; i++){
		cout << "Insira um valor inteiro: ";
		cin >> vet[i];
		
	}
	
	cout << "Tamanho original do vetor: " << endl;
	for(int i = 0; i < qtd; i++){
		cout << "\t"<< vet[i] << " | ";
	}
	for(int i = 0; i < qtd; i++){
		if(vet[i] == vet[i + 1]){
			 vet[i] = NULL;
			 aux = vet[qtd -1 ];
			 vet[i] = vet[qtd - 1];
			 vet[i] = aux;
			vet = (int*)realloc(vet,(qtd2)*sizeof(int));
			qtd2 = qtd-1;
			qtd = qtd -1;
		}
	}
	cout << endl;
	cout << "Tamanho reduzido: " << endl;
	for(int i = 0; i < qtd2; i++){
		cout << "\t"<< vet[i] << " | ";
}
free(vet);
	
}
