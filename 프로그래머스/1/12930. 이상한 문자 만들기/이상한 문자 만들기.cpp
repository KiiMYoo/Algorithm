#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    int index = 0;
    
    for(int i = 0; i < s.length(); i++)
    {
        if(s[i] == ' ')
        {
            index = 0;
            continue;
        }
        if(index%2 == 0)
        {
            if(s[i] >= 'a')
            {
                s[i] -= 32;
            }
        }
        else
        {
            if(s[i] <= 'Z')
            {
                s[i] += 32;
            }
        }
        index++;
    }
    
    
    return s;
}