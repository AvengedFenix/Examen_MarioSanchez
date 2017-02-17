#include <string>
#include <vector>


#ifndef LANNISTER_H
#define LANNISTER_H

class Lannister{
	private:
		string jefeFamilia;
		
		string aniEmble;
		string lema;
		int FuerzaMontana;
		string guerrero;
		int integrantes;
	
	public:
		Lannister();
		//Setters
		void setJefeFamilia(string);
		
		void setAniEmble(string);
		void setLema(string);
		void setFuerzaMontana(int);
		void setGuerrero(string);
		void setIntegrantes(int);
		
		//Getters
		string getJefeFamilia();
		
		string getAniEmble();
		string getLema();
		int getFuerzaMontana();
		//Getter de vector
		string getGuerrero();
		int getIntegrantes();
					

		//Destructor
		~Lannister();		
};

#endif
