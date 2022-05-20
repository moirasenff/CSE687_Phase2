#pragma once

#include <string>
#include <Trie.hpp>


class  vReducer {
	std::string mOutDir;
public:
	// constructor takes in the out path
	//Reducer(std::string);
	// reduces the trie into a word and key (quantity) and calls export
	virtual bool reduce(Trie*)=0;
};