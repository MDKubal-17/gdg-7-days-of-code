#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;   

    cout << "Enter the word to repeat it twice: ";
    getline(cin, word);

    for (int i = 0; i < 2; i++) {
        cout << word <<" ";
    }
    return 0;
}
