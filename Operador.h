
#include <iostream>
#include <stdlib.h>


class Operador {
	private :
		int minutosDisponibles, simCardDisponibles ;
		int costoMinuto, valorMinuto ;
		Semana semanas[4] ;
		
	public : 
		Operador () ;
		void setMinutosDisponibles (int minutosDisponibles_) ;
		void setSimCardDisponibles (int simCardDisponibles_) ;
		void setCostoMinuto (int costoMinuto_) ;
		void setValorMinuto (int valorMinuto_) ;
		void setSemanas (Semana semana_, int indice) ;
		int getMinutosDisponibles () ;
		int getSimCardDisponibles () ;
		int getCostoMinuto () ;
		int getValorMinuto () ;
		int getSemanas (int indice) ;
};
