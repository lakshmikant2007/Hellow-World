/*Yaha 1 se 25 tak number ko print karna hai
but jo jo 7 se divide hoga wo print nhi hoga or
bich me 20 aaya to program wahi end ho jayega*/
#include<stdio.h>
int main()
{
    for(int i=1;i<=25;i++)
    {
        if(i==20)
        {
            break;
        }

        else if(i%7==0)
        {
            continue;
        }
        printf("%d\t",i);
    }
    return 0;
}
