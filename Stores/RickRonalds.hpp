#ifndef RICKRONALDS_HPP
#define RICKRONALDS_HPP
#include <iostream>
#include <vector>

class rickOrder {
    public:
    rickOrder();
    std::string npcOrdering();
    std::string npcLines();

    private:
    std::vector<std::string> burger_;
    std::vector<std::string> nuggets_;
    std::vector<std::string> fries_;
    std::vector<std::string> drink_;
    bool iceCream_;
    std::vector<std::string> order_;

};

#endif