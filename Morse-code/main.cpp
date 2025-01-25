#include <iostream>
#include <string>
using namespace std;

// Function prototypes
string getUserString();
string getMorseCode(const string &input);
void printMorse(const string &morseCode);

int main() {
    
    string userInput = getUserString();

 
    string morseCode = getMorseCode(userInput);

  
    printMorse(morseCode);

    return 0;
}


string getUserString() {
    string input;
    cout << "Enter string to be converted: ";
    getline(cin, input);
    return input;
}


string getMorseCode(const string &input) {
    string letter[] = {" " , ",", ".", "?", "0","1", "2", "3","4","5", "6", "7","8",
                    "9","A" ,"B","C","D","E","F", "G","H","I","J","K","L","M","N"
                    ,"O","P","Q","R","S","T","U","V","W","X","Y","Z"};

    string morse[] = {"space","--..--",".-.-.-","..--..","-----",".----","..---",
                        "...--","....-",".....","-....","--...","---..","----.",
                        ".-","-...","-.-.","-..",".","..-.","--.","....","..",
                        ".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...",
                        "-","..-","...-",".--","-..-","-.--","--.."};

    string output;
    for (size_t i = 0; i < input.length(); i++) {
        char let = toupper(input[i]);

        for (size_t y = 0; y < sizeof(letter) / sizeof(letter[0]); y++) {
            if (let == letter[y][0]) {
                output += morse[y];
                break;
            }
        }
    }

    return output;
}

void printMorse(const string &morseCode) {
    cout << "The Morse code equivalent is: " << morseCode << endl;
}
