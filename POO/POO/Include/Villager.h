#pragma once
#include "Commons.h"

class
Villager {
public:
	Villager() = default;

	Villager(string _name, int _health, TipoAldeano _type, VillagerTask _task);

	//Villager(string _name, int _health, TipoAldeano _type, VillagerTask _task);
	
	// This method is change of makeing and equal operator for the class.
	Villager& operator=(const Villager& other) {
		if (this != &other)
		{
			m_name = other.m_name;
			m_health = other.m_health;
		}
	}

	~Villager() = default;

	void 
	setName(string _name);

	void 
	setHealth(int _health);

	void 
	setType(TipoAldeano _type);

	void 
	setTask(VillagerTask _task);

	void 
	setCommand(string _command);

	void 
	setState();

	string 
	getName();

	void 
	updateState();

	TipoAldeano 
	getType();

private:
	string m_name;
	int m_health;
	TipoAldeano m_type;
	VillagerTask m_task;
};