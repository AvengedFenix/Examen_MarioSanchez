#include "Dothraki.h"
#include <cstring>
#include <iostream>

using namespace std;

//Constructor
Dothraki::Dothraki(){
	
}

void Dothraki::setNombre(string nombre){
	this->nombre = nombre;
}

void Dothraki::setJefeBarbaro(string nombre){
	this->jefeBarbaro = nombre;
}

void Dothraki::setNombreCaballo(string nombre){
	this->nombreCaballo = nombre;
}

void Dothraki::setColorCaballo(string color){
	this->colorCaballo = color;
}

void Dothraki::setAtaque(int ataque){
	this->ataque = ataque;
}

void Dothraki::setDefensa(int defensa){
	this->defensa = defensa;
}

string Dothraki::getNombre(){
	return nombre;
}

string Dothraki::getJefeBarbaro(){
	return jefeBarbaro;
}

string Dothraki::getNombreCaballo(){
	return nombreCaballo;
}

string Dothraki::getColorCaballo(){
	return colorCaballo;
}

int Dothraki::getAtaque(){
	return ataque;
}

int Dothraki::getDefensa(){
	return defensa;
}

Dothraki::~Dothraki(){
	cout<<"Liberando memoria de Dothraki"<<endl;
}





