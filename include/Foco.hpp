//hpp, h es header, pp es ++

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
};