#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four (int a, int b, int c, int d)
{
    int arr[4] = {a, b, c, d}, cntr=0, tmp;
    for(int i=0; i<4; i++)
    {
        cntr = 0;
        for(int j=0; j<4-i-1; j++)
        {
            if(arr[j]>arr[j+1])
            {
            cntr++;
            tmp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = tmp;
            }
        }
        if (cntr==0)
        break;
    }
    return arr[3];
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
