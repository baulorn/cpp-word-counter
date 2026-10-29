
#include <iostream>
#include <string>

int main(){
    std::string text;
    std::cout << "Enter a line: ";
    std::getline(std::cin, text);

    int wordCount = 0;
    bool inWord = false;
    int i = 0;

    while (i < text.length()){
        if (text[i] != ' ' && inWord == false){
            wordCount++;
            inWord = true;
        }else if (text[i] == ' '){
            inWord = false;
        }

        i++;
    }

    std::cout << wordCount << "\n";
}
