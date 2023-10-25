#include "Player.h"
#include "Enemy.h"

void Player::attack(Enemy*& _e)
{
	if (_e != nullptr)
	{
		int damage = -20;
		_e->setHealth(damage);
		cout << "El " << m_name << " ataco a " << _e->getName() << " y le resto " << damage << " puntos de vida." << endl;
	}
	else {
		cout << "No hay nada a que atacar." << endl;
		cout << "Atacaste al aire con tu espada *Gira 360 grados xD*" << endl;
	}
}
