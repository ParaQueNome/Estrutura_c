#include <iostream>

// Todos os valores receber�o 20, por causa do ponteiro "temp" que primeiramente aponta para o 
// endere�o de count e o muda para o valor 20. Logo ap�s, o ponteiro "temp" aponta para sum e coloca o valor de count como
// parametro para sum
using namespace std;
int main() {
	int count = 30, *temp, sum = 2;
	temp = &count;
	*temp = 20;
	temp = &sum;
	*temp = count;
	cout <<  " count = "<< count << "*temp = " << *temp << "sum = " <<sum;
}
