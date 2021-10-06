#pragma once
#include "Terrestre.h"

class Persona : public Terrestre {
private:
	bool vida;
public:

	Persona(int x, int y) : Terrestre(x, y) {
		dx = 2;
		dy = 2;
		ancho = 4;
		alto = 2;
		vida = true;
	}

	~Persona() {}

	void borrar() {
		Console::SetCursorPosition(x, y);     cout << "    ";
		Console::SetCursorPosition(x, y + 1); cout << "    ";
	}

	void mover(char indice) {
		switch (indice) {
		case 'A':
			if (x >= 3) x -= dx; break;
		case 'D':
			if (x + ancho <= 67) x += dx;  break;
		case 'W':
			if (y >= 2) y -= dy; break;
		case 'S':
			if (y + alto <= 28) y += dy;  break;
		}
	}

	void dibujar() {
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(x, y); cout << char(219) << char(219) << char(219) << char(219);
		Console::SetCursorPosition(x, y + 1); cout << char(219) << char(219) << char(219) << char(219);
	}

	int getVida() { return vida; }
	void borrarvida() { vida = false; }
};