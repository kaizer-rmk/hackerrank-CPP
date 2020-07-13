#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    cin >> n >> q;

    int** a = new int*[n]();
    for(int i=0;i<n;i++){
        int k;
        cin >> k;
        int* arr = new int[k]();
        for(int j=0;j<k;j++){
            cin >> arr[j];
        }
        a[i] = arr;
    }

    for(int q_count=0;q_count<q;q_count++){
        int i,j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }
    return 0;
}
