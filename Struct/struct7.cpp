#include <iostream>
#include <cstdlib>
#include <math.h>
#include <locale.h>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Voo{
	int cod_destino, cod_chegada;
};

struct Aeroporto{
	int codigo, qtd_chegada, qtd_saida;
	char nome[50];
	
	
};

int main() {
	setlocale(LC_ALL,"Portuguese");
	Voo v[10];
	Aeroporto a[5];
	
	for(int i = 0; i < 5; i++){
		cout << "Cadastro de aeroportos. \n";
		cout << "Insira o código do aeroporto(0 a 5): ";
		cin >> a[i].codigo;
		
		
		while(a[i].codigo < 0 || a[i].codigo > 5){
			cout<< "Por favor, insira um código válido!" <<endl;
			cin >> a[i].codigo;
		}
		cout << "Insira o nome do aeroporto: ";
		cin >> a[i].nome;
		cout<< "Insira a quantidade de voos desse aeroporto (0 a 10): ";
		cin >> a[i].qtd_chegada;de chegada 
		while(a[i].qtd_chegada < 0 || a[i].qtd_chegada >10){
			cout<< "Insira um quantidade válida de voos!"<<endl;
			cin >> a[i].qtd_chegada;
		}
		cout << "Insira a quantidade de voos de saída desse aeroporto (0 a 10): ";
		cin >> a[i].qtd_saida;
		while(a[i].qtd_saida < 0 || a[i].qtd_saida >10){
			cout<< "Insira um quantidade válida de voos!"<<endl;
			cin >> a[i].qtd_saida;
		}
	}
	
	for(int j = 0; j <10; j++){
		cout << "Insira o código do aeroporto de saída: ";
		cin >> v[j].cod_chegada;
		cout << "Insira o código do aeroporto de chegada: ";
		cin >> v[j].cod_destino;
	}
	for(int i = 0 ; i<10; i++){
		cout << "Aeroporto " << a[i].nome << ": " << endl;
		cout<< "Código do aeroporto: " << a[i].codigo << endl;
		if(a[i].codigo == v[i].cod_chegada){
			cout << "Voos de chegada: " << a[i].qtd_chegada;
			
		}
		
	}
}
