#include <iostream>
#include <vector>
#include <climits>
using namespace std;
int solve(vector<int> &data){
    int min_element=INT_MAX;
    for(int i:data){
        if(abs(i)<min_element){
            min_element=abs(i);
        }
    }
    return min_element;
}
int main(){
    int n;
    cin>>n;
    vector<int> data(n,0);
    for(int i=0;i<n;i++){
        int number;
        cin>>number;
        data[i]=number;
    }
    cout<<solve(data)<<endl;
    return 0;
}