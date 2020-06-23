#include <iostream>

using namespace std;

int main()
{
    string name;
    cout << "Please enter your name: ";
    // cin >> name; <-- only reads until it gets to whitespace
    getline(cin, name);

    cout << "Welcome, " << name << endl;

    return 0;
}