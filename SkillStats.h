#pragma 
#include <map>
#include <string>
class SkillStats 
{
private:
	std::map<std::string, float> Stats;
	
	void SetBaseStats() 
	{
		Stats["crafting"] = 0;
		Stats["brewing"] = 0;
		Stats["enchanting"] = 0;
		Stats["foraging"] = 0;
		Stats["hunting"] = 0;
		Stats["farming"] = 0;
		Stats["woodcutting"] = 0;
		Stats["woodworking"] = 0;
		Stats["mining"] = 0;
		Stats["stamina"] = 0;
	}
public:
	enum Skills
	{
		CRAFTING=0,
		BREWING,
		ENCHANTING,
		FORAGING,
		HUNTING,
		FARMING,
		WOODCUTTING,
		WOODWORKING,
		MINING,
		STAMINA
	};
	SkillStats() 
	{
		SetBaseStats();

	}

	virtual ~SkillStats() 
	{
		
	}

	void SetSkill(std::string key, float value) 
	{
		Stats[key] = value;
	}

	float GetSkill(std::string key) 
	{
		return Stats[key];
	}
	
	void SetSkill(int key, float value) 
	{
		Stats[IntToName(key)] = value;
	}

	float GetSkill(int key)
	{
		return Stats[IntToName(key)];
	}

	std::string IntToName(int key) 
	{
		switch (key)
		{
		case CRAFTING:
			return "crafting";
			break;
		case BREWING:
			return "brewing";
			break;
		case ENCHANTING:
			return "enchanting";
			break;
		case FORAGING:
			return "foraging";
			break;
		case HUNTING:
			return "hunting";
			break;
		case FARMING:
			return "farming";
			break;
		case WOODCUTTING:
			return "woodcutting";
			break;
		case WOODWORKING:
			return "woodworking";
			break;
		case MINING:
			return "mining";
			break;

		default:
			return "";
			break;
		}
	}
};