#pragma once
#include "CombatStats.h"
#include "SkillStats.h"

#include <iostream>

class Player 
{
private:
	CombatStats combatStats;
	SkillStats skillStats;

public:
	Player() 
	{
		std::cout << "Loading Game... " << std::endl;


	}

	virtual ~Player() 
	{
	
	}
};