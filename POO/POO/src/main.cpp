#include "Person.h"
#include "Commons.h"
#include "Command.h"
#include "Villager.h"
#include "MathLib.h"
#include "Estudiante.h"

#include "Enemy.h"
#include "Player.h"

int g_vida = 20;
float g_money = 100;

void
AddMoney(float value) {
	g_money += value;

	cout << "Usted tiene un nuevo ingreso de: " << value << endl;
	cout << "Su saldo actual es de: " << g_money << endl;
}

float
GetMoney() {

	float consulta = (g_money - (g_money * 0.16));
	g_money -= consulta;

	cout << "Comision por consulta: $" << consulta << endl;
	return g_money;
}

int
GetHealth() {
	return g_vida;
}

int
Multiply(int a, int b) {
	int result = a * b;
	return result;
}

int
main() {
	Player* Finn = new Player("Finn", 100);
	Enemy* Lych = new Enemy("Lych", 500);
	Finn->attack(Lych);
	Lych->attack(Finn);

	/*
	vector<string> Nombres;
	Nombres.push_back("Roberto");
	Nombres.push_back("Jhon");
	Nombres.push_back("Fabian");
	Nombres.push_back("Diego");
	Nombres.push_back("Alejandro");

	for (int i = 0; i < Nombres.size(); i++)
	{
		cout << "Nombre: " << Nombres[i] << endl;
	}


	Villager pepe;
	pepe.setName("Pepe");
	cout << "Nombre: " << pepe.getName() << endl;

	cout << "Ingresa el comando: " << endl;
	string command;
	cin >> command;

	Command cmd;
	//cmd.command(command, pepe.tipo);
	cmd.command(command, pepe);


	MathLib ml;
	ml.sqrt(3);

	float result = MathLib::sqrt(5);

	Person* person = new Person("Roberto");

	delete person;

	const int numEstudiante = 3;
	Estudiante** esstudiantes = new Estudiante * [numEstudiante];
	esstudiantes[0] = new Estudiante("Luis Angel", 21, 65.0f);
	esstudiantes[1] = new Estudiante("Bruno", 30, 55.0f);
	esstudiantes[2] = new Estudiante("Diego Alejandro", 19, 80.0f);

	for (int i = 0; i < numEstudiante; i++)
	{
		esstudiantes[i]->printData();
	}
	for (int i = 0; i < numEstudiante; i++)
	{
		delete esstudiantes[i];
	}

	*/
	//int result = Multiply(5, 3);
	return 0;
}