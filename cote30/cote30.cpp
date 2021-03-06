#include <iostream>

using namespace std;

long long solution(int price, int money, int count)
{
    long long answer = 0;

    for (int i = 1; i <= count; i++)
        answer += i * price;

    if (money - answer < 0) answer -= money;
    else answer = 0;

    return answer;
}

int main()
{
    std::cout << "Hello World!\n";
}