#include <iostream>
#include <math.h>
#include <string.h>
#include "estrutura_fila.h"
#include "estrutura_pilha.h"

using namespace std;



// Exercicio 1 da Lista de Filas: 
// 1) O que é e como funciona uma estrutura do tipo Fila? Em que situações ela é utilizada:

// Uma fila é uma estrutura de armazenamento de dados primitivos, a qual o primeiro dado a ser inserido na fila, será o primeiro a ser retirado, seguindo a ordem 
// de chegada dos elementos. Ela pode ser utilizada em um controle de documentos de impressão, o que chamamos de fila de impressão da impressora. 

//2) Uma fila implementa o mecanismo de inserção/remoção por:

// A Fila implementa o mecanismo de o primeiro elemento a entrar, será o primeiro elemento a sair, portantom, a alternativa correspondentes é A - FIFO(First In, First OUT);




//Exercicio 3:
//3) Escreva um método para inverter a ordem dos elementos de uma fila de 10 elementos, usando uma pilha como estrutura auxiliar. Exiba a fila invertida.
//Cabeçalho da função:

void exibeFilaInvertida(Fila *F, elem *X, bool *erro);

//Função:

void exibeFilaInvertida(Fila *F, elem *X, bool *erro){
	Pilha P;
	elem Y;
	bool erro2;
	
	Create(&P);
	// Retirando o elemento da fila e inserindo na Pilha de modo que fique invertidos: 
	
	for(int i = 0; i < 10; i++){
		Y = Out(F, erro);
		Push(&P, &Y, &erro2);
		
		
	}
	
	// Inserindo os elementos invertidos na fila novamente: 
	for(int j = 0; j <10; j++){
		Y = Pop(&P, &erro2);
		Enter(F, &Y, erro);
		
	}
	// exibindo a fila invertida:
	Print(F);
}

int main() {
	Fila F;
	elem X;
	bool erro;
	
	
	
	Create(&F);
	
	for(int i = 0; i < 10; i++){
		cout << "Insira o elemento " << i + 1 << " de sua fila: ";
		cin >> X;
		Enter(&F, &X, &erro);
		cout << "Inserido com sucesso!" << endl;
		
		
	
	}
	cout << "Exibindo a fila original: " << endl;
	cout << "-----------------------------------" << endl;
	Print(&F);
	cout << endl;
	//Chamada da Função:
	exibeFilaInvertida(&F,&X,&erro);
	
}
	
	
