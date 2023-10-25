#pragma once
#include "Prerequisites.h"

/*
	Brief: Esta clase esta encarga de ser el objeto base de un producto.
*/
class 
Product {
public:
	virtual 
	void
	operacion() =0;
};

class 
Factory {
public:
	virtual 
	Product* 
	crearProducto() = 0;
};

class 
ConcreteProduct : public Product {
public:
	void 
	operacion() override {
		std::cout << "Operacion en producto concreto" << std::endl;
	}
};

class 
ConcreteFactory : public Factory {
public:
	Product* crearProducto() override {
		return new ConcreteProduct();
	}
};

