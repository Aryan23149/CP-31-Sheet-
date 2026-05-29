#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int solve(vector<int> & arr){
    int n=arr.size();
    int case1=INT_MIN;
    for(int i=0;i<n-1;i++){
        case1=max(case1,arr[n-1]-arr[i]);
    }
    int case2=INT_MIN;
    for(int i=1;i<n;i++){
        case2=max(case2,arr[i]-arr[0]);
    }
    int case3=INT_MIN;
    for(int i=1;i<n;i++ ){
        case3=max(case3,arr[i-1]-arr[i]);
    }
    case3=max(arr[n-1]-arr[0],case3);
    return max(case3,max(case1,case2));
}
int main(){
    int t;
    cin>>t;
    vector<int> answers;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        answers.push_back(solve(arr));
    }
    for(int j: answers){
        cout<<j<<endl;
    }
    return 0;
}