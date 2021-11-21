#include <iostream>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		void setType(std::string type);
		const std::string &getType() const;
	private:
		std::string type;
};