#include<stdio.h>
double data(double value)
{
    return value;
}
int main()
{
    double store = data(3.14);
    printf("value : %lf\n", store);
    return 0;
}