#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keymap, vector<string> targets) {
    vector<int> answer;
    for(int k = 0; k < targets.size(); k ++)
    {
        int LeastPushSum = 0;
        for(int i  = 0; i < targets[k].length(); i++)
        {
            int LeastPush = 2147483647;
            for(int j = 0; j < keymap.size(); j++)
            {
                auto it = keymap[j].find(targets[k][i]);
                if(it != string::npos && LeastPush > it)
                {
                    LeastPush = it;
                }
            }
            if(LeastPush != 2147483647)
            {
                LeastPushSum += LeastPush + 1;
            }
            else
            {
                LeastPushSum = -1;
                break;
            }
        }
        answer.push_back(LeastPushSum);
    }
   
    return answer;
}