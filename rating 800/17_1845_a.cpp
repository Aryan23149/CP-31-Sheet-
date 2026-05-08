#include <iostream>
#include <vector>
#include <climits>
using namespace std;
void solve(vector<int> & data){

    int n = data[0];
    int k = data[1];
    int x = data[2];
    if(x!=1){
        cout<<"Yes\n"<<n<<endl;
        while(n--){
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }
    if(x==1){
        if(k==1){
            cout<<"No"<<endl;
            return;
        }
        else if(k==2){
            if(n%2!=0){
                cout<<"No"<<endl;
                return;
            }
            int num_2=n/2;
            cout<<"Yes\n"<<num_2<<endl;
            while(num_2--){
                cout<<2<<" ";
            }
            cout<<endl;
            return;
        }
        else if(k>=3){
            if(n%2!=0){
                int num_2=(n-3)/2;
                cout<<"Yes"<<endl;
                cout<<num_2+1<<endl;
                while(num_2--){
                    cout<<2<<" ";
                }
                cout<<3<<endl;
                return;
            }
            else{
                int num_2=n/2;
                cout<<"Yes\n"<<num_2<<endl;
                while(num_2--){
                    cout<<2<<" ";
                }
                cout<<endl;
                return;
            }

            return;
        }
    }
}
int main(){
    int t;
    cin>>t;
    vector<vector<int>> answer;
    for(int i=0;i<t;i++){
        int n,k,x;
        cin>>n>>k>>x;
        vector<int> data;
        data.insert(data.end(),{n,k,x});
        answer.push_back(data);
    }
    for(int i=0;i<t;i++){
        solve(answer[i]);
    }
    return 0;
}