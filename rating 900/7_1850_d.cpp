#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int solve( vector<int> & arr,int k){
    sort(arr.begin(),arr.end());
    int i=0;
    int n=arr.size();
    int count=1;
    int max_count=1;
    while(i<n-1){
        if(arr[i+1]-arr[i]<=k){
            count++;
        }
        else{
            count=1;
        }
        max_count=max(max_count,count);
        i++;
    }
    return n-max_count;
}
int main(){
    int t;
    cin>>t;
    vector<int> answers;
    for(int i=0;i<t;i++){
        int k,n;
        cin>>n>>k;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        answers.push_back(solve(arr,k));
    }
    for(int element: answers){
        cout<<element<<endl;
    }
    return 0;
}