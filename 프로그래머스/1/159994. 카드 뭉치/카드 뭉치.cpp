#include <string>
#include <vector>

using namespace std;

string solution(vector<string> cards1, vector<string> cards2, vector<string> goal) {
    string answer = "Yes";
    int a = 0;
    int b = 0;
    int c = 0;
    while( a < goal.size())
    {
        if(goal[a] == cards1[b])
        {
            a++;
            b++;
        }
        else if(goal[a] == cards2[c])
        {
            a++;
            c++;
        }
        else
        {
            answer = "No";
            break;
        }
    }
    return answer;
}