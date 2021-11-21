#include <iostream>

class Karen
{
	public:
		~Karen(void);
		Karen(void);
		void complain(std::string level, std::string filter);
	private:
		void debug(void);
		int evaluate_level(std::string filter);
		void info(void);
		void warning(void);
		void error(void);
};
typedef void (Karen:: *pf)(void);
