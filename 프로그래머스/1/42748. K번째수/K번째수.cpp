#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> realanswer;
    for(int j = 0; j < commands.size(); j++)
    {
        vector<int> answer;
        for(int i = commands[j][0]; i <= commands[j][1]; i++)
        {
            answer.push_back(array[i-1]);
        }
        sort(answer.begin(), answer.end());
        realanswer.push_back(answer[commands[j][2]-1]);
    }
    
    
    return realanswer;
}