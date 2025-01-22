#include <string>
#include <vector>

using namespace std;

int solution(int a, int b, int n) {
    int answer = 0;
    int InitialBottle = n;
    while(InitialBottle - a >= 0)
    {
        answer += b;
        InitialBottle = InitialBottle - a + b;
    }
        
    return answer;
}