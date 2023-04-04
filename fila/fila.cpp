#include <iostream>
#include "estrutura_fila.h"
#include <locale.h>
#include <math.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
// Cabeçalho:
int Menu();


int Menu(){
	int contador;
	cout << "--------------------------------" << endl;
	cout << "[1] Inserir elementos na fila" << endl;
	cout << "[2] Retirar elementos da fila" << endl;
	cout << "[3] Exibir a fila" << endl;
	cout << "[4] Sair do Programa" << endl;
	cout << "Insira a opção que deseja" << endl;
	cout << "--------------------------------" << endl;
	
	cin >> contador;
	return contador;
	
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	Fila F1;
	elem X;
	bool erro;
	cout << "Criando a fila: " << endl;
	Create(&F1);
	cout << "Fila criada com sucesso!" << endl;
	
	int cont = Menu();
	
	while(cont != 4){
		if(cont == 1){
			cout << "Insira o elemento que deseja colocar na pilha: ";
			cin >> X;
		
			Enter(&F1, &X, &erro);
			if(erro == false){
				cout << "Elemento inserido com sucesso!" << endl; 
			}else{
				cout << "A fila está cheia!!!" << endl;
			}
			 
			
			
			cont = Menu();
			
		}else if(cont == 2){
			cout << "Retirando um elemento da fila: " << endl;
			X = Out(&F1, &erro);
			
			if(erro == false){
				cout << "Elemento retirado com sucesso!" << endl;
				cout << "Elemento retirado: " << X;
				cont = Menu();
			}else{
				cout << "Fila vazia!!" << endl;
				cont = Menu();
			}
			
			
			
			
		}else if(cont == 3){
			cout << "Mostrandos os elementos da fila: " << endl;
			if(!IsEmpty(&F1)){
				Print(&F1);
				cont = Menu();
			}else{
				cout << "Fila Vazia!!!!" << endl;
				cont = Menu();
			}
			
		}else{
			cout << "Opção inválida" << endl;
			cont = Menu();
			
		}
		
	}
	
	
	
}
