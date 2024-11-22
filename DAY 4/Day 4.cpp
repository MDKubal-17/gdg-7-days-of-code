#include <iostream>
using namespace std;

int main() {
    
    int n, x, y, z, passed_per;
    
    cout << "1. Enter no. of schools in university\n2. Enter Number of students in each school\n3. Number of students who passed the exams.\n";
    cin >> x >> y >> z;
    
    if(y!=0){
        n = x * y;
        
        passed_per = (z * 100) / n;
        
        if (passed_per > 50) { 
            cout << "YES";
        } 
        
        else{
            cout << "NO";
        }
    }    
    else{
        cout << "NO";
    }
    
    return 0;
}
