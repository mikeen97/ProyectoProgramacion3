#include <iostream>
#include <string>
#include <cstdlib>
#include <sstream>


using namespace std;


//funciones 
Pieza** crearTablero(string**);
void eliminarTablero(string**);
void llenarPiezasBlancas(string**);
void llenarPiezasNegras(string**);
void llenarPiezasVacias(string**);
void imprimirTablero(string**);


//main
int main(){
	Pieza*** tablero = new Pieza**[8];//mi tablero
    string player1,player2;
	int opcion=0;
	int turno=0;
	while(opcion!=2){
		cout<<"------MENU-------"<<endl;
   		cout<<"1) Jugar"<<endl;
		cout<<"2) SALIR"<<endl;
		cout<<"Ingrese su opcion"<<endl;
		cin>>opcion;
		if (opcion==1){

		}else{
			cout<<"Ingreso un numero invalido! "<<endl;
		}
	}
     return 0;
}

//funcion para imprimir la matriz
void imprimirTablero(string** tablero){
	for (int i = 0; i < 8; ++i){
		for (int j = 0; j < 8; ++j){
			cout<<"["<<tablero[i][j]->getTIpo()<<"]";
		}
		cout<<""<<endl;
	}
}



//metodo para llenar el tablero de espacios vacios 
void llenarPiezasVacias(string*** tablero){
	for (int i = 0; i < 8; ++i){
		for (int j = 0; j < 8; ++j){
			tablero[i][j]=new Pieza("  ");
		}
	}
}


//metodo para crear el tablero dinamico
Pieza*** crearTablero(Pieza*** tablero){
	for (int i = 0; i < 8; ++i){	
		tablero[i]= new Pieza*[8];
	}
	for (int i = 0; i < 8; ++i){
		for (int j = 0; j < 8; ++j){
			tablero[i][j]=NULL;
		}
	}
	return tablero;
}


//metodo para eliminar de memoria el tablero
void eliminarTablero(Pieza*** tablero){
	for (int i = 0; i < 8; ++i){	
		delete[] tablero[i];
	}
	delete[] tablero;
}




