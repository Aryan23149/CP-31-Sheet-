#include <iostream>
#include <vector>
using namespace std;
void solve(vector<int> & arr){
    int n= arr.size();
    if(n%2==0){
        cout<<2<<endl;
        cout<<1<<" "<<n<<endl;
        cout<<1<<" "<<n<<endl;
    }
    else{
        cout<<4<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<1<<" "<<n-1<<endl;
        cout<<n-1<<" "<<n<<endl;
        cout<<n-1<<" "<<n<<endl;
    }
    return;
}
int main(){
    int t;
    cin>>t;
    vector<vector<int>> all_arrays;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int> arr;
        for(int j=0;j<n;j++){
            int element;
            cin>>element;
            arr.push_back(element);
        }
        all_arrays.push_back(arr);
    }
    for(vector<int> array: all_arrays){
        solve(array);
    }
    return 0;
}