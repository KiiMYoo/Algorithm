#include <string>
#include <vector>

using namespace std;

vector<string> solution(vector<string> strings, int n) {
    vector<string> answer;
    
    for(int i = strings.size()-1; i > 0; i--)
    {
        for(int j = 0; j<i; j++)
        {
            string temp;
            if(strings[j][n] > strings[j+1][n])
            {
                temp = strings[j];
                strings[j] = strings[j+1];
                strings[j+1] = temp;
            }
            else if(strings[j][n] == strings[j+1][n])
            {
                if(strings[j] > strings[j+1])
                {
                    temp = strings[j];
                    strings[j] = strings[j+1];
                    strings[j+1] = temp;
                }
            }
        }
    }
    return strings;
}