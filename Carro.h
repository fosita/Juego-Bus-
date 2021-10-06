#pragma once
#include "Terrestre.h"

int velocidad[2] = { 2, 3};

class Carro : public Terrestre {
public:
	Carro() : Terrestre() {
		dx = velocidad[rand() % 2];
		ancho = 11;
		alto = 3;
	}
	
	~Carro() {}

	//Algoritmo de movimiento
	void borrar() {
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(x, y);     cout << "           ";
		Console::SetCursorPosition(x, y + 1); cout << "           ";
		Console::SetCursorPosition(x, y + 2); cout << "           ";
	}

	void dibujar() {
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(x, y);     cout << "_______|~\\_";  
		Console::SetCursorPosition(x, y + 1); cout << "[______|_|-";
		Console::SetCursorPosition(x, y + 2); cout << "(_)   (_)  ";
	
	}
};

