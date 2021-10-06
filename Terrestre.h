#pragma once
#include<iostream>

using namespace std;
using namespace System;
using namespace System::Drawing;

class Terrestre {
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
public:
	//Constructor de persona
	Terrestre(int x, int y) {
		this->x = x;
		this->y = y;
	}

	//Constructor de vehículos
	Terrestre() {
		x = rand() % 60 + 5; //70
		y = rand() % 20 + 4; //30
	}

	~Terrestre() {}

	//Movimiento automático
	void moverVehiculo() {
		if (x <= 3 || x + ancho >= 57) dx = 0;
		x += dx;
	}

	Rectangle getRectangle() {
		return Rectangle(x, y, ancho, alto);
	}

	void setX(int v) { x = v; }
	void setY(int v) { y = v; }
	int getX() { return x; }
	int getY() { return y; }
};

