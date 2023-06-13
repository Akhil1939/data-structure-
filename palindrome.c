#include<stdio.h>
int main()
{
int num,temp,rev,sum=0;
    printf("Enter a number to check if its palindrome: ");
    scanf("%d", &num);
    temp = num;
    while(temp != 0)
    {
        rev = temp%10;
        sum = sum*10 + rev;
        temp = temp/10;
    }

    if (sum == num)
    {
        printf("It's a palindrome");
    }

    else 
    {
        printf("It's not A PALINDROME");
    }
    return 0;
}