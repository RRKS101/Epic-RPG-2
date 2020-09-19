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
	CombatStats() 
	{
		
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
};