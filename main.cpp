#include"Juego.h"
#include <conio.h>



int main() {
	srand(time(NULL));
	Console::SetWindowSize(70, 30);
	char tecla;
	Juego* j = new Juego();

	while (true) {
		Console::CursorVisible = false;
		j->borrarTodo();
		//j->colision_bus();
		//j->colision_carro();
		//j->limite();

		/*if (j->getVictoria() == true) {
			break;
		}

		if (j->getPersona()->getVida() == false) {
			break;
		}*/

		if (_kbhit()) {
			tecla = _getch();
			tecla = toupper(tecla);
			j->getPersona()->mover(tecla);
		}
		
		j->moverTodo();
		j->dibujarTodo();
		_sleep(100);
	}

	//system("cls");
	/*
	if (j->getVictoria() == true) {
		cout << "Ganaste!";
	} else if (j->getPersona()->getVida() == false) {
		cout << "Perdiste!";
	}*/

	_getch();
	return 0;
}