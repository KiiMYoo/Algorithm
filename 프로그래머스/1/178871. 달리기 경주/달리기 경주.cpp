#include <string>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> players, vector<string> callings) {
    unordered_map<string, int> Rank;
    
    for(int i = 0; i < players.size(); i++)
    {
        Rank[players[i]] = i;
    }
    
    for(int i = 0; i < callings.size(); i++)
    {
        int Index = Rank[callings[i]];
        string Pos_Player = players[Index - 1];
        swap(players[Index], players[Index - 1]);
        
        Rank[callings[i]] -= 1;
        Rank[Pos_Player] += 1;
    }
    return players;
}