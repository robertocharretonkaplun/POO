#pragma once
#include "Commons.h"
class Person
{
public:
	// Constructor por defecto
	Person();

	// Consstructor Copia
	Person(const char* _nombre);

	// Destructor 
	~Person();

	// This method is in chage of returning a name 
	string 
	getName() {
		return nombre;
	}

	// This method is in charge of returning a age value
	int
	getAge() {
		return edad;
	}

	void 
	setName(string name);

	void 
	setAge(int age);


public:
	TipoAldeano tipo = TipoAldeano::AldeanoBase;
	char* m_nombre;
private:
	string nombre;
	int edad;

};
