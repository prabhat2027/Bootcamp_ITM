#include<bits/stdc++.h>
using namespace std;

// vector<int> conArr(int arr[]) {
//     vector<int> temp;
//     int n = arr.size();

//     for(int i=0; i<n; i++) temp.push_back(arr[i]);
//     return temp;
// }

// void print(vector<int> arr) {
//     for(int i=0; i<arr.size(); i++) cout<<arr[i];
// }

void printArr(int arr[], int n) {
    for(int i=0; i<n; i++) cout << arr[i] <<" ";
}


int main() {
        int n; cin>>n;
    int arr[n];
    for(int i=0; i<n; i++) cin>>arr[i];

    /****** reverese an array *******/ 

    // for(int i=0; i<n/2; i++) {
    //     swap(arr[i], arr[n-i-1]);
    // }
    // printArr(arr, n);
    
    cout<<"\n";
    
    /****** pre Fix Sum *******/ 
    
    int preFixSum[n];
    preFixSum[0] = arr[0];
    // cout<<preFixSum[0] <<" ";
    
    for(int i=1; i<n; i++) {
        preFixSum[i] = preFixSum[i-1] + arr[i];
        // cout << preFixSum[i] << " ";
    }
    cout<<"Prefix Sum: ";
    printArr(preFixSum, n);
    
    
    cout<<endl;
    
    /****** pre Fix Sum - even *******/ 
    
    int evenPreFixSum[n];
    evenPreFixSum[0] = arr[0];
    
    for(int i=1; i<n; i++) {
      if(i%2 != 0) evenPreFixSum[i] = evenPreFixSum[i-1];
      else evenPreFixSum[i] = evenPreFixSum[i-1] + arr[i];
      
    }
    cout<<"Even prifixSum: ";
    printArr(evenPreFixSum, n);
    
    /****** pre Fix Sum - odd *******/ 

    int oddPreFixSum[n];
    oddPreFixSum[0] = 0;
    
    for(int i=1; i<n; i++) {
      if(i%2 == 0) oddPreFixSum[i] = oddPreFixSum[i-1];
      else oddPreFixSum[i] = oddPreFixSum[i-1] + arr[i];
      
    }
    cout<<"\nodd prifixSum: ";
    printArr(oddPreFixSum, n);

    return 0;
}