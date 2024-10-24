//hpp, h es header, pp es ++
#pragma once
#include<iostream>
using namespace std;

class Foco
{
private:
    bool encendido;
public:
    Foco() {} //constructor
    ~Foco() {} //destructor
    void Encender(){
        this -> encendido = true; //this representa el objeto actual, con la flecha (puntero) apuntamos a la memoria
    }
    void Apagar(){
        this -> encendido = false;
    }
    void Imprimir(){
        if(this->encendido){
            cout<<"O";
        }
        else{
            cout<<".";
        }
    }
};