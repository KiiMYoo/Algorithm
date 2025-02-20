#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> wallpaper) {
    vector<int> answer;
    vector<int> X;
    vector<int> Y;
    
    for(int i = 0; i < wallpaper.size(); i++)
    {
        for(int j = 0; j < wallpaper[i].length(); j++)
        {
            if(wallpaper[i][j] == '#')
            {
                X.push_back(i);
                Y.push_back(j);
            }
        }
    }
    
    answer.push_back(*min_element(X.begin(), X.end()));
    answer.push_back(*min_element(Y.begin(), Y.end()));
    answer.push_back(*max_element(X.begin(), X.end()) + 1);
    answer.push_back(*max_element(Y.begin(), Y.end()) + 1);
    
    return answer;
}