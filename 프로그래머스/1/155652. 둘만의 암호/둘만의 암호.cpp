#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s, string skip, int index) {
    string answer = "";
    
    for(char Letter : s)
    {
        int Count = 0;
        while(Count < index)
        {
            Letter++;
            
            if(Letter > 122)
            {
                Letter = 97;
            }
            
            if(skip.find(Letter) == string::npos)
            {
                Count++;
            }
            
        }
        answer += Letter;
    }
    return answer;
}