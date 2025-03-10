#include "catify.h"
#include <string>
#include <map>
#include <algorithm>

using namespace std;

string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

map<string,string> replacements = {
    {"cat", "/ᐠ｡ꞈ｡ᐟ\\"},
    {"kitty", "(•ㅅ•)"},
    {"kitten", "(•ㅅ•)"},
    {"yarn", "o~"},
    {"angry", "(=ಠᆽಠ=)"},
    {"dance", "~( ˘▾˘ ~)"}
};

string Catify(string sentence) {
   string lowersentence = toLower(sentence);
    for(const auto &pair : replacements){
        size_t pos = 0;
        while ((pos = lowersentence.find(pair.first, pos)) != string::npos) {
            sentence.replace(pos, pair.first.length(), pair.second);
            lowersentence.replace(pos, pair.first.length(), pair.second);
            pos += pair.second.length();
        }
    }
    return sentence;
	
}