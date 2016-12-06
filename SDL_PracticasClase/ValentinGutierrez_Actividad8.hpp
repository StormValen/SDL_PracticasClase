#pragma once
#include <stdlib.h>
#include <iostream>
#include <map>
#include <string>
#include <list>

//CLASE FECHA	
class Fecha {
private:
	int dia,mes,año,fecha,id;
public:
	Fecha(int d, int m, int a): dia(d), mes(m), año(a) {
		fecha = (dia * 1000000)+(mes* 10000)+año;
	}
	bool operator <(const Fecha& rhs) const {
		return id < rhs.id;
	}

};

//CLASE HORA
class Hora {
private:
	int horas,minutos,hora,id;
public:
	Hora(int h, int m) : horas(h), minutos(m) {
		hora = (horas * 100) + minutos;
	} 
	bool operator <(const Hora& rhs) const {
		return id < rhs.id;
	}
};

//CLASE AGENDA
class Agenda {
private:
	std::map <Fecha, std::map <Hora, std::string>> mFecha;
	std::map <Hora, std::string> mHora;
public:
	Agenda() {
	}
	~Agenda() {
	}
	void insertarEvento(Fecha &fecha,  Hora &hora,  std::string com);
	void eliminarEvento(const Fecha &desde_fecha, const Hora &desde_Hora, const Fecha&hasta_fecha, const Hora&hasta_hora);
	std::list<std::pair<Hora, std::string>>eventosDia(const Fecha&fecha);
	std::list<std::pair<Hora, std::string>>eventosDia(const Fecha &fecha, const Hora&desde_hora, const Hora&hasta_hora);
	void printer(const Fecha &fecha, const Hora &hora);
};

void Agenda::insertarEvento( Fecha &fecha,  Hora &hora,  std::string com) {
	mFecha[fecha][hora] = com;
	std::cout << "Evento insertado correctamente: " << com << std::endl;
}

void Agenda::eliminarEvento(const Fecha &desde_fecha, const Hora &desde_Hora, const Fecha&hasta_fecha, const Hora&hasta_hora) {

}

std::list<std::pair<Hora, std::string>> Agenda::eventosDia(const Fecha&fecha) {

}

std::list<std::pair<Hora, std::string>> Agenda::eventosDia(const Fecha &fecha, const Hora&desde_hora, const Hora&hasta_hora) {

}

void Agenda::printer(const Fecha &fecha, const Hora &hora) {
	std::cout <<"       NOTA: " << mFecha[fecha][hora] << std::endl;
}