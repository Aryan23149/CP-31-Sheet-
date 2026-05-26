#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> arr){
    int i=0;
    int n=arr.size();
    int max_count=0;
    while(i<n){
        while(arr[i]!=0) i++;
        int count=0;
        while(i<n && arr[i]==0){
            count++;
            i++;
        }
        max_count=max(count,max_count);
    }
    return max_count;
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