#include <iostream>
#include "estrutura_2.h"
#include <cstdlib>
#include <locale.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



int main() {
	
	Pilha P1;
	bool erro;
	
	
	// Criando a pilha:
	Create(&P1);
	
	// Empilhando elemento 'A':
	
	Push(&P1,"A",&erro);
	
	// Empilhando elemento 'B':
	Push(&P1, "B", &erro);
	
	// Empilhando elemento 'C':
	Push(&P1, "C", &erro);
	// Empilhando elemento 'D':
	Push(&P1, "D", &erro);
	
	// Desempilhando:
	
	Pop(&P1, &erro);
	Pop(&P1, &erro);
	
	//Empilhando K:
	Push(&P1, "K", &erro);
	
	//Empilhando B:
	Push(&P1, "V", &erro);
	// Desempilhando:
	Pop(&P1, &erro);
	
	// Imprime a pilha:
	cout << "Elementos da Pilha: " << endl;
	for(int i=0; i< (P1.topo + 1); i++)
	{
		cout << P1.itens[i] << endl;
	}	

	
}
