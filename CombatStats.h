#pragma once
#include <map>
#include <string>
class CombatStats 
{
private:
	std::map<std::string, float> Stats;
	void SetBaseStats() 
	{
		Stats["attack"] = 1;
		Stats["health"] = 1;
		Stats["health_regen"] = 1;
		Stats["action_stamina"] = 1;
		Stats["action_stamina_regen"] = 1;
		Stats["xp"] = 1;
		Stats["level"] = 1;
		Stats["all_defence"] = 1;
		
		Stats["fire_defence"] = 1;
		Stats["water_defence"] = 1;
		Stats["air_defence"] = 1;
		Stats["earth_defence"] = 1;
		Stats["dark_defence"] = 1;
		Stats["light_defence"] = 1;
		Stats["lava_defence"] = 1;
		Stats["ice_defence"] = 1;
		Stats["poison_defence"] = 1;

		Stats["ranged_defence"] = 1;
		Stats["magic_defence"] = 1;
		Stats["melee_defence"] = 1;
	}

public:
	enum CombatInfo 
	{
		ATTACK=0,
		HEALTH,
		HEALTH_REGEN,
		ACTION_STAMINA,
		ACTION_STAMINA_REGEN,
		XP,
		LEVEL,
		ALL_DEFENCE,
		FIRE_DEFENCE,
		WATER_DEFENCE,
		AIR_DEFENCE,
		EARTH_DEFENCE,
		DARK_DEFENCE,
		LIGHT_DEFENCE,
		LAVA_DEFENCE,
		ICE_DEFENCE,
		POISON_DEFENCE,
		RANGED_DEFENCE,
		MAGIC_DEFENCE,
		MELEE_DEFENCE
	};
	CombatStats() 
	{
		SetBaseStats();

	}

	virtual ~CombatStats() 
	{
	
	}

	void SetStat(std::string key, float value) 
	{
		Stats[key] = value;
	}

	float GetStat(std::string key) 
	{
		return Stats[key];
	}

	void SetStat(int key, float value) 
	{
		Stats[IntToName(key)] = value;
	}

	float GetStat(int key) 
	{
		return Stats[IntToName(key)];
	}

	std::string IntToName(int id) 
	{
		switch (id)
		{
		case ATTACK:
			return "attack";
			break;
		case HEALTH:
			return "health";
			break;
		case HEALTH_REGEN:
			return "health_regen";
			break;
		case ACTION_STAMINA:
			return "action_stamina";
			break;
		case ACTION_STAMINA_REGEN:
			return "action_stamina_regen";
			break;
		case XP:
			return "xp";
			break;
		case LEVEL:
			return "level";
			break;
		case ALL_DEFENCE:
			return "all_defence";
			break;
		case FIRE_DEFENCE:
			return "fire_defence";
			break;
		case WATER_DEFENCE:
			return "water_defence";
			break;
		case AIR_DEFENCE:
			return "air_defence";
			break;
		case EARTH_DEFENCE:
			return "earth_defence";
			break;
		case DARK_DEFENCE:
			return "dark_defence";
			break;
		case LIGHT_DEFENCE:
			return "light_defence";
			break;
		case LAVA_DEFENCE:
			return "lava_defence";
			break;
		case ICE_DEFENCE:
			return "ice_defence";
			break;
		case POISON_DEFENCE:
			return "poison_defence";
			break;
		case RANGED_DEFENCE:
			return "ranged_defence";
			break;
		case MAGIC_DEFENCE:
			return "magic_defence";
			break;
		case MELEE_DEFENCE:
			return "melle_defence";
			break;
		default:
			return "";
			break;
		}
	}
};