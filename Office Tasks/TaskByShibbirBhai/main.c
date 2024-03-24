/*


Date : 22/03/24


// Task 1 :  Create a program which will print number 1 to 20.

#include<stdio.h>

int main()
{
    int i;

    for (i=0;i<=20;i++)
    {
        printf("%d\n", i);
    }
    return 0;
}














// Task 2: Create a program which will show number 1-20 but without 10.

#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=20;i++)
    {
        if(i==10)
        {
            continue;
        }
        printf("%d\n",i);
    }
    return 0;
}














// Task 3: Create a program which will show the odd numbers between 1 to 20.

#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<=20;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}













*/

// Task 4 : Create Function and call it in main function an print number 1 to 50.

#include<stdio.h>
int func()
{
    int x;
    for(x=0; x<50; x++)
    {
        printf("%d\n",x);
    }
    return x;
}

int main()
 {
     int y;
     y = func();
     printf("%d\n", y);
     return 0;
 }



