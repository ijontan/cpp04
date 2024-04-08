#include "Brain.hpp"
#include <string>

Brain::Brain(void)
{
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain &Brain::operator=(const Brain &rhs)
{
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = rhs.ideas[i];
	}
	return *this;
}

Brain::~Brain(void)
{
}

void Brain::newIdea(std::string idea)
{
	ideas[0] = idea;
}

std::string Brain::getIdea()
{
	return ideas[0];
}
