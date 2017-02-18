#include <string>
#include <vector>
#include "GuardiaReal.h"

using namespace std;

#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister{
	private:
		string jefeFamilia;
		
		string aniEmble;
		string lema;
		vector<GuardiaReal*> ejer; 
		int fuerzaMontana;
		string guerrero;
		int integrantes;
	
	public:
		Lannister(string, string,string, int ,string, int);
		//Setters
		void setJefeFamilia(string);
		
		void setAniEmble(string);
		void setLema(string);
		void setEjer(GuardiaReal* g);
		void setFuerzaMontana(int);
		void setGuerrero(string);
		void setIntegrantes(int);
		
		//Getters
		string getJefeFamilia();
		
		string getAniEmble();
		string getLema();
		int getEjer(vector<GuardiaReal*> ejer);
		int getFuerzaMontana();
		//Getter de vector
		string getGuerrero();
		int getIntegrantes();
					

		//Destructor
		~Lannister();		
};

#endif
