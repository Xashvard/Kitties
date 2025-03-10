#include <iostream>
#include <string>
#include <cassert> 
#include "Catify.h"

int main() {
    std::string sentence1 = "My cat is cute.";
    std::string expected1 = "My /ᐠ｡ꞈ｡ᐟ\\ is cute.";

    std::string sentence2 = "My Cat is friends with a Kitten.";
    std::string expected2 = "My /ᐠ｡ꞈ｡ᐟ\\ is friends with a (•ㅅ•).";

    std::string sentence3 = "My cat and your cat are both happy.";
    std::string expected3 = "My /ᐠ｡ꞈ｡ᐟ\\ and your /ᐠ｡ꞈ｡ᐟ\\ are both happy.";

    std::string sentence4 = "I have a dog.";
    std::string expected4 = "I have a dog.";

    std::string sentence5 = "My cat is angry about the yarn.";
    std::string expected5 = "My /ᐠ｡ꞈ｡ᐟ\\ is (=ಠᆽಠ=) about the o~.";


    assert(Catify(sentence1) == expected1);
    assert(Catify(sentence2) == expected2);
    assert(Catify(sentence3) == expected3);
    assert(Catify(sentence4) == expected4);
    assert(Catify(sentence5) == expected5);


    std::cout << "All tests passed!" << std::endl;
    return 0;
}
