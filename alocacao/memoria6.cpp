#include <iostream>
#include <string.h>
#include <math.h>
#include <cstdlib>
#include <ctime>;

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	long int **p;
	long int n,m;
	clock_t start_time, end_time;
	
	
	cout << "Insira a quantidade de linhas  de sua matriz quadrada" << endl;
	cin >> n;
	cout << "Insira a quantidade de colunas de sua matriz quaadrada" << endl;
	cin >> m;
	
	p = (long int**)malloc(n*sizeof(int));
	start_time = clock();
	for(int i = 0; i < n; i++){
		p[i] = (long int*)malloc(m*sizeof(int));
		cout << "\t\n";
		
		for(int j = 0; j < m; j++){
			p[i][j] = 0;
			cout << p[i][j]<< "\t";
		}
	}
	cout << endl;
	end_time = clock();
	cout << "Tempo de processamento: ";
	cout << end_time - start_time;
}
