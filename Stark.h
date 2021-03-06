#include <string>
#include <vector>
#include "PequenasFamiliasNobles.h"

using namespace std;

#ifndef STARK_H
#define STARK_H

class Stark{
	private:
		string jefeFamilia;
		int cantLobos;
		string aniEmble;
		string lema;
		vector<PequenasFamiliasNobles*> ejer;
		string guerrero;
		int integrantes;
	
	public:
		Stark(string, int, string, string , string, int);
		//Setters
		void setJefeFamilia(string);
		void setCantLobos(int);
		void setAniEmble(string);
		void setLema(string);
		void setEjer(PequenasFamiliasNobles* p);
		void setGuerrero(string);
		void setIntegrantes(int);
		
		//Getters
		string getJefeFamilia();
		int getCantLobos();
		string getAniEmble();
		string getLema();
		//Getter de vector
		int getEjer(vector<PequenasFamiliasNobles*> ejer);
		string getGuerrero();
		int getIntegrantes();

		//Destructor
		~Stark();
							
};

#endif
