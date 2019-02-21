
#include "Operador.h"

// Constructor
Operador::Operador() {
}

// SETTERS
void Operador::setMinutosDisponibles(int minutosDisponibles_) {
	minutosDisponibles = minutosDisponibles_
}

void Operador::setSimCardDisponibles(int simCardDisponibles_) {
	simCardDisponibles = simCardDisponibles_ ;
}

void Operador::setCostoMinuto(int costoMinuto_) {
	costoMinuto = costoMinuto_ ;
}

void Operador::setValorMinuto(int valorMinuto_) {
	valorMinuto = valorMinuto_ ;
}

void Operador::setSemanas(Semana semana_, int indice) {
	semanas[indice] = semana_ ;
}

// GETTERS
int Operador::getMinutosDisponibles() {
	return minutosDisponibles ;
}

int Operador::getSimCardDisponibles() {
	return simCardDisponibles ;
}

int Operador::getCostoMinuto() {
	return costoMinuto ;
}

int Operador::getValorMinuto() {
	return valorMinuto ;
}

Semana Operador::getSemanas(int indice) {
	return semanas[indice] ;
}


