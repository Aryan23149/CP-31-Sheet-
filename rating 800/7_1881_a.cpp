#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int operations=0;
        bool found =false;
        while(x.size()<=128){
            if(x.find(s)!=string::npos){
                cout<<operations<<endl;
                found = true;
                break;
            }
            x+=x;
            operations++;
        }
        if(!found){
            cout << -1 << endl;
        }
    }
    return 0;
}