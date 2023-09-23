#pragma once
#include <map>
#include <string>

struct NonTtreenode {
	int data;
	bool is_root;
	std::map<std::string, NonTtreenode> children;
};