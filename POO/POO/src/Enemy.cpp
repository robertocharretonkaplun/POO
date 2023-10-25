#include "Enemy.h"
#include "Player.h"

void Enemy::attack(Player*& _p)
{
	if (_p != nullptr)
	{
		int damage = -20;
		_p->setHealth(damage);
		cout << "El " << m_name << " ataco a " << _p->getName() << " y le resto " 
			   << damage << " puntos de vida." << endl;
	}
	else {
		cout << "No hay nada a que atacar" << endl;
	}
}
