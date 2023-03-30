#include <iostream>
#include <string.h>
#include<math.h>
#include <locale.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Estoque{
	int cod, qtd;
	char nome[15];
	float preco;
	
	};

void pedido(Estoque produtos[5]){
	int codigo, quantidade, i;
	cout << "Informe o codigo do produto que deseja comprar: ";
	cin >> codigo;
	cout << "Informe a quantidade de produtos que deseja comprar: ";
	cin >> quantidade;
	
	for(i = 0  ; i <5; i++){
	
	
		if(codigo == produtos[i].cod){
			while(produtos[i].qtd != 0){
				if(quantidade <= produtos[i].qtd){
				
					produtos[i].qtd = produtos[i].qtd - quantidade;
					
					cout << "Venda realizada com sucesso \n";
					cout << "Produto: " << produtos[i].nome << "\n";
					cout << "Quantidade: " << produtos[i].qtd << "\n";
					cout << "Itens restantes: " << produtos[i].qtd<< endl;
					
				}else{
					cout << "Não foi possível concluir a venda. Quantidade de produtos em estoque menor que o solicitado no pedido:  " << produtos[i].qtd << " produtos";
				}
				cout << "Informe a quantidade de produtos que deseja comprar: ";
				cin >> quantidade;
				}
				
			
		}else{
			cout << "Não foi localizado um produto com esse código. Por favor, insira um ID válido";
			
		}
		
	}
	
	
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	Estoque produtos[5];
	
	
	
	for(int i = 0; i < 5; i++){
		cout << "Informe o código do produto: ";
		cin >> produtos[i].cod;
		cout << "Informe o nome do produto: ";
		cin >> produtos[i].nome;
		cout << "Informe o preço do produto: ";
		cin >> produtos[i].preco;
		cout << "Informe a quantidade de itens em estoque: ";
		cin >> produtos[i].qtd;
		
		
	}
	
	
	pedido(produtos);
		
}



