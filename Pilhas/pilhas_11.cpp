#include <iostream>
#include "estrutura_3.h"
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	
	Pilha P;
	bool erro;
	elem X;
	int qtd, *vet,valor;
	
	cout << "Insira a quantidade de elementos da sua pilha: ";
	cin >> qtd;
	vet = (int*)malloc(qtd*sizeof(int));
	//Criando a pilha:
	Create(&P);
	
	//Populando a pilha:
	for(int i =0; i < qtd; i++){
		cout << "Insira o elemento que deseja: ";
		cin >> X;
		Push(&P, &X, &erro);
		
	}
	for(int y = 0; y < qtd; y++){
		// Imprimindo a pilha :
		cout << "Elemento: " << P.itens[y]<<endl;
		
	}
	cout << "----------------------" << endl;
	
	
	// Desempilhando e invertendo os elementos da pilha:
	for(int j = 0; j < qtd; j++){
		valor = Pop(&P, &erro);
		vet[j] = valor;
	
		
	}
	// Esvaziando a pilha:
	Empty(&P);
	
	// Empilhando os elementos invertidos:
	
	
	for(int y = 0; y < qtd; y++){
		// Imprimindo a pilha invertida:
		
		Push(&P,&vet[y],&erro);
		cout << "Elemento: " << P.itens[y]<<endl;;
	}
	free(vet);
}
