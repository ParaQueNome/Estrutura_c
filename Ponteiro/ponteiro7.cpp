#include <iostream>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <locale.h>
using namespace std;



struct Produto{
	char nome[15];
	float preco;
};


int main(){
	setlocale(LC_ALL,"Portuguese");
	Produto *ptr = NULL, p[2], p2[2];
	ptr = p;
	
	for(int i = 0; i<2; i++){
		cout << "Insira o nome do produto: "<< i+1 << endl;
		cin >> ptr->nome;
		cout << "Insira o preço do produto: "<< i+1 << endl;
		cin >> ptr->preco;
		ptr++;
		
		
	}
	ptr = p2;
	
	for(int j = 0; j <2; j++){
		strcpy(ptr->nome, p[j].nome);
		ptr->preco = p[j].preco;
		ptr++;
	}
	ptr = p2;
	for(int j = 0; j <2; j++){
		cout << "---------------------------------------------" << endl;
		cout << "Produto: " << ptr->nome << endl;;
		cout << "Preço: R$" << ptr->preco + (ptr->preco * 0.0478)<< endl;
		cout << "---------------------------------------------" << endl;
		ptr++;
	}
	
	
	
}
