#pragma once
#include "Prerequisites.h"

// Clase base para productos A
class ProductA {
public:
	virtual void operacionA() = 0;
};

// Clase base para productos B
class ProductB {
public:
	virtual void operacionB() = 0;
};

// Clase abstract Factory
class AbstractFactory {
public:
	virtual ProductA* crearProductoA() = 0;
	virtual ProductB* crearProductoB() = 0;
};

// Clase Contreta para productos A
class productA1 : public ProductA {
public:
	void operacionA() override {
		cout << "Operacion A en ProductoA1" << endl;
	}
};

// Clase Contreta para productos B
class productB1 : public ProductB {
public:
	void operacionB() override {
		cout << "Operacion B en ProductoB1" << endl;
	}
};

// Clase concreta para la fabrica
class ConcreteFactoryAbs : public AbstractFactory {
public:
	ProductA* crearProductoA() override {
		return new productA1();
	}
	ProductB* crearProductoB() override {
		return new productB1();
	}
};