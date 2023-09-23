#include <iostream>
#include <map>
#include <string>
#include "template_tree_node.h"
#include "non_template_tree_node.h"


int main() {
	NonTtreenode NonT;
	Ttreenode<int> T;

	T.children.emplace("babe", Ttreenode<int>());
	Ttreenode<int>::iterator it = T.children.begin();
	std::cout << it->first;
}