#include <iostream>
using namespace std;
// a) Sim, o c�digo compila, n�o exibindo nenhuma advert�ncia;
// b) O valor de inx � 20;
// c) O ponteiro parr est� apontando para o quarto �ndice do vetor arr, exibindo o valor 20;

int main() {
	int arr[5] = { 10, 80, 40, 30, 20 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;
	
	cout << inx;
}
