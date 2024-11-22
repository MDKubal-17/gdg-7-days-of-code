#include <iostream>
using namespace std;

int main(){

    int n, i, j, k;
    cout << "Enter a number of rows to print pattern: ";
    cin >> n;

    for(i=0; i<n; i++){
        for(j=0; j<n-i; j++){
            cout << " "; 
            }
            for(k=0; k<=i; k++){
                cout<<"* ";
            }
        cout<<"\n";   
    }
    
    return 0;
}
