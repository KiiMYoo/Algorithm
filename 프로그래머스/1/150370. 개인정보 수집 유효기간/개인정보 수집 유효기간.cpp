#include <string>
#include <vector>

using namespace std;

vector<int> solution(string today, vector<string> terms, vector<string> privacies) {
    vector<int> answer;
    
    for(int i =0; i < privacies.size(); i++)
    {
        int PassedDays = 0;
        
        PassedDays += (stoi(today.substr(0,4)) - stoi(privacies[i].substr(0,4))) * 12 * 28;
        PassedDays += (stoi(today.substr(5,2)) - stoi(privacies[i].substr(5,2))) * 28;
        PassedDays += stoi(today.substr(8,2)) - stoi(privacies[i].substr(8,2));
        
        for(int j = 0; j < terms.size(); j++)
        {
            if(terms[j][0] == privacies[i][11])
            {
                switch(terms[j].size())
                {
                    case 3:
                        if(PassedDays >= stoi(terms[j].substr(2,1)) * 28)
                        {
                            answer.push_back(i+1);
                        }
                        break;
                    case 4:
                        if(PassedDays >= stoi(terms[j].substr(2,2)) * 28)
                        {
                            answer.push_back(i+1);
                        }
                        break;
                    case 5:
                        if(PassedDays >= stoi(terms[j].substr(2,3)) * 28)
                        {
                            answer.push_back(i+1);
                        }
                        break;
                }
            }
        }
        
    }
    return answer;
}