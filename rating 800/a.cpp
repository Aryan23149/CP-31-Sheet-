#include <iostream>
#include <vector>
using namespace std;
string solve(vector<int> & data){
    //method 2: optimal
    // int sum=0;
    // for(int i: data){
    //     sum+=i;
    // }
    // if(sum%2==0){
    //     return "YES";
    // }
    // else{
    //     return "NO";
    // }

    //method 1: my solution
    // int even_count=0;
    // int odd_count=0;
    // for(int i: data){
    //     if(i%2==0){
    //         even_count++;
    //     }
    //     else{
    //         odd_count++;
    //     }
    // }
    // if(even_count%2==0 && odd_count%2==0){
    //     return "Yes";
    // }
    // else if(even_count%2!=0 && odd_count%2!=0){
    //     return "No";
    // }
    // else if(even_count%2!=0 && odd_count%2==0){
    //     return "Yes";
    // }
    // else{
    //     return "No";
    // }
}
int main(){
    int t;
    cin>>t;
    vector<string> answer;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> data;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            data.push_back(element);
        }
        answer.push_back(solve(data));
    }
    for(int i=0;i<t;i++){
        cout<<answer[i]<<endl;
    }
    return 0;
}