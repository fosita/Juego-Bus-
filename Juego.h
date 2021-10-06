#pragma once
#include "Persona.h"
#include "Carro.h"
#include "Bus.h"
#include "Bicicleta.h"
#include <vector>

class Juego {
private:
	Persona* p;
	vector<Carro*> carros;
	vector<Bus*> buses;
	vector<Bicicleta*> bicicletas;
	bool victoria;
public:
	//Constructor
	Juego() {
		p = new Persona(35, 27);
		victoria = false;
		for (int i = 0; i < 2; i++) {
			agregarCarro();
		}
		for (int i = 0; i < 1; i++) {
			agregarBus();
		}
		for (int i = 0; i < 3; i++) {
			agregarBicicleta();
		}
	}

	~Juego() {}

	void agregarCarro() {
		carros.push_back(new Carro());
	}
	void agregarBus() {
		carros.push_back(new Carro());
	}
	void agregarBicicleta() {
		carros.push_back(new Carro());
	}

	//Algoritmo de movimiento
	
	void borrarTodo() {
		p->borrar();
		for (int i = 0; i < carros.size(); i++) {
			carros[i]->borrar();
		}
		for (int i = 0; i < buses.size(); i++) {
			carros[i]->borrar();
		}
		for (int i = 0; i < bicicletas.size(); i++) {
			carros[i]->borrar();
		}
	}

	void moverTodo() {
		for (int i = 0; i < carros.size(); i++) {
			carros[i]->moverVehiculo();
		}
		for (int i = 0; i < buses.size(); i++) {
			carros[i]->moverVehiculo();
		}
		for (int i = 0; i < bicicletas.size(); i++) {
			carros[i]->moverVehiculo();
		}
	}

	void dibujarTodo() {
		p->dibujar();
		for (int i = 0; i < carros.size(); i++) {
			carros[i]->dibujar();
		}
		for (int i = 0; i < buses.size(); i++) {
			carros[i]->dibujar();
		}
		for (int i = 0; i < bicicletas.size(); i++) {
			carros[i]->dibujar();
		}
	}

	Persona* getPersona() { return p; }
	/*
	void colision_carro() {
		for (int i = 0; i < carros.size(); i++) {
			if (p->getRectangle().IntersectsWith(carros[i]->getRectangle())) {
				p->borrarvida();
			}
		}
	}

	void colision_bus() {
		for (int i = 0; i < buses.size(); i++) {
			if (p->getRectangle().IntersectsWith(buses[i]->getRectangle())) {
				p->borrarvida();
			}
		}
	}

	void limite() {
		for (int i = 0; i < buses.size(); i++) {
			if (buses[i]->getX() <= 4 || buses[i]->getX() >= 66) {
				buses.erase(buses.begin() + i);
				agregarBus();
			}
		}
		for (int i = 0; i < carros.size(); i++) {
			if (carros[i]->getX() <= 4 || carros[i]->getX() >= 66) {
				carros.erase(carros.begin() + i);
				agregarCarro();
			}
		}
		for (int i = 0; i < bicicletas.size(); i++) {
			if (bicicletas[i]->getX() <= 4 || bicicletas[i]->getX() >= 66) {
				bicicletas.erase(bicicletas.begin() + i);
				agregarBicicleta();
			}
		}
		if (p->getY() <= 6) {
			victoria = true;
		}
	}

	bool getVictoria() { return victoria; }*/
};