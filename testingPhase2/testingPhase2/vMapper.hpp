/*************************************************************/
/* Abstrat class for mapper, used for explicit linking       */
/*************************************************************/
#pragma once
#include <string>
#include <vector>

class vMapper
{
public:

	virtual void map(int k, std::string c, std::string dir) = 0;
//	virtual bool test() = 0;

private:

	virtual void exporter(std::vector<std::string> vect, std::string temp, int key) = 0;
};
