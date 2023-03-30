#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int num_elem = 20, *vet;
	elem comp;
	bool erro;
	
	
	vet = (int*)malloc(20*sizeof(int));
	Pilha P1, P2, P3;
	
	Create(&P1);
	Create(&P2);
	Create(&P3);
	for(int i = 0; i < 20; i++){
		cout << "Insira um numero inteiro positivo ou negativo: ";
		cin >> vet[i];
		if(vet[i] % 2 == 0 ){
			comp = vet[i];
			
			Push(&P1, &comp, &erro );
			cout << "Elemento inserido com sucesso! " << endl;
		}else{
			comp = vet[i];
			Push(&P2, &comp, &erro);
			cout << "Elemento inserido com sucesso! " << endl;
		}
		
		
		}
		
	
	
	
	for(int i = 0; i <= P1.topo; i++ ){
		if(P2.itens[i] >= 0){
			Pop(&P2, &erro);
			Push(&P3, &X, &erro);
			cout << "Elemento inserido com sucesso! " << endl;
			
		}
	}
	for(int i =0; i <= P1.topo; i++){
		if(P1.itens[i] <= -1){
			Pop(&P1, &erro);
			Push(&P3, &X, &erro);
			cout << "Elemento inserido com sucesso! " << endl;
	}
	}
	cout << "Pilha 1: " << endl;
	cout << "----------------------------" << endl;
	for(int i = 0; i <= P1.topo; i++){
		cout << "Elemento " << i + 1 << ": " << P1.itens[i] << endl;
	}
	cout << "Pilha 2: " << endl;
	cout << "----------------------------" << endl;
	for(int i = 0; i <= P2.topo; i++){
	cout << "Elemento " << i + 1 << ": " << P2.itens[i] << endl;
	}
	cout << "Pilha 3: " << endl;
	cout << "----------------------------" << endl;
	for(int i = 0; i <= P3.topo; i++){
	cout << "Elemento " << i + 1 << ": " << P3.itens[i] << endl;
	}
	
	free(vet);
}
