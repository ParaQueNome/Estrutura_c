#include <iostream>
#include <cstdlib>
#include <string.h>
#include <math.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Ponto{
	double x, y;
	
};
double distancia(Ponto A, Ponto B){
	
	double result, dif1, dif2;
	dif1 = pow(B.x - A.x,2);
	dif1 = pow(B.y - A.y,2);

	result = sqrt(dif1+dif2);
	cout << result;
	return result;
}

void triangulo(Ponto A, Ponto B, Ponto C, Ponto D, Ponto E, Ponto F){
	double dist1, dist2, dist3;
	char resultado1[10], resultado2[10];
	
	dist1 = distancia(A,B);
	dist2 = distancia(B,C);
	dist3 = distancia(A,C);
	
	if(dist1 == dist2 && dist2 == dist3 && dist1 == dist3){
		cout << "O triângulo 'a' é classificado como equilátero!" << endl;
	}else if(dist1 != dist2 && dist1 != dist3 && dist2 != dist3){
		cout << "O triângulo 'a' é classificado como Escaleno!" << endl;
		
	}else{
		cout << "O triângulo 'a' é classificado como Isosceles!" << endl;
	}
	
	// Triangulo B:
	
	dist1 = distancia(D,E);
	dist2 = distancia(E,F);
	dist3 = distancia(F,D);
	
	if(dist1 == dist2 && dist2 == dist3 && dist1 == dist3){
		cout << "O triângulo 'b' é classificado como equilátero!" << endl;
	}else if(dist1 != dist2 && dist1 != dist3 && dist2 != dist3){
		cout << "O triângulo 'b' é classificado como Escaleno!" << endl;
		
	}else{
		cout << "O triângulo 'b' é classificado como Isosceles!" << endl;
	}
	
	
	
}



int main() {
	setlocale(LC_ALL,"Portuguese");
	Ponto A,B,C,D,E,F;
	double resultado;
	
	cout << "Insira o valor do PONTO A x  \n" ;
	cin >> A.x;
	cout << " Insira o valor do PONTO A y";
	cin >> A.y;
	
	
	cout << "Insira o valor do PONTO B x \n" ;
	cin >> B.x;
	cout << "Insira o valor do PONTO B y \n";
	cin>> B.y;
	
	
	cout << "Insira o valor do PONTO C x \n" ;
	cin >> C.x;
	cout << "Insira o valor do PONTO C y \n";
	cin>> C.y;
	
	cout << "Insira o valor do PONTO D x \n" ;
	cin >> D.x;
	cout << "Insira o valor do PONTO D y \n";
	cin>> D.y;
	
	cout << "Insira o valor do PONTO E x \n" ;
	cin >> E.x;
	cout << "Insira o valor do PONTO E y \n";
	cin>> E.y;
	
	cout << "Insira o valor do PONTO F x \n" ;
	cin >> F.x;
	cout << "Insira o valor do PONTO F y \n";
	cin>> F.y;
	
	triangulo(A,B,C,D,E,F);
	
	}
	
