#ifndef WARLOCK_H
# define WARLOCK_H

# include <iostream>
# include <string>

class Warlock
{
	private:
		std::string	name;
		std::string	title;

		Warlock(void);
		Warlock(Warlock const & cpy);
		Warlock & operator=(Warlock const & right);

	public:

		Warlock(std::string const name, std::string const title);
		~Warlock(void);

		std::string const &	getName(void) const;
		std::string const &	getTitle(void) const;
		void			setTitle(std::string const & nt);

		void			introduce(void) const;
};

#endif
