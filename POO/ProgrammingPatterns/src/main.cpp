// PROGRAMMING PATTERNS
#include <iostream>
#include "Singleton.h"
#include "Factory.h"
#include "AbstractFactory.h"

Singleton* Singleton::m_instance = nullptr;

int main() {
	// SINGLETON
	Singleton* SingleMan = Singleton::getInstance();
	SingleMan->setValue(42);

	Singleton* SingleMan2 = Singleton::getInstance();
	std::cout << "Value: " << SingleMan2->getValue() << std::endl;
	// FACTORY
	Factory* factory = new ConcreteFactory();
	Product* product = factory->crearProducto();
	product->operacion();

	delete factory;
	delete product;

	// ABSTRACT FACTORY
	AbstractFactory* AFactory = new ConcreteFactoryAbs();
	ProductA* productA = AFactory->crearProductoA();
	ProductB* productB = AFactory->crearProductoB();
	productA->operacionA();
	productB->operacionB();
	delete AFactory;
	delete productA;
	delete productB;
	return 0;
}