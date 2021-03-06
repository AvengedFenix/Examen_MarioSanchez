#include <string>
#include <vector>
#include "Dothraki.h"

using namespace std;

#ifndef TARGARYEN_H
#define TARGARYEN_H

class Targaryen{
	private:
		string reina;
		string aniEmble;
		string lema;
		int cantDrag;
		vector<Dothraki*> ejer;
		string guerrero;
		int integrantes;
	
	public:
		Targaryen(string, string, string, int, string, int);
		//Setters
		void setReina(string);
		void setAniEmble(string);
		void setLema(string);
		void setCantDrag(int);
		void setEjer(Dothraki* p);
		void setGuerrero(string);
		void setIntegrantes(int);
		
		//Getters
		string getReina();
		string getAniEmble();
		string getLema();
		int getCantDrag();
		//Getter de vector
		string getGuerrero();
		int getIntegrantes();
					
		~Targaryen();		
};

#endif
