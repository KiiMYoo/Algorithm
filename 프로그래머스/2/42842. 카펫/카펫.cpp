#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<int> solution(int brown, int yellow) {
    vector<int> answer;
    
    int Area = brown + yellow;
    
    for(int i = 3; i <= sqrt(Area); i++)
    {
        if(Area % i == 0)
        {
            int Heigth = i;
            int Width = Area / i;
            if(((Heigth + Width) * 2) - 4 == brown)
            {
                answer.push_back(Width);
                answer.push_back(Heigth);
            }
        }
    }
    
    return answer;
}