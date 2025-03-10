#include <iostream>

using namespace std;

int solution(int n, int a, int b)
{
    int answer = 0;
    
    while( n != 0)
    {
        if (a % 2 == 0 && b % 2 != 0)
        {
            if(a - 1 != b)
            {
                n /= 2;
                a = a/2;
                b = b/2 + 1;
                answer++;
            }
            else
            {
                answer++;
                return answer;
            }
        }
        if (a % 2 != 0 && b % 2 == 0)
        {
            if(b - 1 != a)
            {
                n /= 2;
                a = a/2 + 1;
                b = b/2;
                answer++;
            }
            else
            {
                answer++;
                return answer;
            }
        }
        if (a % 2 == 0 && b % 2 == 0)
        {
            n /= 2;
            a = a/2;
            b = b/2;
            answer++;
        }
        if (a % 2 != 0 && b % 2 != 0)
        {
            n /= 2;
            a = a/2 + 1;
            b = b/2 + 1;
            answer++;
        }
    }

    return answer;
}
