#pragma once
#include "Commons.h"

class Banco
{
public:
	Banco();
	~Banco();

public:

protected:

private:
	/*
	*  Brief: Esta funcion esta encargada de calcular el interes a partir de la 
	* tasa de cambio y el tiempo en el que se efectura.
	* Ejemplo: interes = _monto x _tasa x _tiempo;
	*/
	float interesSimple(float _monto, float _tasa, int _tiempo) {
		// 1) Calculamos el interes por medio de la operacion mencionada en la descripcion
		float interes = _monto * _tasa * _tiempo;
		// 2) Regresamos el resultado para ser usado en otra seccion del codigo
		return interes;
	}

private:
	string m_propietario;
	double m_numCuenta;
	float m_saldo;
};