#pragma once

#include <map>
#include <string>

template<typename MappedT>
struct Ttreenode {
    using container = std::map<std::string, Ttreenode<MappedT>>;
    using iterator = typename container::iterator; 

    MappedT data;
    bool is_root;
    container children;
    iterator it;
};