#include <iostream>
#include "Person.h"

using namespace std;


int vida = 20;
float money = 100;

void AddMoney(float value) {
	money += value;

	cout << "Usted tiene un nuevo ingreso de: " << value << endl;
	cout << "Su saldo actual es de: " << money << endl;
}

float GetMoney() {

	float consulta = (money - (money * 0.16));
	money -= consulta;

	cout << "Comision por consulta: $" << consulta << endl;
	return money;
}

int GetHealth() {
	return vida;
}

int Multiply(int a, int b) {
	int result = a * b;
	return result;
}

int
main() {
	Person pepe;
	pepe.setName("Pepe");
	cout << "Nombre: " << pepe.getName() << endl;

	/*
	cout << "Hola Mundo :D" << endl;
	cout << "La vida es: " << vida << endl;
	cout << "La vida es: " << GetHealth() << endl;
	GetMoney();
	cout << "El Dinero es: " << money << endl;

	if (money >= 100)
	{
		cout << "Eres rico" << endl;
	}

	AddMoney(40);
	*/


	int result = Multiply(5, 3);
	return 0;
}