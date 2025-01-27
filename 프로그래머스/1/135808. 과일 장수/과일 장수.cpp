#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    int BoxCount = 0;
    int AppleCount = 0;
    int a = m;
        
    BoxCount = score.size()/m;
    sort(score.begin(), score.end(), greater<>());
    
    for(int i = 0; i < BoxCount; i++)
    {
        vector<int> Box;
        
        while(AppleCount < a)
        {
            Box.push_back(score[AppleCount]);
            AppleCount++;
        }
        a += m;
        answer += Box[m-1] * m;
    }
    
    return answer;
}
