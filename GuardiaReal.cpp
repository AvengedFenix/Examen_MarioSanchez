#include "GuardiaReal.h"
#include <string>
#include <iostream>

using namespace std;

GuardiaReal::GuardiaReal(){

}

void GuardiaReal::setNombre(string nombre){
	this->nombre = nombre;
}

void GuardiaReal::setEdad(int edad){
	this->edad = edad;
}

void GuardiaReal::setTipoSoldado(string tipo){
	this->tipoSoldado = tipo;
}

void GuardiaReal::setAtaque(int ataque){
	this->ataque = ataque;
}

void GuardiaReal::setDefensa(int defensa){
	this->defensa = defensa;
}

string GuardiaReal::getNombre(){
	return nombre;
}

int GuardiaReal::getEdad(){
	return edad;
}

string GuardiaReal::getTipoSoldado(){
	return tipoSoldado;
}
	

int GuardiaReal::getAtaque(){
	return ataque;
}

int GuardiaReal::getDefensa(){
	return defensa;
}


GuardiaReal::~GuardiaReal(){
	cout<<"Liberando memoria de GuardiaReal"<<endl;
}
