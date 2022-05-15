//add come stuff
#ifndef WARLOCK_H
# define WARLOCK_H

# include <iostream>
# include <string>

class Warlock
{
	private:
		Warlock(void);
		Warlock(Warlock const & cpy);
		Warlock & operator=(Warlock const & right);

		std::string	name;
		std::string	title;

	public:
		Warlock(std::string n, std::string t);
		~Warlock(void);

		std::string	getName(void) const;
		std::string	getTitle(void) const;

		void		setTitle(std::string nt);

		void		introduce(void) const;
};

#endif
