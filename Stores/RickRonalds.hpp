#ifndef RICKRONALDS_HPP
#define RICKRONALDS_HPP
#include <iostream>
#include <vector>

class rickOrder {
    public:

    std::string npcOrdering();
    std::string npcLines();

    private:
    std::vector<std::string> order_;

};

#endif