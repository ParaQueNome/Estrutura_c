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
	
	
	vet = (int*)malloc(4*sizeof(int));
	Pilha P1, P2, P3;
	
	Create(&P1);
	Create(&P2);
	Create(&P3);
	for(int i = 0; i < 4; i++){
		cout << "Insira um numero inteiro positivo ou negativo: ";
		cin >> vet[i];
		if(vet[i] % 2 == 0 ){
			vet[i] = comp;
			
			Push(&P1, &comp, &erro );
			cout << "Elemento inserido com sucesso! " << endl;
		}else{
			vet[i]=comp;
			Push(&P2, &comp, &erro);
			cout << "Elemento inserido com sucesso! " << endl;
		}
		
		
		}
	cout << P1.topo << endl;
	cout << P2.topo << endl;
	//int vet2[P2.topo];
	vet =(int*)realloc(vet,(P2.topo + 1) *sizeof(int));
	int x = P2.topo;
	for(int i = 0; i < x + 1; i++){
		vet[i] = P2.itens[i];
		
	}
	Empty(&P2);
	for(int i = 0; i < x + 1; i++ ){
		
		
		if(vet[i] >= 0){
			
			Push(&P3, &vet[i], &erro);
			
			cout << "Elemento inserido com sucesso! " << endl;
			
		}else{
			Push(&P2, &vet[i], &erro);
			cout << "Elemento inserido com sucesso! " << endl;
		}
		
		
	}
	 vet =(int*)realloc(vet,(P1.topo + 1)*sizeof(int));
	 int y = P1.topo;
	 for(int i = 0; i < y  + 1 ; i++){
		vet[i] = P1.itens[i];
		
	}
	Empty(&P1);
	for(int i =0; i < y + 1; i++){
		
		if(vet[i] <= -1){
			
			
			Push(&P3, &vet[i], &erro);
			cout << "Elemento inserido com sucesso! " << endl;
		}else{
			Push(&P1, &vet[i], &erro);
		}
	} 
	cout << "Pilha 1: " << endl;
	cout << "----------------------------" << endl;
	for(int i = 0; i < P1.topo + 1; i++){
		cout << "Elemento " << i + 1 << ": " << P1.itens[i] << endl;
	}
	cout << "Pilha 2: " << endl;
	cout << "----------------------------" << endl;
	for(int i = 0; i < P2.topo + 1; i++){
	cout << "Elemento " << i + 1 << ": " << P2.itens[i] << endl;
	}
	cout << "Pilha 3: " << endl;
	cout << "----------------------------" << endl;
	for(int i = 0; i < P3.topo + 1; i++){
	cout << "Elemento " << i + 1 << ": " << P3.itens[i] << endl;
	}
	
	free(vet);
}
