#include <iostream>
#include "estrutura_3.h"
#include <cstdlib>
#include <math.h>


using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Cabeçalho da Função:
void exibeInfo(Pilha *P, bool *erro, int quantidade);

// Funcao que exibe o maior, menor e media dos elementos da pilha:
void exibeInfo(Pilha *P, bool *erro, int *quantidade){
	int valor,soma = 0,maior, menor;
	float media = 0;
	int *vet;
	vet = (int*)malloc(*quantidade*sizeof(int));
	for(int i = 0; i < *quantidade; i++){
		valor = Pop(P,erro);
		vet[i] = valor;
		cout << "Valor do indice: " << vet[i] << endl;
		soma = soma + vet[i];
	}
	maior = vet[0];
	menor = vet[0];
	for(int j = 0; j < *quantidade; j++){
		
		
		if(vet[j] > maior){
			maior = vet[j];
			
		}
		if(vet[j] < menor){
			menor = vet[j];
			
		}
		
		
	}
	media = (soma/ *quantidade);
	cout << "A media dos elementos da pilha é: " << media << endl;
	
	cout << "O maior elemento da pilha é: " << maior << endl;
	cout << "O menor elemento da pilha é: " << menor << endl;
	
	
	
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	Pilha P;
	elem X;
	int qtd;
	bool erro;
	
	cout << "Insira a quantidade de elementos da pilha: ";
	cin >> qtd;
	
	// Criando a pilha:
	Create(&P);
	
	for(int i = 0; i < qtd; i++){
		cout << "Insira o elemento que deseja colocar na pilha : ";
		cin >> X;
		Push(&P, &X, &erro);
	}
	exibeInfo(&P,&erro,&qtd);
	
	
	}
