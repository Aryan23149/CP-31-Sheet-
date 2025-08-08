#include<iostream>
#include <string>
#include <vector>
using namespace std;
bool if_sorted(const vector<int>& arr){
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1]){
            return false;
        }
    }
    return true;
}
string func(const vector<int>&arr,int n,int k){
    if(k==1){
        bool x=if_sorted(arr);
        if(x){
            return "YES";
        }
        else{
            return "NO";
        }
    }
    return "YES";
}
int main(){
    int t;
    cin>>t;
    vector<string> answer(t);
    for(int i=0;i<t;i++){
        int n,k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        answer[i]=func(arr,n,k);
    }
    for(const string &result: answer){
        cout<<result<<endl;
    }
    return 0;
}
// if k>1 say 2 we can use bubble sort and sort array if it equates 1 then can be sort if already sorted.

// TIME COMPLEXITY:O(t*n+n) as we iterate once in array for each test case and at last printed answer array

// SPACE COMPLEXITY: O(t+n) for space used in answer array and common arr by all test cases

// AUXILARY SPACE:O(1)as we used just some variable and an array for storing our answers
