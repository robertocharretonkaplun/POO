#include "Person.h"
#include "Commons.h"
#include "Command.h"
#include "Villager.h"
#include "MathLib.h"
#include "Estudiante.h"

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
	Villager pepe;
	pepe.setName("Pepe");
	cout << "Nombre: " << pepe.getName() << endl;

	cout << "Ingresa el comando: " << endl;
	string command;
	cin >> command;

	Command cmd;
	//cmd.command(command, pepe.tipo);
	cmd.command(command, pepe);

	/*
	Vector2 position;
	position.setVector2(3, 4);
	position.print();
	position.dotProduct(2);
	position.print();
	Vector2 pos2;
	pos2.setVector2(3, 3);
	int result = position.crossProduct(pos2);
	cout << "Result: " << result << endl;
	position.print();
	*/

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

	//int result = Multiply(5, 3);
	return 0;
}