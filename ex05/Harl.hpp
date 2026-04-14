#include <iostream>

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
	public:
		Harl();
		Harl(const Harl &other);
		Harl &operator=(const Harl &other);
		~Harl();

		void	complaint(std::string level);
};
