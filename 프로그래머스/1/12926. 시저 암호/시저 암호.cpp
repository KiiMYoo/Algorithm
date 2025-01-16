#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    
    for(int i = 0; i < s.length(); i++)
    {
        char c = s[i];
            
        if(c >= 'A' && c <= 'Z')
        {
            if(c + n >= 91)
            {
                answer += c + n - 26;
            }
            else
            {
                answer += c + n; 
            }

        }
        else if(c >= 'a' && c <= 'z')
        {
            if(c + n >= 123)
            {
                answer += c + n - 26;
            }
            else
            {
                answer += c + n;
            }
        }
        else if(c == ' ')
        {
            answer += " ";
        }
        
    }
    return answer;
}