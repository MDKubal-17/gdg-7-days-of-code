#include <iostream>
using namespace std;

int main(){

    int n, i, sum=0;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    for(i=1; i<=n; i++){
        cout << "Enter " << i << " element: ";
        cin >> arr[i];
    }

    for(i=1; i<=n; i++){
        if(arr[i]>0){
            sum = sum + arr[i];
        }    
    }

    cout << "Sum of positive no. is: "<< sum;

    return 0;
}
