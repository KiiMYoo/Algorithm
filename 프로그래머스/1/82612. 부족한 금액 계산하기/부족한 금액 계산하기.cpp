using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;
    long long totalPrice = 0;
    
    for(int i = 1; i <= count; i++){
        totalPrice += i*price;
    }
    
    if(totalPrice > money){
        answer = totalPrice - money;
    }
    else{
        return 0;
    }

    return answer;
}