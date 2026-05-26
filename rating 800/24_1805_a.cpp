#include <iostream>
#include <vector>
using namespace std;
int solve(vector<int> &arr){
    
    int n= arr.size();
    int xor_of_elements=0;

    for(int i=0;i<n;i++){
        xor_of_elements^=arr[i];
    }

    if(n%2==0){
        if(xor_of_elements==0){
            return 0;
        }
        return -1;
    }
    else{
        return xor_of_elements;
    }
    return xor_of_elements;
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