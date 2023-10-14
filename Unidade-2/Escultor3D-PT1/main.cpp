#include<iostream>
#include"sculptor.hpp"


using namespace std;

int main(){

     Sculptor minion(25, 25, 25); // Cria um objeto tridimensional para o Minion

    // cores
    float amarelo[4] = {1.0, 1.0, 0.0, 1.0};
    float azul[4] = {0.0, 0.0, 1.0, 1.0};
    float preto[4] = {0.0, 0.0, 0.0, 1.0};
    float cinza[4] = {0.5, 0.5, 0.5, 1.0};


    // Corpo do Minion
    minion.setColor(1.0, 1.0, 0.0, 1.0);
    minion.putBox(10, 21, 0, 38, 10, 20); // Corpo
    minion.putBox(21, 27, 16, 20, 10, 23);
    minion.putBox(4, 11, 16,20 , 10, 15);
    minion.putBox(4, 9, 20,21 , 10, 15);
    minion.setColor(0.0, 0.0, 0.0, 0.0);
    minion.putBox(21, 27, 16, 20, 23, 25);
    minion.putBox(4, 9, 21,23 , 10, 15);

    // Olho
    minion.setColor(0.0, 0.0, 0.0, 1.0); //bandana
    minion.putBox(10, 12, 4, 7, 19, 21);
    minion.putBox(9, 22, 4, 7, 9, 21);
    minion.cutBox(13,14 , 4, 7, 20, 21);
    minion.cutBox(17,18 , 4, 7, 20, 21);
    minion.cutBox(13,18 , 12, 13, 19, 20);
    minion.cutBox(13,18 , 13, 14, 19, 20);
    // dentes
    minion.setColor(1.0, 1.0, 1.0, 1.0);
    minion.putBox(13, 18, 12, 13, 18, 19);
    minion.setColor(0.0, 0.0, 0.0, 0.0);
    minion.putBox(13, 18, 13, 14, 18, 19);
    // roupa
    minion.setColor(0.0, 0.0, 1.0, 1.0);
    minion.putBox(9, 22, 15, 16, 9, 21);
    minion.putBox(12, 19, 16, 20, 9, 21);
    minion.putBox(9, 22, 20, 32, 9, 21);
    minion.putBox(11, 15, 32, 38, 13, 17);

    minion.setColor(0.5, 0.5, 0.5, 1.0);
    minion.putBox(14, 18, 16, 17, 9, 21);
    minion.putBox(17, 18, 17, 20, 9, 21);
    minion.putBox(14, 18, 19, 20, 9, 21);
    minion.putBox(14, 16, 18, 19, 9, 21);

    minion.setColor(0.5, 0.5, 0.5, 1.0);
    minion.putBox(12, 13, 2, 10, 19, 22);
    minion.putBox(12, 19, 2, 3, 19, 22);
    minion.putBox(18, 19, 2, 10, 19, 22);
    minion.putBox(12, 19, 9, 10, 19, 22);
    minion.setColor(0.7, 0.7, 0.7, 1.0);
    minion.putBox(13, 19, 3, 9, 19, 20);
    minion.setColor(0.6, 0.3, 0.0, 1.0); //íris (marrom)
    minion.putBox(14, 15, 4, 8, 19, 21);
    minion.putBox(14, 17, 4, 5, 19, 21);
    minion.putBox(16, 17, 4, 8, 19, 21);
    minion.putBox(14, 17, 7, 8, 19, 21);
    minion.setColor(0.0, 0.0, 0.0, 1.0);
    minion.putBox(15, 16, 5, 7, 19, 21);// pupila do olho

    minion.writeOFF("minion.off");

    return 0;
}
