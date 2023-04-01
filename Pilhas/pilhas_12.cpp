#include <iostream>
#include "estrutura_3.h"
#include <cstdlib>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//Cabeçalho da funcao:
void comparaPilha(Pilha *P1, Pilha *P2);


void comparaPilha(Pilha *P1, Pilha *P2){
	if(P1->topo > P2->topo){
		cout << "A Pilha 1 é maior!! " << endl;
		
	}else if(P1->topo < P2->topo){
		cout << "A Pilha 2 é maior!!" << endl;
		
	}else{
		cout << " As Pilhas são do mesmo tamanho!!" << endl;
	}
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	Pilha P1, P2;
	elem X;
	int num_elementos;
	bool erro;
	// Criando as pilhas:
	Create(&P1);
	Create(&P2);
	cout << "Insira a quantidade de elmentos de sua pilha 1: ";
	cin >> num_elementos;
	
	for(int i = 0; i < num_elementos; i++){
		cout << "Insira o elemento: ";
		cin >> X;
		Push(&P1,&X,&erro);
		
		}
	cout << "Insira a quantidade de elmentos de sua pilha 2: ";
	cin >> num_elementos;
	
	for(int i = 0; i < num_elementos; i++){
		cout << "Insira o elemento: ";
		cin >> X;
		Push(&P2,&X,&erro);
		
		}
		
	comparaPilha(&P1, &P2);
	
}
