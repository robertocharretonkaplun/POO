#include "Person.h"

Person::Person()
{
}

Person::Person(const char* _nombre) {
	m_nombre = new char[strlen(_nombre) + 1];
	strcpy_s(m_nombre, strlen(_nombre) + 1, _nombre);
	cout << "Nombre: " << m_nombre << endl;
}

Person::~Person() {
	delete[] m_nombre;
}

void Person::setName(string name)
{
	nombre = name;
}

void Person::setAge(int age)
{
	edad = age;
}

