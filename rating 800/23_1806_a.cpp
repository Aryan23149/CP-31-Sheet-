#include <iostream>
#include <vector>
using namespace std;
int solve(int a,int b,int c,int d){
    int x=a;
    int y=b;
    if(d<b){
        return -1;
    }
    int diagonal_steps=d-b;
    x=a+diagonal_steps;
    y=b+diagonal_steps;

    if(x<c){
        return -1;
    }
    int left_steps=x - c;
    x=x-left_steps;
    y=y;
    return diagonal_steps+left_steps; 
}
int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0;i<t;i++){

        int a,b;
        cin>>a>>b;

        int c,d;
        cin>>c>>d;
        answer.push_back(solve(a,b,c,d));
    }
    for(int j: answer){
        cout<<j<<endl;
    }
    return 0;
}