#include <iostream>
using namespace std;

int main(){

    int a, b, i;
    cout << "Enter 2 numbers such that 1st is smaller than 2nd:\n";
    cout << "Enter 1st no.: ";
    cin >> a;   
    cout <<"Enter 2nd no.: ";
    cin >> b;

    if( a<b ){
        for( i=a; i<=b; i++ ){
            if( i%5==0 && i%7==0 ){
                cout << "FooBar"<<endl;
            }
            else if( i%5==0 ){
                cout << "Foo" << endl;
            }
            else if( i%7==0 ){
                cout << "Bar" << endl;
            }
            else{
                cout << "Baz" <<endl;
            }
        }
    }
    else
        cout << "1st number should be less than 2nd number.\n";
    
    return 0;
}
