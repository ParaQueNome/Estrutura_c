#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cmath>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Memoria{
	char carctere[10];
	int* inteiro;
	float* decimal;
	
	
};


int main() {
	Memoria m[5];
	int inteiros[5];
	float decimais[5];
	char *p;
	p = m->carctere;
	m->inteiro = inteiros;
	m->decimal = decimais;
	
	for(int i = 0; i<5; i++){
	cout << "Insira um numero inteiro: " << endl;
	cin >> *m->inteiro;
	*m->inteiro = 100;
	m->inteiro++;
	cout << "Insira um numero decimal: " << endl;
	cin >> *m->decimal;
	*m->decimal = 1.99;
	m->decimal++;
	cout << "Insira uma letra: " << endl;
	cin >> *p;
	strcpy(p,"w");
	p++;
	
	
	}
	
	
	m->inteiro = inteiros;
	m->decimal = decimais;
	p = m->carctere;
	for(int i = 0; i<5; i++){
		cout << *m->inteiro<< endl;
		cout << *m->decimal <<endl;
		cout << *p<< endl;
		m->inteiro++;
		m->decimal++;
		p++;
		
		
		
	}
	
	
}
