#include<bits/stdc++.h>
using namespace std;

int arrTop(vector<int> arr) {
    
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    stack<int> st;
    
    for(int i=0; i<arr.size(); i++) {
        st.push(arr[i]);
    }
    cout<<st.top();
    return 0;
}