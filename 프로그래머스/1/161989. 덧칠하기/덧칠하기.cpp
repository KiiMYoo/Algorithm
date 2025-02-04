#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int n, int m, vector<int> section) {
    int answer = 0;
    int LastPainted = 0;
    
    for(int i = 0; i < section.size(); i++)
    {
        if(section[i] > LastPainted)
        {
            answer++;
            LastPainted = section[i] + m -1;
        }
    }
    return answer;
}