#include "RickRonalds.hpp"
#include "../Register/Register.hpp"
#include <iostream>
#include <vector>
#include <unordered_map>
#include <cstdlib>

    rickOrder::rickOrder() {
        burgers_.push_back("RickCheese Burger");
        burgers_.push_back("RickPlain Burger");
        burgers_.push_back("Rick-Double");
        burgers_.push_back("Swordfish burger");

        fries_.push_back("Small Fries");
        fries_.push_back("Medium Fries");
        fries_.push_back("Large Fries");

        drinks_.push_back("Soda");
        drinks_.push_back("Mango-banana Smoothie");
        drinks_.push_back("Strawberry-banana Smoothie");
        
        extraAndDessert_.push_back("Rick-OreoFlurry");
        extraAndDessert_.push_back("Rick-CookieFlurry");
        extraAndDessert_.push_back("4 pc RickNuggets");
        extraAndDessert_.push_back("10 pc RickNuggets");
        extraAndDessert_.push_back("20pc RickNuggets");
        extraAndDessert_.push_back("Small Fries");
        extraAndDessert_.push_back("Medium Fries");
        extraAndDessert_.push_back("Large Fries");
        
    }

    void rickOrder::generateNPCOrder() {
        int randomIndex;
        std::string randomBurgerIndex;
        std::string randomFriesIndex;
        std::string randomDrinksIndex;
        std::string randomExtrasIndex;

        randomIndex = rand() % burgers_.size(); // pick a random number from the size of the burger vector
        randomBurgerIndex = burgers_[randomIndex]; // store the random burger at the index of random
        npcOrder_.push_back(randomBurgerIndex); // put the random burger into the order

        randomIndex = rand() % fries_.size();
        randomFriesIndex = fries_[randomIndex];
        npcOrder_.push_back(randomFriesIndex);

        randomIndex = rand() % drinks_.size();
        randomDrinksIndex = drinks_[randomIndex];
        npcOrder_.push_back(randomDrinksIndex);

        randomIndex = rand() % extraAndDessert_.size();
        randomExtrasIndex = extraAndDessert_[randomIndex];
        npcOrder_.push_back(randomExtrasIndex);

    }

    void rickOrder::printOrder() {
        for (int item = 0; item < npcOrder_.size(); item++) {
            std::cout << "YOU: You ordered: " + npcOrder_[item];
        }
    }

    rickMenu::rickMenu() {
        //structured as a whole order
        items["RickCheese Burger"] = 2;
        items["RickPlain Burger"] = 2;
        items["Rick-Double"] = 5.67;
        items["Swordfish Burger"] = 2.5;
        items["4 pc RickNuggets"] = 3;
        items["10 pc RickNuggets"] = 4.5;
        items["20pc RickNuggets"] = 6;
        items["Small Fries"] = 3;
        items["Medium Fries"] = 5.67;
        items["Large Fries"] = 7;
        items["Soda"] = 2;
        items["Mango-banana Smoothie"] = 4.67;
        items["Strawberry-banana Smoothie"] = 4.67;
        items["Rick-OreoFlurry"] = 4.50;
        items["Rick-CookieFlurry"] = 4.67;
        items["The Rick-Double-Double Trouble"] = 9.67; // includes two Rick-Double burgers, one medium fries, 4pc nugget and soda.
        items["Rick's Hungry Combo"] = 14.67; // includes one rick-double burger, two large fries, one 20pc fries, one soda, and one rick flurry
        items["Rick Discount Combo"] = 5; // cheaper combo includes one RickCheese burger, one small fry, and a soda
        items["Rick's No Meat Combo"] = 6.77; // swordfish burger, medium fries, soda
}


    void rickPath() {
        registerSys POS;
        char choice = 'n';
        bool shift = true;

        while(shift) {
            rickOrder order;
            order.generateNPCOrder();
            



        std::cout << "CLOCK OUT?\n";
        std::cout << "Enter 'y' or 'n': \n ";
        std::cin >> choice;
        choice = std::tolower(choice);
        if (choice == 'y') {
            std::cout << "Bye!\n";
            shift = false;

        } else {
            std::cout << "Keep working.\n";
        } 
    }
    /*std::cout << "This is our menu: ";

    for (auto i : rickMenu) {
        std::cout <<i.first << " $" << i.second;
    }
*/
}
