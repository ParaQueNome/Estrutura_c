#include <iostream>
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <string.h>
#include <locale.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */





int main() {
    float decimal[10];
    float busca,*ptr=NULL, aux;
    ptr =decimal;
    cout << "###Informe os numeros###"<< endl;
    for(int i=0; i<10; i++){

        cout <<"digite o "<< i+1 << " numero decimal:"<< endl;
        cin >> *ptr;
        ptr++;
    }
	ptr = decimal;
	
	for(int i = 0; i<10; i++){
		for(int j = 0; j < 9; j++){
			if(ptr[j] > (ptr[j+1])){
			
			aux = ptr[j];
			ptr[j] = ptr[j+1];
			ptr[j+1] = aux;
			
			//*(ptr + 1) = ptr[j+1]; -- > São equivalentes
			//*ptr = ptr[j]; -- > São equivalentes
			
		}
		
		}
	}
	ptr = decimal;
	cout << "Insira um numero de busca: ";
	cin >> busca;
	for(int i = 0; i<10; i++){
		if(busca == *ptr){
			cout << " O numero foi encontrado! Numero: " << *ptr << endl;
			
		}else{
			cout << "Nao foi encontrado o numero!" << endl;
		}
		cout << "Numero: " << *ptr<< endl;
		ptr++;
	}
	

   
}

