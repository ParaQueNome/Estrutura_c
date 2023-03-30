#include<iostream>
#include<math.h>
#include<string.h>
#include<cstdlib>
#include<locale.h>

using namespace std;


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct Produto{
char nome[30]; 
/* Nome do produto */
int *codigo;         
/* Codigo do produto */
double  *preco; 
/* Preco do produto */
char fornecedor[50]; 
/* Fornecedor do produto*/

};


int main(){
	Produto p[5];
	int cod[5];
	double pre[5];
	setlocale(LC_ALL,"Portuguese");
	p->codigo = cod;
	p->preco = pre;
	for(int i= 0; i<5; i++){
		cout << "Insira o nome do produto " << i +1 << endl;
		cin >> p[i].nome;
		cout << "Insira o codigo do produto " << i +1 << endl;
		cin >> *p->codigo;
		cout << "Insira o preço do produto " << i+ 1 << endl;
		cin >> *p->preco;
		p->codigo++;
		p->preco++;
		cout << "Insira o nome do fornecedor do produto " << i + 1 << endl;
		cin >> p[i].fornecedor;
		
	}
	p->codigo = cod;
	p->preco = pre;
	for(int j = 0; j<5; j++){
		cout << "--------------------------------------------" << endl;
		cout << "Produto: " << p[j].nome << endl;
		cout << "Código do produto: " << *p->codigo << endl;
		p->codigo++;
		cout << "Preço do produto: R$ " << *p->preco << endl;
		p->preco++;
		cout<< "Fornecedor do produto: " << p[j].fornecedor << endl;
		
	}
	
}
