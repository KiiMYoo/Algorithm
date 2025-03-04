#include <string>
#include <vector>

using namespace std;

vector<int> solution(string s) {
    vector<int> answer;
    int ZeroCount = 0;
    int TranslationCount = 0;
    
    while(s != "1")
    {
        string Translation = "";
        int OneCount = 0;
        
        for(int i = 0; i < s.length(); i++)
        {
            if(s[i] == '0')
            {
                ZeroCount++;
            }
            else
            {
                OneCount++;
            }
        }
        
        while(OneCount > 0)
        {
            Translation += to_string(OneCount % 2); 
            OneCount = OneCount / 2;
        }
        
        s = Translation;
        
        TranslationCount++;
    }
    
    answer.push_back(TranslationCount);
    answer.push_back(ZeroCount);
    
    return answer;
}