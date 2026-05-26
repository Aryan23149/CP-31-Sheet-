#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> solve(vector<int>& arr){
    int n = arr.size();
    int sum=n+1;
    for(int i=0;i<n;i++){
        arr[i]=sum - arr[i];
    }
    return arr;
}
int main(){
    int t;
    cin>>t;
    vector<vector<int>> answers;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> given_arr;
        for(int j=0;j<n;j++){
            int number;
            cin>>number;
            given_arr.push_back(number);
        }
        answers.push_back(solve(given_arr));
    }
    for(vector<int> ans: answers){
        for(int nums: ans){
            cout<<nums<<" ";
        }
        cout<<endl;
    }
    return 0;
}