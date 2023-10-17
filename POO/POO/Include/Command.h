#pragma once
#include "Commons.h"
#include "Villager.h"

class Command
{
public:
	Command() = default;
	~Command() = default;

	/*
	 * Brief: This method is in charge of updating a specific command it can be multiple
	 * Commands
	 * 
	 * Examples: "Rayo" = Transform to Witch
	 */
	Villager command(string command, Villager & aldeano) {
		

		// This command is in charge of tranforming the Villager into a witch.
		if (command == "Rayo")
		{
			aldeano.setType(TipoAldeano::Bruja);
		}
		// This command is in charge of tranforming the Villager into a zombie.
		if (command == "Mordida")
		{
			aldeano.setType(TipoAldeano::Zombie);
		}

		if (command == "spawn")
		{
			Villager villager("steve", 100, TipoAldeano::AldeanoBase, VillagerTask::Resting);

			cout << "A villager called " << villager.getName() << ", has spawn" << endl;
			return villager;
		}
			return aldeano;
	}
private:

};
