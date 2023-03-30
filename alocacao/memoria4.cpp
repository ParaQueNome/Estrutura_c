#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <ctime>;

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	long int **p;
	long int n;
	clock_t start_time, end_time;
	
	
	cout << "Insira a quantidade de linhas e colunas de sua matriz quadrada" << endl;
	cin >> n;
	
	p = (long int**)calloc(n,sizeof(int));
	start_time = clock();
	for(int i = 0; i < n; i++){
		p[i] = (long int*)calloc(n,sizeof(int));
		cout << "\t\n";
		
		for(int j = 0; j < n; j++){
			cout << p[i][j]<< "\t";
		}
	}
	cout << endl;
	end_time = clock();
	cout << "Tempo de processamento: ";
	cout << end_time - start_time;
}
