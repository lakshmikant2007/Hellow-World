//1 se 100 tak number print karo, lekin jo 5 se divide ho usko skip karo
#include<stdio.h>
int main()
{
    for(int i=1;i<=100;i++)
    {
        if(i%5==0)
        {
            continue;
        }
        printf("%d\t",i);

    }

    return 0;
}
