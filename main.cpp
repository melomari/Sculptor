#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <cmath>
#include "sculptor.h"

using namespace std;

int main()
{

    //Define o tamanho total
    Sculptor draw(100, 100, 100);

    //Corpo
    draw.setColor(255, 255, 255, 1);
    draw.putBox(2, 12, 0, 10, 2, 12);
    draw.putBox(12, 13, 4, 9, 5, 9);
    draw.putBox(1, 2, 4, 9, 5, 9);

    //Patas
    draw.setColor(255, 165, 0, 1);
    draw.putBox(3, 6, 0, 1, 12, 13);
    draw.putBox(8, 11, 0, 1, 12, 13);
      
    //Cabeça
    draw.setColor(255, 255, 255, 1);
    draw.putBox(4, 10, 10, 15, 10, 14);
    draw.setColor(255, 0, 0, 1);
    draw.putBox(6, 8, 15, 16, 10, 14);
    
    //Olhos
    draw.setColor(0, 0, 0, 1);
    draw.putBox(5, 6, 13, 14, 13, 14);
    draw.putBox(8, 9, 13, 14, 13, 14);

    //Bico
    draw.setColor(255, 255, 0, 1);
    draw.putBox(6, 8, 11, 12, 14, 15);

    draw.writeOFF((char*)"patinho.off");

    return 0;
}