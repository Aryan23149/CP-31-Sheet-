#include <iostream>
#include <vector>
#include <set>
using namespace std;
void allMovesToPiece(pair<int,int> move ,pair<int,int> piece,set<pair<int,int>> & store){
    int x=move.first;
    int y=move.second;
    int a=piece.first;
    int b=piece.second;
    store.insert({a+x,b+y});
    store.insert({a-x,b+y});
    store.insert({a+x,b-y});
    store.insert({a-x,b-y});
    store.insert({a+y,b+x});
    store.insert({a+y,b-x});
    store.insert({a-y,b+x});
    store.insert({a-y,b-x});
}
int solve(pair<int,int> move ,pair<int,int> king ,pair<int,int> queen){
    set<pair<int,int>> king_moves,queen_moves;
    allMovesToPiece(move,king,king_moves);
    allMovesToPiece(move,queen,queen_moves);
    int count=0;
    for(pair<int,int> k: king_moves){
        int x1=k.first;
        int y1=k.second;
        for(pair<int,int> q: queen_moves){
            int x2=q.first;
            int y2=q.second;
            if(x1==x2 && y1==y2){
                count++;
                break;
            }
        }
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    vector<int> answer;
    for(int i=0;i<t;i++){
        pair<int,int> move;
        cin>>move.first>>move.second;
        pair<int,int> king;
        cin>>king.first>>king.second;
        pair<int,int> queen;
        cin>>queen.first>>queen.second;
        answer.push_back(solve(move,king,queen));
    }
    for(int j: answer){
        cout<<j<<endl;
    }
    return 0;
}