#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> park, vector<string> routes) {
    vector<int> Position;
    int MaxParkX = park[0].length() - 1;
    int MaxParkY = park.size() - 1;
    
    for(int i = 0; i < park.size(); i++)
    {
        for(int j = 0; j < park[0].length(); j++)
        {
            if(park[i][j] == 'S')
            {
                Position.push_back(i);
                Position.push_back(j);
            }
        }
    }
    
    for(int i = 0; i < routes.size(); i++)
    {
        int TotalMoveDistance = routes[i][2] - '0';
        int MoveDistance = 0;
        
        switch(routes[i][0])
        {
            case 'E':
                if(Position[1] + TotalMoveDistance <= MaxParkX)
                {
                    for(int j = 1; j <= TotalMoveDistance; j++)
                    {
                        if(park[Position[0]][Position[1] + j] != 'X')
                        {
                            MoveDistance++;
                        }
                        else if(park[Position[0]][Position[1] + j] == 'X')
                        {
                            MoveDistance = 0;
                            break;
                        }
                    }
                    Position[1] += MoveDistance;
                }
                else
                {
                    break;
                }
                break;
            case 'W':
                if(Position[1] - TotalMoveDistance >= 0)
                {
                    for(int j = 1; j <= TotalMoveDistance; j++)
                    {
                        if(park[Position[0]][Position[1] - j] != 'X')
                        {
                            MoveDistance--;
                        }
                        else if(park[Position[0]][Position[1] - j] == 'X')
                        {
                            MoveDistance = 0;
                            break;
                        }
                    }
                    Position[1] += MoveDistance;
                }
                else
                {
                    break;
                }
                break;
            case 'S':
                if(Position[0] + TotalMoveDistance <= MaxParkX)
                {
                    for(int j = 1; j <= TotalMoveDistance; j++)
                    {
                        if(park[Position[0] + j][Position[1]] != 'X')
                        {
                            MoveDistance++;
                        }
                        else if(park[Position[0] + j][Position[1]] == 'X')
                        {
                            MoveDistance = 0;
                            break;
                        }
                    }
                    Position[0] += MoveDistance;
                }
                else
                {
                    break;
                }
                break;
            case 'N':
                if(Position[0] - TotalMoveDistance >= 0)
                {
                    for(int j = 1; j <= TotalMoveDistance; j++)
                    {
                        if(park[Position[0] - j][Position[1]] != 'X')
                        {
                            MoveDistance--;
                        }
                        else if(park[Position[0] - j][Position[1]] == 'X')
                        {
                            MoveDistance = 0;
                            break;
                        }
                    }
                    Position[0] += MoveDistance;
                }
                else
                {
                    break;
                }
                break;
        }
        
    }
    
    return Position;
}