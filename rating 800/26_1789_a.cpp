#include <iostream>
#include <vector>
using namespace std;
int gcd(int n1,int n2){
    if(n1==0){
        return n2;
    }
    else if(n2==0){
        return n1;
    }
    if(n1<n2){
        return gcd(n1,n2%n1);
    }
    return gcd(n1%n2,n2);
}
string solve(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        int element1=arr[i];
        for(int j=i+1;j<n;j++){
            int element2=arr[j];
            if(gcd(element1,element2)<=2){
                return "YES";
            }
        }
    }
    return "NO";
}
int main(){
    int t;
    cin>>t;
    vector<string > answers;
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
    for(string ans: answers){
        cout<<ans<<endl;
    }
    return 0;
}