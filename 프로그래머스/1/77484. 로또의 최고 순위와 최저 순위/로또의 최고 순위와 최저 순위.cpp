#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> lottos, vector<int> win_nums) {
    vector<int> answer;
    int ZeroCount = 0;
    int MinRank = 7;
    int MaxRank = 0;
    
    for(int i = 0; i < 6; i++)
    {
        if(lottos[i] == 0)
        {
            ZeroCount++;
        }
    }
    
    for(int i = 0; i < 6; i++)
    {
        if(find(lottos.begin(), lottos.end(), win_nums[i]) != lottos.end())
        {
            MinRank--;
        }
    }
    
    MaxRank = MinRank - ZeroCount;
    
    if(MaxRank >= 6)
    {
        MaxRank = 6;    
    }
    
    if(MinRank >= 6)
    {
        MinRank = 6;
    }
    
    answer.push_back(MaxRank);
    answer.push_back(MinRank);
    
    return answer;
}