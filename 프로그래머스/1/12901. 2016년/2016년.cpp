#include <string>
#include <vector>

using namespace std;

string solution(int a, int b) {
    string answer = "";
    vector<string> Day = {"FRI","SAT","SUN","MON","TUE","WED","THU"};
    int StartDay = 0;
    
    for(int i = 1; i <=12; i++)
    {
        int TotalDay = 30;
        if (i == 2)
        {
            TotalDay = 29;
        }
        else if(i == 1 ||i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
        {
            TotalDay = 31;
        }
        for(int j = 1; j <= TotalDay; j++)
        {
            if(a == i && b == j)
            {
                answer = Day[StartDay];
                break;
            }
            StartDay++;
            if(StartDay == 7)
            {
                StartDay = 0;
            }
        }
    }
    
    return answer;
}