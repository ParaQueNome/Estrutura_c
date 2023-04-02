/*Seja a seguinte struct que é utilizada para descrever os produtos que estão no estoque de uma loja :
struct Produto {
char nome[30]; /* Nome do produto 
int *codigo; /* Codigo do produto 
double *preco; /* Preco do produto 
char fornecedor[50] /* Fornecedor do produto
}
Faça um programa que armazene 5 produtos e exiba-os na tela. Obs: fique atento, porque código e preço são
ponteiros dentro de struct */



#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>


using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Declarando Struct Produto;
struct Produto{
	char nome[50];
	int *codigo;
	double *preco;
	char forn[50];
	
	
};


int main(){

// Declarar o vetor de Structs:
	Produto P[5];
	
// Declarando Vetores para Codigo dos produtos e Preços dos Produtos:
	int codigos[5];
	double precos[5];
	
// Preenchendo o vetor de Structs:
	
	
	
	for(int i = 0; i < 5; i++){
		cout << "Insira o nome do produto: ";
		cin >> P[i].nome;
		cout << "Insira o codigo do produto: ";
		cin >> codigos[i];
		// Apontando o ponteiro *codigo para o vetor de codigos no elemento 'i':
		P[i].codigo = &codigos[i];
		cout << "Insira o preco do produto: ";
		cin >> precos[i];
		// Apontando o ponteiro *preco para o vetor de preços no elemento 'i':
		P[i].preco = &precos[i];
		cout << "Insira o nome do fornecedor: ";
		cin >> P[i].forn;
		
	}
	// Exibindo os produtos:
	for(int j = 0; j < 5; j++){
		cout << "Produto: " << P[j].nome <<endl;
		cout << "Codigo: " << *P[j].codigo << endl; 
		cout << "Precos: " << *P[j].preco << endl;
		cout << "Fornecedor: " << P[j].forn<<endl; 
	}
	
	
	
	
	
	
	
	
	
	
	
	
}
