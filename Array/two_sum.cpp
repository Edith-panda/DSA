#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool twosum(vector<int> arr, int n , int target){
    vector<int> v;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == target)
            cout << (arr[i]) << " " << (arr[j]) << endl;
        }
    }
    return 1;
    }
int main(){
     vector<int> v = {1, 2, 3, 4, 5};
     int target = 6;
     int n = 5;
     cout << twosum(v, n,target) << endl;
}