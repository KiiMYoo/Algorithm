#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<string> a;
    int length = s.length();
    
    for(int i = 0; i < length; i++){
        a.push_back(s.substr(i, 1));
    }
    
    sort(a.begin(), a.end(),greater<>());
    
    for(int i = 0; i < a.size(); i++){
        answer += a[i];
    }
    
    return answer;
}