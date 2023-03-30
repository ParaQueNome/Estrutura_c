#include <iostream>
using namespace std;
// a) Sim, o código compila, não exibindo nenhuma advertência;
// b) O valor de inx é 20;
// c) O ponteiro parr está apontando para o quarto índice do vetor arr, exibindo o valor 20;

int main() {
	int arr[5] = { 10, 80, 40, 30, 20 };
	int *parr = &arr[4];
	int inx = 0;
	inx = *parr++;
	
	cout << inx;
}
