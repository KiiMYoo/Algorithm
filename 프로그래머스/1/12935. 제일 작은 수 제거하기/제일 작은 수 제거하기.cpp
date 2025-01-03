#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    if (arr.size() <= 1){
        arr.pop_back();
        arr.push_back(-1);
        answer = arr;
    }
    else{
        int a = min_element(arr.begin(), arr.end()) - arr.begin();
        for(int i = 0; a+i < arr.size(); i++){
            arr[a+i] = arr[a+i+1];
        }
        arr.pop_back();
        answer = arr;
    }
    return answer;
}