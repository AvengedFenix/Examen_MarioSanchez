#include <iostream>
#include <string>
#include <vector>
#include "GuardiaReal.h"
#include "Lannister.h"

using namespace std;

Lannister::Lannister(){

}

void Lannister::setJefeFamilia(string jefe){
	this->jefeFamilia =jefe;
}

void Lannister::setAniEmble(string emble){
	this->aniEmble = emble;
}

void Lannister::setLema(string lema){
	this->lema = lema;
}

void Lannister::setEjer(GuardiaReal* g){
	this->ejer.push_back(g);
}

void Lannister::setFuerzaMontana(int f){
	this->fuerzaMontana = f;
}

void Lannister::setGuerrero(string g){
	this->guerrero = g;
}

void Lannister::setIntegrantes(int i){
	this->integrantes = i;
}

string Lannister::getJefeFamilia(){
	return jefeFamilia;
}

string Lannister::getAniEmble(){
	return aniEmble;
}

string Lannister::getLema(){
	return lema;
}

int Lannister::getEjer(vector<GuardiaReal*> x){
	for(int i = 0; i < x.size(); i++){
			cout<< i<< ". " << x.at(i)->getNombre()<<endl;
		}
		cout<<"Eliga un ejercito"<<endl;
		int elegir;
		cin>>elegir;
		return elegir;
}

int Lannister::getFuerzaMontana(){
	return fuerzaMontana;
}

string Lannister::getGuerrero(){
	return guerrero;
}

int Lannister::getIntegrantes(){
	return integrantes;
}

Lannister::~Lannister(){
	cout<<"Limpiando objeto Lannister"<<endl;
		for(int i = 0; i < ejer.size(); i++){
			delete this->ejer[i];
		}
		this->ejer.clear();
}


