#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

using namespace std;

string solution(string s) {
    string answer = "";
    vector<int> Nums;
    
    istringstream ss(s);
    
    int num;
    while(ss >> num)
    {
        Nums.push_back(num);
    }
    
    answer += to_string(*min_element(Nums.begin(), Nums.end()));
    answer += " ";
    answer += to_string(*max_element(Nums.begin(), Nums.end()));
    
    return answer;
}