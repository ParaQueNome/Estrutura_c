#include <iostream>
#include <cstdlib>
#include <locale>
#include "estrutura_3.h"
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
			
			
			Push(&P1, &vet[i], &erro );
			cout << "Elemento inserido com sucesso! " << endl;
		}else{
			comp = vet[i];
			Push(&P2, &comp, &erro);
			cout << "Elemento inserido com sucesso! " << endl;
		}
		
		
		}
		
	
	//int vet2[P2.topo];
	vet =(int*)realloc(vet,sizeof(P2.topo));
	int x = P2.topo;
	for(int i = 0; i < P2.topo; i++){
		vet[i] = P2.itens[i];
		
	}
	Empty(&P2);
	for(int i = 0; i <= x; i++ ){
		
		
		if(vet[i] >= 0){
			
			Push(&P3, &vet[i], &erro);
			
			cout << "Elemento inserido com sucesso! " << endl;
			
		}else{
			Push(&P2, &vet[i], &erro);
			cout << "Elemento inserido com sucesso! " << endl;
		}
		
		
	}
	 vet =(int*)realloc(vet,sizeof(P1.topo));
	 int y = P1.topo;
	 for(int i = 0; i < P1.topo; i++){
		vet[i] = P1.itens[i];
		
	}
	Empty(&P1);
	for(int i =0; i <= y; i++){
		
		if(vet[i] <= -1){
			
			
			Push(&P3, &vet[i], &erro);
			cout << "Elemento inserido com sucesso! " << endl;
		}else{
			Push(&P1, &vet[i], &erro);
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
