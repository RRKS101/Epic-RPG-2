#pragma once
#include "AttackInfo.h"
#include "CombatStats.h"
class Enemy 
{
public:
	
	Enemy() 
	{
	
	}

	virtual ~Enemy() 
	{
		
	}

	virtual float CalculateResistances() 
	{
		
	}

	virtual AttackInfo Attack() = 0;
	virtual void Defend() = 0;
};