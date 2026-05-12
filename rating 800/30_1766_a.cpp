#include <iostream>
#include <vector>
using namespace std;


int num_of_nonzero_digits(int number){
    int nonzero_count=0;
    while(number!=0){
        int last_digit=number%10;
        number=number/10;
        if(last_digit!=0){
            nonzero_count++;
        }
    }
    return nonzero_count;
}
int solveBrute(int n){
    int count=0;
    for(int i=1;i<=n;i++){
        if(num_of_nonzero_digits(i)==1){
            count++;
        }
    }
    return count;
}


int solveOptimized(int n){
    int count=0;
    int number=n;
    int lower_limit=1;
    int upper_limit=9;
    while(lower_limit<=n){
        if(number>=lower_limit && n<= upper_limit){
            count+=(number/(lower_limit));
            return count;
        }
        else{
            count+=9;
        }
        lower_limit=upper_limit+1;
        upper_limit=((lower_limit) * 10)-1;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        answer.push_back(solveOptimized(n));
        // answer.push_back(solveBrute(n));// this causes time limit exceed error
    }
    for(int j: answer){
        cout<<j<<endl;
    }
    return 0;
}