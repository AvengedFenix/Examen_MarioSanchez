#include <string>
#include <vector>

using namespace std;

#ifndef PEQUENASFAMILIASNOBLES_H
#define PEQUENASFAMILIASNOBLES_H

class PequenasFamiliasNobles{
	private:
		string nombre;
		string simbolo;
		string lema;
		int cant;
		int ataque;
		int defensa;
	
	public:
		PequenasFamiliasNobles();
		//Setters
		void setNombre(string);
		void setSimbolo(string);
		void setLema(string);
		void setCant(int);
		void setAtaque(int);
		void setDefensa(int);
		
		//Getters
		string getNombre();
		string getSimbolo();
		string getLema();
		int getCant();

		int getAtaque();
		int getDefensa();
					
		~PequenasFamiliasNobles();		
};

#endif
