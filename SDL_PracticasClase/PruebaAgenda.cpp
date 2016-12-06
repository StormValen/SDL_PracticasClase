#include <stdlib.h>
#include "ValentinGutierrez_Actividad8.hpp"
#include <iostream>

using namespace std;

int main() {
	Agenda AG;

	//PRIMER ELEMENTO DEL MAP
	Fecha F(24, 12,1997);
	Hora H(24, 12);
	std::string C = "Hola , esta es mi primera tarea";
	//
	AG.insertarEvento(F, H, C);



	AG.printer(F, H);

	
	
	system("pause");
	return 0;
}