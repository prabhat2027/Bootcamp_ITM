#include<bits/stdc++.h>
using namespace std;

// vector<int> conArr(int arr[]) {
//     vector<int> temp;
//     for(int i=0; i<arr.size(); i++) temp.push_back(arr[i]);
//     return temp;
// }

// void print(vector<int> arr) {
//     for(int i=0; i<arr.size(); i++) cout<<arr[i];
// }

// void sortArr(vector<int> arr, int n) {
//     for (int i = 0; i < n - 1; i++) {
//         bool swapped = false;


int main() {
    int n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    // vector<int> ans = conArr(arr);
    // print(ans);
    
    // ans = sortArr(ans, n);

    int largest = arr[0], sLargest=-1;
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        } 
        else if(arr[i] < largest && arr[i] > sLargest) 
            sLargest = arr[i];
    }
        
    cout<<sLargest<<endl;
    cout<<largest;

    return 0;
}