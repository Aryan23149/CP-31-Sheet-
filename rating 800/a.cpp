#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print_vector(vector<int> & arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap(vector<int>& arr,int index,int index2){
    int c=arr[index];
    arr[index]=arr[index2];
    arr[index2]=c;
    return;
}
void solve(vector<int> arr){

    
    int element=arr[0];
    int n=arr.size();
    sort(arr.begin(),arr.end());
    if(arr[0]==arr[n-1]){
        cout<<"NO"<<endl;
        return;
    }
    swap(arr,0,n-1);
    swap(arr,1,n-1);
    cout<<"YES"<<endl;
    print_vector(arr);
}
int main(){
    int t;
    cin>>t;
    vector<int> answer;
    vector<vector<int>> inputs;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        inputs.push_back(arr);
    }
    for(int j=0;j<t;j++){
        vector<int> input=inputs[j];
        solve(input);
    }
    return 0;
}