#include <string>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int solution(int n) {
    int answer = 0;
    vector<int> a;
    int b = n;
    int c;
    
    while(b != 0)
    {
        c = b%3;
        b /= 3;
        a.push_back(c);
    }
    
    reverse(a.begin(), a.end());
    
    for(int i = 0; i < a.size(); i++)
    {
        answer += a[i] * pow(3,i);
    }
    
    return answer;
}