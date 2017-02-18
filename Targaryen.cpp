#include <iostream>
#include <string>
#include <vector>
#include "Dothraki.h"
#include "Targaryen.h"

using namespace std;

Targaryen::Targaryen(string reina, string aniEmble, string lema, int cantDrag, string guerrero, int integrantes){

}

void Targaryen::setReina(string r){
	this->reina = r;
}

void Targaryen::setAniEmble(string a){
	this->aniEmble = a;
}

void Targaryen::setLema(string l){
	this->lema = l;
}

void Targaryen::setCantDrag(int c){
	this->cantDrag = c;
}

void Targaryen::setEjer(Dothraki* d){
	this->ejer.push_back(d);
}

void Targaryen::setGuerrero(string g){
	this->guerrero = g;
}

void Targaryen::setIntegrantes(int i){
	this->integrantes = i;
}

string Targaryen::getReina(){
	return reina;
}

string Targaryen::getAniEmble(){
	return aniEmble;
}

string Targaryen::getLema(){
	return lema;
}

int Targaryen::getCantDrag(){
	return cantDrag;
}

string Targaryen::getGuerrero(){
	return guerrero;
}

int Targaryen::getIntegrantes(){
	return integrantes;
}

Targaryen::~Targaryen(){
		cout<<"Limpiando objeto Lannister"<<endl;
	for(int i = 0; i < ejer.size(); i++){
		delete this->ejer[i];
	}
	this->ejer.clear();
}
