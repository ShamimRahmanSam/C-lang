/*


#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    return 0;
}












//interview ques by Shakib bhai

#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++){
    printf("%d\n",i);
    //return 0;  // if we don't use this return 0 here then the output will be 0-9 ...
    }
    printf("%d\n",i);    // if we use this printf here then it will give us output 10 ... and then the total output will be 0-10 with the last output 0-9 ...
    return 0;   // if we use the return 0 in for loop and then use return 0 here or not.. then the output will be 0
}
















//from subeen's book.. problem solving 4...... done by me.

#include<stdio.h>

int main()
{
    double u, a , v, t, ans;

    printf("u = ");
    scanf("%lf", &u);

    printf("a = ");
    scanf("%lf", &a);

    printf("t = ");
    scanf("%lf", &t);

    v = u + a * t;
    ans = 2 * t * v;

    printf("2t = %.2lf\n", ans);
    return 0;
}











// from subeen's book .. problem solve 5 in a loop way.  code 5.6

#include <stdio.h>
int main()
{
 int i, n, sum;
 scanf("%d", &n);
 for(i = 1, sum = 0; i <= n; i++)
    {
    sum = sum + i;
    }
 printf("Summation is %d\n", sum);
 return 0;
}









// from subeen's book problem solving 6.... code 5.7 (celsius to farenheit)

#include<stdio.h>
int main()
{
    double C,F;

    printf("Celsius : ");
    scanf("%lf", &C);

    F = (C * 1.8) + 32;

    printf("Farenheit : %.2lf\n", F);
    return 0;
}








// prob solve: (Farenheit to celsius by ownself )

#include<stdio.h>
int main()
{
    double C,F;

    printf("Farenheit : ");
    scanf("%lf", &F);

    C = (F - 32) * 5 / 9;

    printf("Celsius : %.2lf\n", C);
    return 0;
}
















//code 6.4 from subeen's book.. did the opposite version of this one after this code..

#include<stdio.h>
int main()
{
    int array[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for(i=0;i<10;i++)
    {
        printf("%dth element : %d\n", i+1, array[i]);
    }
    return 0;
}                       // code 6.4









// opposite version of code 6.4
#include <stdio.h>
int main()
{
    int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;
    for(i = 9; i >= 0; i--)
        {
        printf("%d th element is: %d\n", i, ara[i]);
        }
    return 0;
}















// code 7.9 from subeen's book problem solving by ownself ... circle's area prcaticed this code by using function

#include<stdio.h>

double area(double n1, double n2)
{
    double a = n1*n2;
    return a;
}

int main()
{
    double r,a;
    double pi = 3.14;

    printf("Pi = %.2lf\n", pi);

    printf("r = ");
    scanf("%lf", &r);

    a = area(pi,r);

    printf("circle's area : %.2lf\n", a);

    return 0;
}















//array merging or Concatenation of integers

#include <stdio.h>
int main()
{
	int arr1 = 5, arr2 = 5, arr_r, i, j;

	int a[5] = { 1, 2, 3, 4, 5 };

	int b[5] = { 6, 7, 8, 9, 10 };

	arr_r = arr1+ arr2;
	int c[arr_r];

	// copying array 1 elements into an array
	for (i = 0; i < arr1; i++) {
		c[i] = a[i];
	}

	// copying array 2 elements into an array
	for (i = 0, j = arr1; j < arr_r && i < arr2; i++, j++) {
		c[j] = b[i];
	}

	// Array Elements After Merging
	for (i = 0; i < arr_r; i++) {
		printf("%d ", c[i]);
	}
	return 0;
}












// concatenation of string

#include <stdio.h>
//#include <string.h>

int main() {
    char str1[] = "Welcome To";
    char str2[] = " DocTime";

    // Concatenate str2 to str1
    strcat(str1, str2);

    // Print the result
    printf("Concatenated String: %s\n", str1);
    return 0;
}



















// creating a program to get 1-10 Namta

#include<stdio.h>
int main()
{
    // by using 2D array
    int namta[10][10];
    int row,col;

    for(row=0;row<10;row++)
    {
        for(col=0;col<10;col++)
        {
            namta[row][col] = (row+1)*(col+1);
            printf("%d x %d = %d\n", (row + 1), (col + 1), namta[row][col]);

        }
        printf("\n\n");
    }                       // code 11.2 but in own way .. without using same for loop for 2 times. check the code from the book to see changes
    // return 0;        // this code end here if we just want the output by using 2D array



    printf("\n\n\n\n\n\n\n");



    //getting the same namta output by using for loop only..did it by ownself. without using array system.
    int i,j,n;
    for(i = 1; i <= 10; i++)                // instead of i++ , we can use i=i+1 in this code to get the same the output... need to apply same in j++ if we change i++ to i=i+1
        {
            for(j = 1; j <= 10; j++)
            {
                n = i*j;
                printf("%d X %d = %d\n", i, j, n);
            }
            printf("\n\n");     //NAMTA CREATION SYSTEM CAN BE POSSIBLE BY USING ONLY "FOR LOOP" LIKE THIS WAY WITHOUT ARRAY SYSTEM.

        }

    return 0;
}


















// Array facts practice

#include <stdio.h>

int main()
{
 	int myNumbers[] = {7, 100, 23, 50, 6, 21, 100, 3, 50, 1000};

	int length, firstElement, sixthElement, lastElement;

    int maxNumber, minNumber = myNumbers[0];


	length = sizeof(myNumbers)/sizeof(myNumbers[0]);

    firstElement = myNumbers[0];
    sixthElement = myNumbers[5];

    lastElement = myNumbers[length - 1];


    for (int i = 0; i < length; i++)
        {
            if (myNumbers[i] > maxNumber)
                {
                    maxNumber = myNumbers[i];
                }
                else if (myNumbers[i] < minNumber)
                    {
                        minNumber = myNumbers[i];
                    }
                    else
                        {
                            continue;
                        }
        }


    printf("Array Length : %d\n\n", length);

    printf("First Element is : %d\n", firstElement);
    printf("Sixth Element is : %d\n", sixthElement);
    printf("Last Element is : %d\n\n\n", lastElement);

    printf("The maximum integer number in the array is: %d\n", maxNumber);
    printf("The minimum integer number in the array is: %d\n\n", minNumber);

    return 0;
}













#include<stdio.h>
int main()
{
    int n=14;
    if(n%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}












#include <stdio.h>
int main()
{
    int n = 0;
    while (n < 10)
        {
            n++;
            if (n % 2 == 0)
            {
                continue;
            }
    printf("%d\n", n);
    }
    return 0;
}















#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=3;b++)
        {
            if(b!=a)
            {
                for(c=1;c<=3;c++)
                {
                    if(c!=b && c!=a)
                        {
                            printf("%d, %d, %d\n",a,b,c);
                        }
                }
            }
        }
    }
    return 0;
}










#include<stdio.h>
int main()
{
    int a,b,c;
    for(a=1;a<=3;a++)
    {
        for(b=1;b<=3;b++)
        {
            for(c=1;c<=3;c++)
            {
                if(b!=a && c!=b && c!=a)
                {
                    printf("%d, %d, %d\n", a, b, c);
                }
            }
        }
    }
    return 0;
}
//less run time















#include<stdio.h>
int main()
{
    int n=1;
    while(n<=100)
    {
        printf("%d\n", n);
        n++;
    }

    return 0;
}










#include<stdio.h>
int main()
{
    int x=1;
    while(x<=100)
    {
        printf("%d\n", x);
        x++;
        if(x>10)
        {
            break;
        }
    }
}










#include<stdio.h>
int main()
{
    int x;
    for(x=1;x<=100;x++)
    {

        if(x%2==0)
        {
            continue;
        }
        printf("%d\n", x);

    }
    return 0;  //output will be 1-100 (odd numbers)
}










#include<stdio.h>
int main()
{
    int n=5,i,c;
    for(i=1;i<=10;i++)
    {
        c =n*i;
        printf("%d x %d = %d\n", n,i,c);
    }
    return 0;
}
// 5's namta











#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=20;i++)
    {
        for(j=1;j<=10;j++)
        {
            k = i*j;
            printf("%d x %d = %d\n", i, j, k);
        }
    }
    return 0;
} // namta 1-20




















// finding first and last digit number .. own task practice..

#include <stdio.h>
#include <math.h>

int main()
{
    int n, firstDigit, lastDigit, digits;

    printf("Enter any number: ");
    scanf("%d", &n);

    lastDigit = n % 10;

    digits = (int)log10(n);

    firstDigit = (int)(n / pow(10, digits));

    printf("First digit = %d\n", firstDigit);
    printf("Last digit = %d\n", lastDigit);

    return 0;
}

















#include <math.h>
#include <stdio.h>

int main() {
    double base, exp, result;
    printf("Enter a base number: ");
    scanf("%lf", &base);
    printf("Enter an exponent: ");
    scanf("%lf", &exp);

    // calculates the power
    result = pow(base, exp);

    printf("%.1lf^%.1lf = %.2lf", base, exp, result);
    return 0;
}                   // USING POW FROM MATH.H TO GET THE EXPONENT OF A NUMBER . LIKE 3TO THE POWER 4 = 81
















#include<stdio.h>
int main()
{
    int x,y,p,m;
    p=15, m=5;
    x=(p+m)/2;
    y=(p-m)/2;
    printf("x=%d, y=%d",x,y);
    return 0;
}                  //prob solve 5.1
















*/



