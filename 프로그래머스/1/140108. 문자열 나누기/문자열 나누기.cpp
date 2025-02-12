#include <string>
#include <vector>

using namespace std;

int solution(string s) {
    int answer = 0;
    vector<string> Split;
    int SameCount = 0;
    int DiffCount = 0;
    int IndexCount = 0;
    
    for(int i = 0; i < s.length(); i ++)
    {
        if(s[IndexCount] == s[i])
        {
            SameCount++;
            
        }
        else
        {
            DiffCount++;
            
        }
        
        if(SameCount == DiffCount || i == s.length() - 1)
        {
            Split.push_back(s.substr(IndexCount, i - IndexCount + 1));
            IndexCount = i + 1;
        }
    }
    
    answer = Split.size();
    return answer;
}