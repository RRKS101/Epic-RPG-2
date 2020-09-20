#pragma once
class AttackInfo 
{
private:
	float Damage;
	int attackType, attackRange;


public:

	AttackInfo(float damage, int type, int range) 
	{
		if (type > 16 || type < 8) throw "ERROR In AttackInfo: Type Out Of Range. Expected Between 8 and 16, Got " + type;
		if (range < 0 || range > 2) throw "Error In AttackInfo: Range Out OF Range. Expected Between 0, 2. Got " + range;
		this->Damage = damage;
		this->attackType = type;
		this->attackRange = range;
	}

	virtual ~AttackInfo() 
	{
		
	}

	enum AttackType
	{
		FIRE_DEFENCE = 8,
		WATER_DEFENCE,
		AIR_DEFENCE,
		EARTH_DEFENCE,
		DARK_DEFENCE,
		LIGHT_DEFENCE,
		LAVA_DEFENCE,
		ICE_DEFENCE,
		POISON_DEFENCE,
	};

	enum AttackRange 
	{
		RANGED=0,
		MAGIC,
		MELEE
	};
};