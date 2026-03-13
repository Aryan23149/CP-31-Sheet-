#include <iostream>
#include <vector>
using namespace std;
int  traverseLR(vector<vector<char>> & matrix,int left_index,int right_index,int point){
    int sum=0;
    for(int i=left_index;i<=right_index;i++){
        if(matrix[point-1][i]=='X'){
            sum+=point;
        }
    }
    return sum;
}

int traverseUD(vector<vector<char>> & matrix,int up_index,int down_index,int point){
    int sum=0;
    for(int j=up_index;j<=down_index;j++){
        if(matrix[j][10-point]=='X'){
            sum+=point;
        }
    }
    return sum;
}

int traverseRL(vector<vector<char>> & matrix,int right_index, int left_index,int point ){
    int sum=0;
    for(int i=right_index;i>=left_index;i--){
        if(matrix[10-point][i]=='X'){
            sum+=point;
        }
    }
    return sum;

}

int traverseDU(vector<vector<char>> & matrix,int down_index,int up_index,int point){
    int sum=0;
    for(int j=down_index;j>=up_index;j--){
        if(matrix[j][point-1]=='X'){
            sum+=point;
        }
    }
    return sum;

}
int solve(vector<vector<char>> & matrix){
    int sum=0;
    int left_index=0;
    int right_index=9;
    int up_index=0;
    int down_index=9;
    for(int i=1;i<=5;i++){
        int points=i;
        sum+= traverseLR(matrix,left_index,right_index,points);
        sum+=traverseUD(matrix,up_index+1,down_index,points);
        sum+=traverseRL(matrix,right_index-1,left_index,points);
        sum+=traverseDU(matrix,down_index-1,up_index+1,points);
        left_index++;
        right_index--;
        up_index++;
        down_index--;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    vector<int> answers;
    for(int i=0;i<t;i++){
        vector<vector<char>> matrix(10,vector<char> (10,'.'));
        for(int j=0;j<10;j++){
            for(int k=0;k<10;k++){
                char entry;
                cin>>entry;
                matrix[j][k]=entry;
            }
        }
        answers.push_back(solve(matrix));
    }
    for(int i=0;i<t;i++){
        cout<<answers[i]<<endl;
    }
    return 0;
}