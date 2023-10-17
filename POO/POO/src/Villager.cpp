#include "Villager.h"

//Villager::Villager(string _name, int _health, TipoAldeano _type, VillagerTask _task)
//{
//	name = _name;
//	health = _health;
//	type = _type;
//	task = _task;
//}

Villager::Villager(string _name, int _health, TipoAldeano _type, VillagerTask _task) :
m_name(_name), m_health(_health), m_type(_type), m_task(_task) {
}

void 
Villager::setName(string _name) {
	m_name = _name;
}

void 
Villager::setHealth(int _health) {
	m_health = _health;
}

void 
Villager::setType(TipoAldeano _type) {
	m_type = _type;
	cout << "The villager " << m_name << ", has change his type to " << m_type << endl;
}

void 
Villager::setTask(VillagerTask _task) {
	m_task = _task;
}

void
Villager::setCommand(string _command) {
}

void
Villager::setState() {
}

string 
Villager::getName() {
	return m_name;
}

void 
Villager::updateState() {
}

TipoAldeano 
Villager::getType() {
	return m_type;
}
