#include<iostream>
#include<math.h>

//Programa doceavo punto

using namespace std;

int main() {
	
float lado1, lado2, area, perimetro;

cout<<"Ingrese un lado del rect�ngulo: "; cin>>lado1;

cout<<"Ingrese el otro lado del rect�ngulo: "; cin>>lado2;

area=lado1*lado2;
perimetro=lado1+lado2;

cout<<"El area del rect�ngulo es de: "; 
cout<<area;

cout<<"\n Y el perimetro del rect�ngulo es de: "; 
cout<<perimetro;
return 0;	
	
}
