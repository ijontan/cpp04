#include "Brain.hpp"

Brain::Brain(void)
{
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
	(void)rhs;
	return *this;
}

Brain::~Brain(void)
{
}
