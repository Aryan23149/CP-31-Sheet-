#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int>& arr,int n,int a,int b){

}
int main(){
    int t;
    cin>>t;
    vector<int> answers;
    for(int i=0;i<t;i++){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        answers.push_back(solve(arr,n,a,b));
    }
    for(int j: answers){
        cout<<j<<endl;
    }
    return 0;
}