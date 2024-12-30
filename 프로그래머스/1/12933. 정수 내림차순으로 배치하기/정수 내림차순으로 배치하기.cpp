#include <string>
#include <vector>
#include <algorithm>

using namespace std;

long long solution(long long n) {
    long long answer = 0;
    vector<long long> s;
    while(n!=0){
        s.push_back(n%10);
        n /= 10;
        sort(s.begin(), s.end(), greater<long long>());
    }
    for(int i = 0; i < s.size(); i++){
        answer *= 10;
        answer += s[i];
    }
    return answer;
}