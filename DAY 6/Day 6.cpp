#include <iostream>
#include <string.h>

using namespace std;

int main(){

    int n, sum=0;
    string name;
    
    cout << "Enter string: ";
    getline (cin, name);

    for(char c : name){
        c = tolower(c);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            sum++;
        }
    }
    cout << "No. of vowels are : "<< sum;
    return 0;
}
