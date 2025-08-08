#include<iostream>
#include<string>
using namespace std;
int func(string x,int n){
    int max_dot_count=0,count=0,hash_count=0;
    x[0]=='#'?hash_count=1:count=max_dot_count=1;
    for(int i=1;i<n;i++){
        if(x[i]=='#'){
            hash_count++;
            count=0;
        }
        else{
            count++;
            if(x[i-1]=='.'){
                max_dot_count=max(max_dot_count,count);
            }
        }
    }
    if(max_dot_count>=3){
        return 2;
    }
    else{
        return n-hash_count;
    }
}
int main(){
    int t;
    cin>>t;
    int answer[t];
    for(int i=0;i<t;i++){
        int no_of_cells;
        cin>>no_of_cells;
        string cell;
        cin>>cell;
        answer[i]=func(cell,no_of_cells);
    }
    for(int result: answer){
        cout<<result<<endl;
    }
}
// approach: look carefully if u have got max_consec dots >=3 then using only two op1 we can fill all other dots else we gotta use string len- no of hashes as our answer.

// time complexity:O(t*n+t) as for t test cases we are traversing array of size n for each and at last printing array.

// space complexity:O(t) for storing result of t test cases = auxilary space