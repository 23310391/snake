#include<iostream> //input y output stream, stream es flujo, de datos
#include<Foco.hpp>

int main(int argc, char const *argv[])
{
    Foco foco1;
    Foco foco2;

    std :: cout<<"Encendiendo foco"<<std :: endl;
    foco1.Encender();
    std :: cout<<"Apagando foco"<<std :: endl;
    foco1.Apagar();

    return 0;
}
