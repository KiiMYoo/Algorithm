#include <string>
#include <algorithm>
#include <vector>

using namespace std;

string solution(string X, string Y) {
    string answer = "";
    int IndexCheck = 0;
    vector<char> Nums;
    
    sort(X.begin(), X.end());
    sort(Y.begin(), Y.end());
    
    for(int i = 0; i < X.length(); i++)
    {
        
        if(Y.find(X[i], IndexCheck) != string::npos)
        {
            IndexCheck = Y.find(X[i], IndexCheck) + 1;
            Nums.push_back(X[i]);
        }
    }
    
    sort(Nums.begin(), Nums.end(), greater<>());
    
    for(int i = 0; i < Nums.size(); i++)
    {
        answer += Nums[i];
    }
    
    if(answer[0] == '0')
    {
        return "0";
    }
    
    if(answer == "")
    {
        return "-1";
    }
    
    return answer;
}