#include "Dothraki.h"
#include "GuardiaReal.h"
#include "Lannister.h"
#include "Stark.h"
#include "Targaryen.h"
#include "PequenasFamiliasNobles.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;


int main(){
	vector<Stark*> star;
	vector<Lannister*> lann;
	vector<Targaryen*> tar;
	Dothraki* d;
	GuardiaReal* g;
	Lannister* l;
	PequenasFamiliasNobles* p;
	
	cout<<"Desea ingresar al programa? S/N"<<endl;
	char resp = 's';
	while (resp == 's' || resp == 'S'){
		cout<<"1. Agregar\n2. Listar\n 3. Eliminar"<<endl;
		int menu;
		cin>>menu;
		switch(menu){
			case 1:{
				cout<<"1. Stark\n2. Targaryen\n3. Lennister"<<endl;
				int agregarmenu;
				cin>>agregarmenu;
				switch(agregarmenu){
					case 1:{
						Stark* s;
						cout<<"Stark"<<endl;
						cout<<"Ingrese el Jefe de la fam"<<endl;
						string jefe;
						cin>>jefe;
						cout<<"ingrese la cant de lobos"<<endl;
						int cant;
						cin>>cant;
						cout<<"ingrese el animal emblema"<<endl;
						string emble;
						cin>>emble;
						cout<<"Ingrese el lema"<<endl;
						string lema;
						cin>>lema;
						cout<<"ingrese el guerrero"<<endl;
						string guerrero;
						cin>>guerrero;
						cout<<"Ingrese los integrantes"<<endl;
						int inte;
						cin>>inte;
						s = new Stark(jefe, cant, emble, lema, guerrero, inte);
						star.push_back(s);
						break;
					}
					case 2:{
						Targaryen* t;
						cout<<"Targaryen"<<endl;
						string r;
						string aniEmble;
						string lema;
						int cantD;
						string gue;
						int intee;
						cout<<"Ingrese en el siguiente orden, separado por enter, 1. Nombre reina\n2. Animal emblema\n 3.el Lema\n 4. cantidad de dragones\n 5. guerrero\n 6. numero de integrantes"<<endl;
						cin>>r;
						cin>>aniEmble;
						cin>>lema;
						cin>>cantD;
						cin>>gue;
						cin>>intee;
						t = new Targaryen(r,aniEmble,lema,cantD,gue,intee);
						tar.push_back(t);
						break;
					}
				}
				break;
			}
		}
		
		
	}
	
		
	return 0;
}
