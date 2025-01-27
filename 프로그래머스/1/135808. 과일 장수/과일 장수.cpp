#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(int k, int m, vector<int> score) {
    int answer = 0;
    vector<int> OriginBox = score;
    int BoxCount = 0;
    int AppleCount = 0;
    int a = m;
        
    BoxCount = OriginBox.size()/m;
    sort(OriginBox.begin(), OriginBox.end(), greater<>());
    
    for(int i = 0; i < BoxCount; i++)
    {
        vector<int> Box;
        
        while(AppleCount < a)
        {
            Box.push_back(OriginBox[AppleCount]);
            AppleCount++;
        }
        a += m;
        answer += Box[m-1] * m;
    }
    
    return answer;
}