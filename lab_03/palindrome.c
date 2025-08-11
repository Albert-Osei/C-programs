#include <stdio.h>

int main()
{
    int num, r=0, temp;
    printf("Enter a number to check if a given number is palindrome or not\n");
    scanf("%d", &num);

    temp = num;

    while(temp!=0)
    {
        r=r*10;
        r = r + temp % 10;
        temp = temp/10;
    }

    if(num==r)
        printf("%d is a palindrome number\n",num);
    else
        printf("%d is not a palindrome number\n",num);
    
    return 0;
}