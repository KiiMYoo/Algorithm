#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    vector<int> Num1 = {1,2,3,4,5};
    vector<int> Num2 = {2,1,2,3,2,4,2,5};
    vector<int> Num3 = {3,3,1,1,2,2,4,4,5,5};
    vector<int> No1;
    vector<int> No2;
    vector<int> No3;
    int i = 0;
    int j = 0;
    int k = 0;
    int score1 = 0;
    int score2 = 0;
    int score3 = 0;
    
    while(No1.size() != answers.size())
    {
        
        No1.push_back(Num1[i]);
        
        i++;
            
        if(i > 4)
        {
            i = 0;
        }
    }
    
    while(No2.size() != answers.size())
    {
        
        No2.push_back(Num2[j]);
        
        j++;
            
        if(j > 7)
        {
            j = 0;
        }
    }
    
    while(No3.size() != answers.size())
    {
        No3.push_back(Num3[k]);
        
        k++;
        
        if(k > 9)
        {
            k = 0;
        }
    }
    
    for(int a = 0; a < answers.size(); a++)
    {
        
        if(No1[a] == answers[a])
        {
            score1++;
        }
        if(No2[a] == answers[a])
        {
            score2++;
        }
        if(No3[a] == answers[a])
        {
            score3++;
        }
    }
    
    if(score1 >= score2 && score1 >= score3)
    {
        answer.push_back(1);
    }
    if(score2 >= score1 && score2 >= score3)
    {
        answer.push_back(2);
    }
    if(score3 >= score1 && score3 >= score2)
    {
        answer.push_back(3);
    }
    sort(answer.begin(), answer.end());
    
    return answer;
}