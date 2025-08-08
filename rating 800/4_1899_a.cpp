#include <iostream>
#include <string>
using namespace std;
string func(int n){
    if(n%3==0){
        return "Second";
    }
    return "First";
}
int main(){
    int t;
    cin>>t;
    int n;
    string answer[t];
    for(int i=0;i<t;i++){
        cin>>n;
        answer[i]=func(n);
    }
    for(string &result: answer){
        cout<<result<<endl;
    }
}