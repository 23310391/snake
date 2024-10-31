#include<SerieNavidad.hpp>
#include<Lienzo.hpp>
#include<Vector.hpp>
#include<unistd.h> //libreria estandar de unix

int main(int argc, char const *argv[]){
    Vector p(0,5);
    Vector t(100,100);
    Lienzo lienzo(p,t);

    SerieNavidad serie1(30);
    SerieNavidad serie2(30);

    int incremento = 0;
    bool estado = true;

    while(true){
        //
        serie1.Alternar(estado);
        lienzo.Dibujar(serie1);
        estado = estado ? false : true; //if de una sola linea

        //incremento
        serie2.Apagar();
        serie2.Encender(incremento);
        lienzo.Dibujar(serie2);
        incremento++;

        sleep(1); //delay en segundos
        lienzo.limpiar();
    }

    return 0;
}
