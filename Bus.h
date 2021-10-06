#pragma once
#include "Terrestre.h"

int velocidad[3] = { 2, 3, 4};

class Bus : public Terrestre {
public:
	Bus() : Terrestre() {
		dx = velocidad[rand() % 3];
		ancho = 20;
		alto = 4;
	}

	~Bus() {}

	//Algoritmo de movimiento
	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "                    ";
		Console::SetCursorPosition(x, y);     cout << "                    ";
		Console::SetCursorPosition(x, y);     cout << "                    ";
		Console::SetCursorPosition(x, y);     cout << "                    ";
	}

	void dibujar() {
		Console::ForegroundColor = ConsoleColor::White;
		Console::SetCursorPosition(x, y);     cout << "  ________________  ";
		Console::SetCursorPosition(x, y + 1); cout << " _/_|[][][][][][] | ";
		Console::SetCursorPosition(x, y + 2); cout << "(                 | ";
		Console::SetCursorPosition(x, y + 3); cout << " =--OO----------OO-=";

	}
};