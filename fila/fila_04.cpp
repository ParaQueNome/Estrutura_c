#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include "estrutura_fila.h"

using namespace std;

// Declarando a struct de processos:

struct Processo{
	
	int id, priority, wait;
	char *process_name;
	
};
//Cabecalho das funções:
int Menu();
void insereProcesso(Fila *F, elem *X, bool *erro);
void verificaPrioridade(Fila *F, elem *X, bool *erro);


// Declarando as funções;
int Menu(){
	int contador;
	cout << "-----------------" << endl;
	cout << "[1] - Incluir Processos" << endl;
	cout << "[2] - Matar Processo com maior tempo de espera"<< endl;
	cout << "[3] - Executar um processo" << endl;
	cout << "[4] - Imprimir fila de processos" << endl;
	cout << "[5] - Sair do programa" << endl;
	cout << "-----------------" << endl;
	cout << "Insira uma opção: ";
	cin >> contador;
	return contador;
}
void insereProcesso(Fila *F, elem *X, bool *erro){
	Processo *Pr;
	Pr = (Processo*)malloc(sizeof(Processo));
	cout << "Insira o codigo do processo: ";
	cin >> Pr->id;
	cout << "Insira o nome do processo: ";
	cin >> Pr->process_name;
	cout << "Insira a prioridade do processo: ";
	cin >> Pr->priority;
	cout << "Insira o tempo do processo em milissegundos: ";
	cin >> Pr->wait; 
	
	free(Pr);
}
void verificaPrioridade(Fila *F, elem *X, bool *erro){
	
	
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	//Declarando variaveis da fila:
	Fila F;
	elem X;
	bool erro;
	int cont;
	cont = Menu();
	
	while(cont != 5){
		if(cont == 1){
			
			
			
		cout << "Inserindo processo na fila .... ";	
		}else if(cont == 2){
			
			cout<< "Eliminando processo corrompido...";
		}else if(cont == 3){
			
			cout << "Executando processo...";
			
		}else if(cont == 4){
			cout << "-----------------------------" << endl;
			cout << "Fila de processos: " << endl;
			
		}else{
			cout << "Insira uma opção válida!" << endl;
			
		}
		cont = Menu();
	}
	
	
	
}
