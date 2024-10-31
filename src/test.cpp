#include <ftxui/dom/elements.hpp>
#include <ftxui/screen/screen.hpp>
#include <ftxui/screen/color.hpp>
#include <ftxui/screen/terminal.hpp>
#include <iostream>
#include <thread>

using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[]){

    std::string reset_position;
    int frame = 200;
    int frame2 = 180;
    int frame3 = 205;

    while (true){
        //construccion del canvas
        auto can = Canvas(300,70);
        can.DrawPointCircleFilled(295,-10,25); //sol
        can.DrawPointLine(0,60,300,60); //suelo
        can.DrawPointLine(20,60,20,30); //pared izquierda
        can.DrawPointLine(80,60,80,30); //pared derecha
        can.DrawPointLine(10,30,90,30); //base techo
        can.DrawBlockEllipseFilled(frame,20,10,5);
        can.DrawBlockEllipseFilled(frame2,15,8,5);
        can.DrawBlockEllipseFilled(frame3,7,15,5);
        can.DrawPointLine(10,30,50,15); //techo izquierda
        can.DrawPointLine(50,15,90,30); //techo derecha
        can.DrawPointCircle(50,22,2);
        can.DrawPointLine(40,60,40,50); //puerta
        can.DrawPointLine(50,60,50,50); //puerta
        can.DrawPointLine(40,50,50,50); //puerta
        can.DrawPointLine(60,35,60,40); //ventana
        can.DrawPointLine(75,35,75,40); //ventana
        can.DrawPointLine(68,35,68,40); //ventana

        can.DrawPointLine(60,35,75,35); //ventana
        can.DrawPointLine(60,40,75,40); //ventana

        // crear pantalla y agregar al canvas
        Screen pantalla = Screen::Create(Dimension::Full(), Dimension::Full());
        Element lienzo = bgcolor(Color::Black, canvas(&can));
        Render(pantalla, lienzo);

        // limpiar la pantalla y dibujar el canvas
        std::cout << reset_position;
        pantalla.Print();
        reset_position = pantalla.ResetPosition(true);

        // sleep
        this_thread::sleep_for(0.1s);

        // incrementar el numero de frame
        if(frame2 > 80){
            frame--; 
            frame2--; 
            frame3--; 
        }
        else{
            frame = frame; 
            frame2 = frame2; 
            frame3 = frame3; 
        }
    }

    return 0;
}