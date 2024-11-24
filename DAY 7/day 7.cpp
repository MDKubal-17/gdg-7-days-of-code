#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, m, i, j;
    cout << "Enter no. of rows: ";
    cin >> n;
    cout << "Enter no. of columns: ";
    cin >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    
    cout << "Enter the elements of the matrix:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    
    // Auxiliary arrays to track rows and columns to be zeroed
    vector<bool> zeroRows(n, false);
    vector<bool> zeroCols(m, false);
    
    //Identify rows and columns to be zeroed
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                zeroRows[i] = true;
                zeroCols[j] = true;
            }
        }
    }
    
    //Set rows to zero
    for (i = 0; i < n; i++) {
        if (zeroRows[i]) {
            for (j = 0; j < m; j++) {
                arr[i][j] = 0;
            }
        }
    }
    
    //Set columns to zero
    for (j = 0; j < m; j++) {
        if (zeroCols[j]) {
            for (i = 0; i < n; i++) {
                arr[i][j] = 0;
            }
        }
    }
    
    // Output 
    cout << "The output matrix with given pattern is:\n";
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
