#ifndef BRAIN_H
#define BRAIN_H

#include <iostream>
#include <string>

class Brain
{
private:
	std::string ideas[100];
	int size;

public:
	Brain(void);
	~Brain(void);
	Brain(const Brain &src);
	void newIdea(std::string idea);
	std::string getIdea();
	Brain &operator=(const Brain &rhs);
};

#endif
