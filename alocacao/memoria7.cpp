#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <ctime>;
#include <locale.h>



using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	int fatorial,fat;
	int resultado = 1;
	clock_t start_time, end_time;
	
	start_time = clock();
	cout << "Insira o numero que deseja calcular o fatorial: " << endl;
	cin >> fatorial;
	fat = fatorial;
	// Calculando o fatorial
	for (int i = 0; i < fatorial; i ++){
		resultado = resultado *fat;
		fat--;
		
		
	}
	
	cout << "O resultado do fatorial de " << fatorial << " é: " << resultado << endl;
	end_time = clock();
	cout << "O tempo de processamento foi: " << end_time - start_time;
}
