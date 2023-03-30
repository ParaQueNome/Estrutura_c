#include <iostream>
#include<cstdlib>
#include<string.h>
#include<locale.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Equipe{
	char nome[15], posicao[15];
	int idade;
	float altura;
	
};


int main() {
	setlocale(LC_ALL,"Portuguese");
	Equipe atleta[5];
	int aux;
	float aux2;
	char aux3[15], aux4[15];
	for(int i = 0; i<5; i++){
		cout << "Insira o nome do atleta " << i +1 << ": "<< endl;
		cin >> atleta[i].nome;
		cout << "Insira a posição do atleta " << i+1 << ": " << endl;
		cin >> atleta[i].posicao;
		cout << "Insira a idade do atleta " << i+1 << ": " << endl;
		cin >> atleta[i].idade;
		cout << "Insira a altura do atleta " << i+1 << ": " << endl;
		cin >> atleta[i].altura;
		
		
	}
	
	
	for(int i = 0; i <5; i++){
		for(int j = 0; j <4; j++){
			if(atleta[j].idade < atleta[j+1].idade ){
				aux = atleta[j].idade;
				aux2 = atleta[j].altura;
				strcpy(aux3,atleta[j].nome);
				strcpy(aux4,atleta[j].posicao);
				atleta[j].idade = atleta[j+1].idade;
				atleta[j].altura = atleta[j+1].altura;
				strcpy(atleta[j].nome, atleta[j+1].nome);
				strcpy(atleta[j].posicao, atleta[j+1].posicao);
				
				atleta[j+1].idade = aux;
				atleta[j+1].altura = aux2;
				strcpy(atleta[j+1].nome,aux3);
				strcpy(atleta[j+1].nome,aux4);
				cout << "\n";
				
			}
		}
		
	}
	
	for(int z = 0; z <5; z++){
		cout << "-------------------------------------------------" << endl;
		cout << "Nome do atleta: " << atleta[z].nome<< endl;
		cout << "Posição do atleta: " << atleta[z].posicao << endl;
		cout<< " Idade do atleta: " << atleta[z].idade << endl;
		cout<< "Altura do atleta: " << atleta[z].altura << endl;
	}
}
