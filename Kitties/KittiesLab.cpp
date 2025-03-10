#include <iostream>
#include "Catify.h"
using namespace std;

int main()
{
    string sentence;

    cout << "Welcome to the Sentence Catifying Program!\n";

    cout << "\nEnter your sentence:\n";

    getline(cin, sentence);

    cout << "\nYour sentence is:\n";

    cout << sentence;

    cout << "\nYour Catified sentence is:\n";

    cout << Catify(sentence) << endl;

    cout << "Thank meow for using the program";

}

