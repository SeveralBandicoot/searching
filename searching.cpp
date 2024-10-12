/*
Searching 

10/2/2024

@ AJ Enrique Arguello 

Objectives:  How can Recursion be used to search for a letter within a string?

*/

#include <iostream>
#include <string>

using namespace std;

bool letterSearch(string str, char target, int index) {
    if (index >= str.length())  // if the index does not find the target letter, return not found
        return false;
    
    if (str[index] == target) // if the index finds the targat letter, return found
        return true;

    return letterSearch(str, target, index + 1); // move to next character in string 
}

int main() {
    string inputString;
    char letter;

    cout << "Enter a string: ";
    getline(cin, inputString);

    cout << "Enter the letter to search for: ";
    cin >> letter;

    bool found = letterSearch(inputString, letter, 0); // call recursive search starting from index of 0

    (found = true) ? void(cout << "Letter '" << letter << "' was found in the string.") :
      void(cout << "Letter '" << letter << "' was not found in the string.");

    return 0;
}
