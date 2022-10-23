#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a, b;
    scanf("%d %d",&a, &b);
    string numbers[10] = {"zero", "one", "two", "three", "four", "five", "six","seven", "eight", "nine"};
    for (int i=a; i<=b; i++)
    {
        if(i<=9)
        {cout<< numbers[i] << endl;}
        else
        if(i%2 == 0)
        {printf("even\n");}
        else
        {printf("odd\n");}
    }
        
    return 0;
}
