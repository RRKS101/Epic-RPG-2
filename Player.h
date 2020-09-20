#pragma once
#include "BaseEnemy.h"
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
	
	AttackInfo Attack(int type, int range) 
	{
		float damage = combatStats.GetStat(CombatStats::ATTACK);
		
	}

	void Defend(AttackInfo attack) 
	{
		
	}
};