#include <iostream>
#include <string.h>
#include <cstdlib>
#include <math.h>
#include <locale.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Produto{
	int codigo;
	char name[20];
	float preco;
	
	
	
};
int main() {
	Produto *p;
	int aux;
	float aux1,media, soma;
	char aux2[20];
	setlocale(LC_ALL,"Portuguese");
	
	// Alocando a memória com vetor e preenchendo;
	p = (struct Produto*)malloc(5 * sizeof(struct Produto));
	for(int i= 0; i < 5; i++){
		cout << "Insira o nome do produto  " << i+1 << ":";
		cin >> p[i].name;
		cout << "Insira o código do produto" << i+1 << ":";
		cin >> p[i].codigo;
		cout << "Insira o preço do produto" << i+1 << ":";
		cin >> p[i].preco;
		
	}
	
	// Fazendo bubble sort decrescente:
	
	for(int i = 0; i <5; i++){
		for(int j =0; j<4; j++){
			if(p[j].preco < p[j+1].preco){
				aux1= p[j].preco;
				aux = p[j].codigo;
				strcpy(aux2,p[j].name);
				
				p[j].preco = p[j+1].preco;
				p[j].codigo = p[j+1].codigo;
				strcpy(p[j].name, p[j+1].name);
				
				p[j+1].preco = aux1;
				p[j+1].codigo = aux;
				strcpy(p[j+1].name, aux2);
				
			}
			
			
		} 
		
	}
	
	// Imprimindo o vetor:
	for(int i = 0; i <5; i++){
		cout << "-------------------------------------" << endl;
		cout << "Código: " << p[i].codigo << endl;
		cout << "Nome: " << p[i].name << endl;
		cout << "Preço: R$" << p[i].preco << endl;
		soma = soma + p[i].preco;
		cout << "-------------------------------------" << endl;
	}
	media = soma/5;
	// Imprimindo a media:
	cout << "A media dos produtos é: " << media;
	free(p);
	
}
