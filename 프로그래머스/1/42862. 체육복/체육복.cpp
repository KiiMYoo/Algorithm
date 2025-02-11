#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve)
{
    int answer = 0;
    vector<int> NewLost;
    
    answer += n - lost.size();
    
    sort(lost.begin(), lost.end());
    sort(reserve.begin(), reserve.end());
    
    for(int i : lost)
    {
        auto it = find(reserve.begin(), reserve.end(), i);
        if(it != reserve.end())
        {
            reserve.erase(it);
            answer++;
        }
        else
        {
            NewLost.push_back(i);
        }
    }
    
    for (int i = 0; i < NewLost.size(); i++)
    {
        auto it = find(reserve.begin(), reserve.end(), NewLost[i] - 1);
        if (it != reserve.end())
        {
            answer ++;
            reserve.erase(it);
            continue;
        }
        
        it = find(reserve.begin(), reserve.end(), NewLost[i] + 1);
        if (it != reserve.end())
        {
            answer ++;
            reserve.erase(it);
        }
    }
    return answer;
}