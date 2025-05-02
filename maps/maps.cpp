#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    map<string, int> wordCount;
    string word = "";

    for (int i = 0; i < text.length(); i++) {
        char c = text[i];

        if (c != ' ' && c != '\t' && c != '\n') {
            word += c;
        }
        else {
            if (word != "") {
                wordCount[word]++;
                word = "";
            }
        }
    }
    if (word != "") {
        wordCount[word]++;
    }
    cout << "Frequencies:\n";
    for (auto pair : wordCount) {
        cout << "\"" << pair.first << "\" : " << pair.second << endl;
    }

    return 0;
}
