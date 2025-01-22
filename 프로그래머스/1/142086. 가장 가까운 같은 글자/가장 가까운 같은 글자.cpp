#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer = {-1};
    for(int i = 1; i < s.length(); i++)
    {
        int a = 0;
        for(int j = i - 1; j >= 0; j--)
        {
            if(s[i] == s[j])
            {
                a = i - j;
                break;
            }
        }
        if(a == 0)
        {
            answer.push_back(-1);
        }
        else
        {
            answer.push_back(a);
        }
    }
    return answer;
}