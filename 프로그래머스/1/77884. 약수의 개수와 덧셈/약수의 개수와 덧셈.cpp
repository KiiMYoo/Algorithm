#include <string>
#include <vector>
#include <cmath>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    vector<int> a;
    
    for(int i = 0; i < right - left + 1; i++){
        a.push_back(left + i);
    }
    for(int j = 0; j < a.size(); j++){
        if((int)sqrt(a[j])*(int)sqrt(a[j]) != a[j]){
            answer += a[j];
        }
        else{
            answer -= a[j];
        }
    }
      
    return answer;
}