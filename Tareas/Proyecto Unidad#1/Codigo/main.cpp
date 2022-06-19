#include <iostream>
#include "startShip.h"
#include "snake.h"

using namespace std;

int main(int argc, char const *argv[])
{
    int option = 0;
    system("cls");

    cout.width (55);
    cout<<"****************"<<endl;
    cout.width (55);
    cout <<"*MENU DE JUEGOS*"<<endl;
    cout.width (55);
    cout<<"****************"<<endl;
    
    cout<<"Seleccione un juego: \n\n  1 - StarShip \n\n  2 - Snake\n"<<endl;
	cout<<"Ingrese un numero del menu para seleccionar un juego:"<<endl;
	cin>>option;
	
    switch(option){
		case 1:
			system("cls");
            starShip();
            break;

		case 2:
            system("cls");
            snake();
			break;	
			
		 default:
            break;
	}

    return 0;
}
