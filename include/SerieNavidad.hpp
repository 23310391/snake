#pragma once

#include <Foco.hpp>
#include <list>
using namespace std;

class SerieNavidad{

private:
    list<Foco> focos;

public:
    SerieNavidad(int noFocos) { //solicitamos el numero de focos

        for(size_t i=0 ; i < noFocos ; i++){
            Foco f;
            focos.emplace_back(f); //cuando se ejecuta agraga un nuevo objeto a la lista
        }
    }

    ~SerieNavidad() {}

    void Encender(){ //con el forrange tomamos de foco por foco para encenderlos
        for (auto && foco : focos)
        {
            foco.Encender();
        }
    }
    void Encender(int noFocos){ 
        int decremento = noFocos;

        for (auto && foco : focos)
        {
            if(decremento > 0){
                foco.Encender();
                decremento --;
            }
        }
    }

    void Apagar(){
        for (auto && foco : focos)
        {
            foco.Apagar();
        } 
    }

    void Alternar( bool estado){
        for (auto && foco : focos)
        {
           if(estado){
            foco.Apagar();
            estado = false;
           } 
           else{
            foco.Encender();
            estado = true;
           }
        }   
    }

    void Imprimir(){
        for (auto && foco : focos)
        {
            foco.Imprimir();
        }
        cout<<endl;
    }
};
