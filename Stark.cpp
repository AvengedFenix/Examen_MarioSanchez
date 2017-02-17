#include "Stark.h"
#include <iostream> 
#include <string>
#include <vector>

using namespace std;

Stark::Stark(){

}

void Stark::setJefeFamilia(string jefe){
	this->jefeFamilia = jefe;
}

void Stark::setCantLobos(int cant){
	this->cantLobos = cant;
}

void Stark::setAniEmble(string emble){
	this->aniEmble = emble;
}

void Stark::setLema(string lema){
	this->lema = lema;
}

void Stark::setEjer(PequenasFamiliasNobles* p){
	this->ejer.push_back(p);
}

void Stark::setGuerrero(string guerrero){
	this->guerrero = guerrero;
}

void Stark::setIntegrantes(int inte){
	this->integrantes = inte;
}

string Stark::getJefeFamilia(){
	return jefeFamilia;
}

int Stark::getCantLobos(){
	return cantLobos;
}

string Stark::getAniEmble(){
	return aniEmble;
}

string Stark::getLema(){
	return lema;
}

//Getter del vector

int Stark::getEjer(vector<PequenasFamiliasNobles*> x){
	for(int i = 0; i < x.size(); i++){
		cout<< i<< ". " << x.at(i)->getNombre()<<endl;
	}
	cout<<"Eliga un ejercito"<<endl;
	int elegir;
	cin>>elegir;
	return elegir;
}

string Stark::getGuerrero(){
	return guerrero;
}

int Stark::getIntegrantes(){
	return integrantes;
}

Stark::~Stark(){
	cout<<"Limpiando objeto Stark"<<endl;
	for(int i = 0; i < ejer.size(); i++){
		delete this->ejer[i];
	}
	this->ejer.clear();
}


