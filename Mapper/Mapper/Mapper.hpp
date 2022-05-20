

#pragma once

#ifdef MAPPER_EXPORTS
#define MAPPER_API __declspec(dllexport)
#else
#define MAPPER_API __declspec(dllimport)
#endif

#include "vMapper.hpp"

class Mapper : public vMapper {
public:
	 Mapper(int count = 0);
	void map(int k, std::string c, std::string dir);
//	static bool test();
private:
	void exporter(std::vector<std::string> vect, std::string temp, int key);
};

extern "C" {
	MAPPER_API vMapper* _cdecl CreateMapperObj(int c);
}


