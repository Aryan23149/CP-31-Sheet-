#include <iostream>
using namespace std;
string solve(int array[],int n){
    int a = array[0];
    int b= array[1];
    int c= array[2];
    if(c%2==0){
        //anna will play
        if(a>b){
            return "First";
        }
        else if(a>b){
            return "Second";
        }
        else{
            return "Second";
        }
    }
    else{
        //katte will play
        if(a>b){
            return "First";
        }
        else if(b>a){
            return "Second";
        }
        else{
            return "First";
        }

    }
}
int main(){
    int t;
    cin>>t;
    string* answers=new string[t];
    for(int i=0;i<t;i++){
        int array[3];
        cin>>array[0]>>array[1]>>array[2];
        answers[i]=solve(array,3);
    }
    for(int i=0;i<t;i++){
        cout<<answers[i]<<endl;
    }
    return 0;
}