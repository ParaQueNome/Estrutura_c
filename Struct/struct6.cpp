#include <iostream>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>

using namespace std;

struct Sorteio{
	int num;
	char nome[15];
	
};

int sortear(Sorteio s[10]){
	int numero;
	for(int i = 0 ; i<10; i++){
		numero = rand() % 10;
		
	
	}
	return numero;
}
int main() {
	Sorteio s[2];
	setlocale(LC_ALL,"Portuguese");
	
	for(int i = 0; i<10; i++){
		cout << "Informe o seu nome: ";
		cin >> s[i].nome;
		cout << "Informe o número que acha que vai ser sorteado (1 a 10): ";
		cin >> s[i].num;
		
		
	}
	int resultado = sortear(s);
	
	cout << "O ganhador foi: " << s[resultado].nome << ", com o número sorteado: " << s[resultado].num;
	
	
}
