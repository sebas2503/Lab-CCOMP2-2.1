//
//  main.cpp
//  CComp1
//
//  Created by Luis Sebastian Arroyo Pinto on 4/7/20.
//  Copyright © 2020 Luis Sebastian Arroyo Pinto. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    string nombre;
    int edad;
    int celular;
    string direccion;
    string hobby;
    cout<<"Ingrese su Nombre: ";
    cin>>nombre;
    cout<<"Ingrese su Edad: ";
    cin>>edad;
    cout<<"Ingrese su Numero de Celular: ";
    cin>>celular;
    cout<<"Ingrese su Direccion: ";
    cin>>direccion;
    cout<<"Ingrese su Hobby: ";
    cin>>hobby;
    cout<<"Datos"<<endl;
    cout<<nombre<<"-"<<edad<<"--"<<celular<<"--"<<direccion<<"--"<<hobby<<endl;
    return 0;
}
