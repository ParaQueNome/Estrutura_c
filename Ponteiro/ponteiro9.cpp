#include <iostream>
#include <string.h>
#include <cstdlib>

using namespace std;

int exibir(char* frase1, char* frase2){
	int aux, tamanho;
	aux = strcmp(frase1, frase2);
	
	
	if(aux == 0){
		tamanho = strlen(frase1);
		return tamanho;
	}else if(aux == -1){
		tamanho = strlen(frase1);
		return tamanho;
	}else if(aux == 1){
		tamanho = strlen(frase2);
		return tamanho;
	}
	
}


int main() {
	char frase[50], frase2[50];
	char aux[50];
	char *ptr;
	int tm;
	ptr = frase;
	cout << "Insira uma frase: ";
	gets(frase);
	tm = strlen(frase);
	for(int i= 0; i<tm; i++){
		if(ptr[i] == ' '){
			
			tm--;
		}
	}
	
	cout << "Numero de caracteres: "<< tm << endl;
	
	cout << "Insira uma segunda frase: ";
	gets(frase2);
	
	tm = strlen(frase2);
	cout << " O tamanho da frase 2 e: " << tm << endl;
	strcpy(aux, frase2);
	
	
	tm = exibir(frase,frase2);
	cout << "O tamanho da maior frase e: " << tm;
	
}
