#pragma once //para no duplicar clases
#include <Vector.hpp>
#include<SerieNavidad.hpp>

class Lienzo{

private:
    Vector posicion; //el lienzo tiene vectores
    Vector tamano;
public:
    Lienzo(Vector p, Vector t){
        this -> posicion = p;
        this -> tamano = t;
    }
    ~Lienzo() {}

    void Dibujar(SerieNavidad serie){ //la serie de navidad usa el lienzo
        serie.Imprimir();
    }

    void limpiar(){
        system("clear");
    }
};