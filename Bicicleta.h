#pragma once
#include "Terrestre.h"

class Bicicleta : public Terrestre {
public:
	Bicicleta() : Terrestre() {
		dx = 1;
		ancho = 6;
		alto = 2;
	}

	~Bicicleta() {}

	//Algoritmo de movimiento
	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "      ";
		Console::SetCursorPosition(x, y + 1); cout << "      ";
	
	}

	void dibujar() {
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(x, y);     cout << " /_.. ";
		Console::SetCursorPosition(x, y + 1); cout << "(o)(o)";
	}
};