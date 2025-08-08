#include<iostream>
using namespace std;
#include<vector>
int func(vector<int>& arr,int n ,int x){
    int min_gas=arr[0];
    for(int i=0;i<n-1;i++){
        min_gas=max(min_gas,arr[i+1]-arr[i]);
    }
    min_gas=max(min_gas,(x-arr[n-1])*2);
    return min_gas;
}
int main(){
    int t;
    cin>>t;
    vector<int> answer(t);
    for(int i=0;i<t;i++){
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int j=0;j<n;j++){
            cin>>arr[j];
        }
        answer[i]=func(arr,n,x);
    }

    for(int &result: answer){
        cout<<result<<endl;
    }
}
//time complexity:O(t*n+n) as there are t test cases each iterating once in array of size of n and at last printing them

// space complexity:O(t+n) as there are t test cases for which we are storing our answers and each test case uses a common vector of size n

// auxilary space used:O(t) as we have just used some variables that requires constant space and an extra array of size t which stores our answer