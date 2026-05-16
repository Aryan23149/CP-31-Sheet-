#include <iostream>
#include <vector>
using namespace std;
int gcd(int a,int b){
    if(a==0){
        return b;
    }
    else if(b==0){
        return a;
    }
    if(a>b){
        return gcd(a%b,b);
    }
    return gcd(a,b%a);
}
int solve(vector<int> & arr){
    int n=arr.size();
    for(int i =0;i<n;i++){
        arr[i]=abs(arr[i]-(i+1));
    }
    int first=arr[0];
    for(int i: arr){
        first=gcd(first,i);
    }
    return first;
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