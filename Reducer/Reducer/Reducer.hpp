
#ifdef REDUCER_EXPORTS
#define REDUCER_API __declspec(dllexport)
#else
#define REDUCER_API __declspec(dllimport)
#endif


#include "Trie.hpp"
#include "vReducer.hpp"


class Reducer : public vReducer {
	std::string mOutDir;
public:
	// constructor takes in the out path
	Reducer(std::string);
	// reduces the trie into a word and key (quantity) and calls export
	bool reduce(Trie*);
};

extern "C" {
	REDUCER_API vReducer* _cdecl CreateReduceObject(std::string);
}