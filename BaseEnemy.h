#pragma once
class Enemy 
{
public:
	
	Enemy() 
	{
	
	}

	virtual ~Enemy() 
	{
		
	}

	virtual void Attack() = 0;
	virtual void Defend() = 0;
};