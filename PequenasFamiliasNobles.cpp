#include "PequenasFamiliasNobles.h"
#include "string"
#include <iostream>

using namespace std;

PequenasFamiliasNobles::PequenasFamiliasNobles(){

}

void PequenasFamiliasNobles::setNombre(string nombre){
	this->nombre = nombre;
}

void PequenasFamiliasNobles::setSimbolo(string simbolo){
	this->simbolo = simbolo;
}

void PequenasFamiliasNobles::setLema(string lema){
	this->lema = lema;
}

void PequenasFamiliasNobles::setCant(int cant){
	this->cant = cant;
}

void PequenasFamiliasNobles::setAtaque(int ataque){
	this->ataque = ataque;
}

void PequenasFamiliasNobles::setDefensa(int defensa){
	this->defensa = defensa;
}

string PequenasFamiliasNobles::getNombre(){
	return nombre;
}

string PequenasFamiliasNobles::getSimbolo(){
	return simbolo;
}

string PequenasFamiliasNobles::getLema(){
	return lema;
}

int PequenasFamiliasNobles::getCant(){
	return cant;
}

int PequenasFamiliasNobles::getAtaque(){
	return ataque;
}

int PequenasFamiliasNobles::getDefensa(){
	return defensa;
}

PequenasFamiliasNobles::~PequenasFamiliasNobles(){
	cout<<"Liberando memoria de Familias nobles";
}
