#include "Estudiante.h"

Estudiante::Estudiante(const string& _nombre, int _edad, float _calificacion)
{
	m_nombre = _nombre;
	m_edad = _edad;
	m_calificacion = _calificacion;
}

Estudiante::~Estudiante()
{
}

void 
Estudiante::printData() {
	cout << "Nombre: " << m_nombre << endl;
	cout << "Edad: " << m_edad << endl;
	cout << "Calificacion: " << m_calificacion << endl;
}
