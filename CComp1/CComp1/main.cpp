//
//  main.cpp
//  CComp1
//
//  Created by Luis Sebastian Arroyo Pinto on 4/7/20.
//  Copyright © 2020 Luis Sebastian Arroyo Pinto. All rights reserved.
//

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
{
    string nombre;
    int edad;
    int celular;
    string direccion;
    string hobby;
    cout<<"Ingrese su Nombre: ";
    getline(cin,nombre);
    cout<<"Ingrese su Edad: ";
    cin>>edad;
    cout<<"Ingrese su Numero de Celular: ";
    cin>>celular;
    cout<<"Ingrese su Direccion: ";
    cin.ignore();
    getline(cin,direccion);
    cout<<"Ingrese su Hobby: ";
    getline(cin,hobby);
    cout<<"Datos"<<endl;
    cout<<nombre<<"--"<<edad<<"--"<<celular<<"--"<<direccion<<"--"<<hobby<<endl;
    
    
    float numero1;
    float numero2;
    cout<<"Primer Numero: ";
    cin>>numero1;
    cout<<"Segundo Numero: ";
    cin>>numero2;
    float suma=numero1+numero2;
    cout<<"La Suma es: "<<suma<<endl;
    float resta=numero1-numero2;
    cout<<"La Resta es: "<<resta<<endl;
    float multiplicacion=numero1*numero2;
    cout<<"La multiplicacion es: "<<multiplicacion<<endl;
    float division=numero1/numero2;
    cout<<"La division es: "<<division<<endl;
    float raizCuadrada= sqrt(numero1+numero2);
    cout<<"La Raiz cuadrada es: "<<raizCuadrada<<endl;
    
    
    int numero3;
    int numero4;
    cout<<"Primer Numero: ";
    cin>>numero3;
    cout<<"Segundo Numero: ";
    cin>>numero4;
    int suma1=numero3+numero4;
    cout<<"La Suma es: "<<suma1<<endl;
    int resta1=numero3-numero4;
    cout<<"La Resta es: "<<resta1<<endl;
    int multiplicacion1=numero3*numero4;
    cout<<"La multiplicacion es: "<<multiplicacion1<<endl;
    int division1=numero3/numero4;
    cout<<"La division es: "<<division1<<endl;
    int raizCuadrada1= sqrt(numero3+numero4);
    cout<<"La Raiz cuadrada es: "<<raizCuadrada1<<endl;
    
    
    int radio;
    int lado;
    int base;
    int altura;
    cout<<"Radio: ";
    cin>>radio;
    int areaCirculo= (3.14)*(radio*radio);
    cout<<"Area del circulo: "<<areaCirculo<<endl;
    cout<<"Lado: ";
    cin>>lado;
    int areaCuadrado= (lado*lado);
    cout<<"Area del Cuadrado: "<<areaCuadrado<<endl;
    cout<<"Base: ";
    cin>>base;
    cout<<"Altura: ";
    cin>>altura;
    int areaTriangulo= (base*altura)/2;
    cout<<"Area del Triangulo: "<<areaTriangulo<<endl;
    return 0;
}
