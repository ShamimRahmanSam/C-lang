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

















#include <stdio.h>
int main() {
    int x = 5;
    printf("%d %d %d", x, x++, ++x);
    return 0;
}








#include <stdio.h>
int main() {
    int i = 0;
    while (i < 5) {
        printf("%d ", i);
        i++;
    }
    return 0;
}










#include <stdio.h>
int main() {
    char str[] = "Hello, World!";
    printf("%s", str);
    return 0;
}











#include <stdio.h>
int main() {
    int x = 10;
    printf("The value of x is: %d", x);
}








#include <stdio.h>
int main() {
    int arr[5];
    for (int i = 0; i <= 5; i++) {
        arr[i] = i;
    }
    return 0;
}











#include<stdio.h>
int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b);
    sum = a+b;
    printf("%d", sum);
    return 0;
}









#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++)
    {
        sum+=i;
    }
    printf("%d", sum);
    return 0;
}
















#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}













#include<stdio.h>
int main()
{
    int x=100;
    printf("The address of x is %p", &x);  // The %p format specifier to print the address in hexadecimal form.
    return 0;
}     //  A variable x was defined and initialized with the value 100 in the program above.
        // We retrieved the address of this variable x by using the address operator (&) as the prefix and printed it using printf() function
















#include<stdio.h>
int main()
{
    int x=1;
    int* ptr;   // integer pointer
    ptr = &x;   // pointer initialization with the address of x
    printf("Value of x is %d\n", *ptr);   // accessing value of x usin pointer
    return 0;
}












#include<stdio.h>
int main()
{
    int s=7;
    int *m = &s;
    printf("%u\t %d\t %p\n", m, *m, &s);   //  m is  the address value and *m is reference value of s and &s is the address
    m++;
    printf("m++ is %u", m); //increment of pointer
    return 0;
}











// pointer increment and decrement
//pointers are incremented and decremented by the size of the data type they point to

#include <stdio.h>
int main()
{
    int a = 22;
    int *p = &a;

    printf("p = %u\n", p); // p = 6422288

    p++;
    printf("p++ = %u\n", p); //p++ = 6422292    +4   // 4 bytes

    p--;
    printf("p-- = %u\n", p); //p-- = 6422288     -4   // restored to original value


    float b = 22.22;
    float *q = &b;

    printf("q = %u\n", q);  //q = 6422284

    q++;
    printf("q++ = %u\n", q); //q++ = 6422288      +4   // 4 bytes

    q--;
    printf("q-- = %u\n", q); //q-- = 6422284       -4  // restored to original value


    char c = 'a';
    char *r = &c;

    printf("r = %u\n", r);   //r = 6422283

    r++;
    printf("r++ = %u\n", r);   //r++ = 6422284     +1   // 1 byte

    r--;
    printf("r-- = %u\n", r);   //r-- = 6422283     -1  // restored to original value

    return 0;
}















// C program to illustrate pointer Addition
#include <stdio.h>

// Driver Code
int main()
{
    // Integer variable
    int N = 4;

    // Pointer to an integer
    int *ptr1, *ptr2;

    // Pointer stores the address of N
    ptr1 = &N;
    ptr2 = &N;

    printf("Pointer ptr2 before Addition: ");
    printf("%p \n", ptr2);

    // Addition of 3 to ptr2
    ptr2 = ptr2 + 3;
    printf("Pointer ptr2 after Addition: ");
    printf("%p \n", ptr2);

    return 0;
}

















// C program to illustrate Subtraction
// of two pointers
#include <stdio.h>

// Driver Code
int main()
{
    int x = 6; // Integer variable declaration
    int N = 4;

    // Pointer declaration
    int *ptr1, *ptr2;

    ptr1 = &N; // stores address of N
    ptr2 = &x; // stores address of x

    printf(" ptr1 = %u, ptr2 = %u\n", ptr1, ptr2);
    // %p gives an hexa-decimal value,
    // We convert it into an unsigned int value by using %u

    // Subtraction of ptr2 and ptr1
    x = ptr1 - ptr2;

    // Print x to get the Increment
    // between ptr1 and ptr2
    printf("Subtraction of ptr1 "
           "& ptr2 is %d\n",
           x);

    return 0;
}

















// C Program to illustrare pointer comparision
#include <stdio.h>

int main()
{
    // declaring array
    int arr[5];

    // declaring pointer to array name
    int* ptr1 = &arr;
    // declaring pointer to first element
    int* ptr2 = &arr[0];

    if (ptr1 == ptr2) {
        printf("Pointer to Array Name and First Element "
               "are Equal.");
    }
    else {
        printf("Pointer to Array Name and First Element "
               "are not Equal.");
    }

    return 0;
}















// C Program to demonstrate the pointer comparison with NULL
// value
#include <stdio.h>

int main()
{

    int* ptr = NULL;

    if (ptr == NULL) {
        printf("The pointer is NULL");
    }
    else {
        printf("The pointer is not NULL");
    }
    return 0;
}














#include<stdio.h>
int main()
{
    int n=1;
    while(n<=100)
    {
        printf("%d\n", n);
        n++;      // we can also use n= n+1 here

        if(n>=22)           // if we use n>22 then the output will be 1-22 but if we use n>=22 then the output will be 1-21.
        {
            break;     // we use break to break the loop after getting what we need..
        }

        //return 0;     // if we use return 0 here then the output will be 1. then break won't work also like n++... but if we use this return 0; after the while loop and in int main function then we will get the actual output;
    }
    return 0; //output will be 1-21
}















#include<stdio.h>
int main()
{
    int n=7, i=1, ans=n*i;
    while(i<=10)
    {
        printf("%d X %d = %d\n", n, i, ans); //n*i);    // without n*i the output will be 0 for everyone and we can use ans=n*i in the integer and then we can use just ans variable here to get the output. and that's how e don't need to write code like this n*i here
        i++;            // we can use i=i+1 here instead of i++
        // return 0;       // if we use return 0 here then the output will be 7x1=7 cause i++ will not be used in the loop if we use return 0 here so it should be after whie oop and in main() loop
    }
    return 0;
}













#include <stdio.h>
int main()
{
    int m, n = 5;
    int i;
    m = 0;
    for(i = 1; i <= 10; i = i + 1)
    {
         m = m + n;    // it's better to addition than multiply in coding cause addition take less time than multiplication...
         printf("%d X %d = %d\n", n, i, m);
    }
    return 0;
}













#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,d,x,y;

    printf("a1 = ");
    scanf("%lf", &a1);

    printf("a2 = ");
    scanf("%lf", &a2);

    printf("b1 = ");
    scanf("%lf", &b1);

    printf("b2 = ");
    scanf("%lf", &b2);

    printf("c1 = ");
    scanf("%lf", &c1);

    printf("c2 = ");
    scanf("%lf", &c2);

    d = a1*b2-a2*b1;

    if((int)d==0)
    {
        printf("x & y can not be determined.\n");
    }
    else
    {
        x = (b2*c1-b1*c2)/d;
        y = (a1*c2-a2*c1)/d;

        printf("x = %.2lf, y = %.2lf", x, y);
    }
    return 0;

}                       // problem solving 2..  code 5.3













#include <stdio.h>
int main()
{
 int i, n, sum=0;
 scanf("%d", &n);
 for(i = 1; i <= n; i++)
    {
    sum = sum + i;
    }
 printf("Summation is %d\n", sum);
 return 0;
}                   // problem solve 5 in a loop way.  code 5.6



















#include<stdio.h>
int main()
{
    int a,b,x,gcd;
    scanf("%d %d",&a,&b);
    printf("%d %d\t %p %p\n", a,b,&a,&b);    // input and memory address practice

    x = (a < b) ? a : b;            // ternary operator used instead of if else cause here is one condition only.

    for( ; x>=1; x--)
    {
        if(a%x==0 && b%x==0)
        {
            gcd = x;
            break;
        }
    }
    printf(" GCD is %d\n", gcd);
    return 0;
}











#include<stdio.h>
int main()
{
    int a,b,t,gcd;

    scanf("%d\n%d",&a,&b);

    if(a==0)
    {
        gcd=a;
    }
    else if(b==0)
    {
        gcd=b;
    }
    else
    {
        while(b!=0)
        {
            t=b;        // t=temp
            b=a%b;
            a=t;
        }
        gcd=a;
    }
    printf("gcd : %d\n", gcd);
    return 0;
}                   //prob solve 7..... code 5.9 (more efficient)














#include<stdio.h>

int main() {
    int a, b, gcd, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    while (b != 0)
    {
        temp = b;
        b = a % b;
        a = temp;
    }
    gcd = a;

    printf("GCD: %d\n", gcd);
    return 0;
}                   // efficient format for gcd by euclidean algorithm














#include<stdio.h>
int main()
{
    int a,b,temp,gcd;
    scanf("%d %d",&a,&b);

    if(a==0 || b==0 )
    {
        gcd=0;
    }
    else if(a==1 || b==1)
    {
        gcd=1;
    }
    else
    {
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
        gcd=a;
    }
    printf("GCD is %d\n", gcd);
    return 0;
}













#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a%b);     //recursive call.. recursion example and an easy way to get gcd by creating function and with euclidean algorithm
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}












#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}















#include<stdio.h>
int main()
{
    int i, a[10] = {10,20,30,40,50,60,70,80,90,100};

    for(i=0;i<10;i++)
    {
        printf("%d th element is %d\n", i+1, a[i]);
    }
    return 0;
}










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
}                   // opposite version of code 6.4


















#include<stdio.h>
int main()
{
    int i,j;
    int a[] = {10,20,30,40,50,60,70,80,90,100};
    int a2[10];

    for(i=0, j=9 ; i<10 ; i++, j--)
    {
        a2[j] = a[i];
    }
    for(i=0;i<10;i++)
    {
        a[i] = a2[i];
        printf("%dth element is %d\n", i, a[i]);
    }
    return 0;
}














#include <stdio.h>
int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for(i=0, j=9; i<10; i++, j--)
    {
        temp = ara[j];
        ara[j] = ara[i];
        ara[i] = temp;
    }
    for(i=0; i<10; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}                   // code 6.6 (6.5 but without using 2nd array













#include <stdio.h>
int main()
{
    int ara[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i, j, temp;

    for(i=0, j=9; i<j; i++, j--)
    {
        temp = ara[i];
        ara[i] = ara[j];
        ara[j] = temp;
    }

    for(i=0; i<10; i++)
    {
        printf("%d\n", ara[i]);
    }
    return 0;
}                   // code 6.6 after debug (6.5 but without using 2nd array















#include <stdio.h>
int main()
{
    int ft_marks[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
82, 58, 69, 67, 53, 56, 71, 62},
    st_marks[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
69, 67, 53, 56, 71, 62, 49},
    final_marks[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
55, 69, 85, 81, 80, 67, 88, 71};

    int i;
    double total;

    for(i=0;i<40;i++)
    {
        total =  ft_marks[i] / 4.0 + st_marks[i] / 4.0 + final_marks[i] / 2.0;
        printf("Roll No : %d\tTotal Marks : %0.0lf\n", i + 1, total);
    }
    return 0;               // code 6.7 in one loop
}
















#include <stdio.h>
int main()
    {
    int marks, i, count;
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
    65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
    62, 66, 76, 70, 67, 65, 77, 63};
    for(marks = 50; marks <= 100; marks++)
    {
        count = 0;
        for(i = 0; i < 40; i++)
        {
            if(total_marks[i] == marks)
            {
                count++;
            }
        }
        printf("Marks: %d Count: %d\n", marks, count);
    }
    return 0;
}                   // code 6.8 of subeen













#include <stdio.h>
int main()
{
    int i;
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
    65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
    62, 66, 76, 70, 67, 65, 77, 63};

    int marks_count[101];
    for(i = 0; i < 101; i++)
    {
        marks_count[i] = 0;
    }
    for(i = 0; i < 40; i++)
    {
        marks_count[total_marks[i]]++;
    }
    for(i = 50; i <= 100; i++)
    {
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }
    return 0;
}               //code 6.9













#include <stdio.h>
int main()
{
    int i, j;
    int total_marks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    int marks_count[11];

    for(i = 0; i < 11; i++)
    {
        marks_count[i] = 0;
    }
    for(i = 0; i < 12; i++)
    {
        marks_count[total_marks[i]]++;
        for(j = 0; j <= 10; j++)
        {
            printf("%d ", marks_count[j]);
        }
        printf("\n");
    }
    return 0;           //code 6.10
}

















//understanding of temp and count

#include <stdio.h>

int main() {
    int temp; // Declare a variable named temp
    int count; // Declare a variable named count

    // Initialize count to 0
    count = 0;

    // Use a loop to perform some operations
    for (int i = 0; i < 10; i++) {
        // Generate a temporary value based on the loop counter
        temp = i * 2;

        // Increment the count
        count++;

        // Print the temporary value and count
        printf("Temporary Value: %d, Count: %d\n", temp, count);
    }

    return 0;
}
















#include<stdio.h>

double add(double n1, double n2);   // we have to declare the created function if we gonna write it after int main function.

int main()
{
    double a=2.8, b=2.7, c;
    c=add(a,b);
    printf("%lf\n",c);
    return 0;
}

double add(double n1, double n2)
{
    double sum = n1 + n2;
    return sum;
}                               // code 7.5

















#include <stdio.h>

int x = 10, y = 20, z = 30;
int test_function(int x)
{
    x = 20, y = 40, z = 30;
    int y = x;
    x = 2 * y;
    return (x * y);
}

int main()
{
    int x = 10, y = 20, z = 30;
    z = test_function(x);

    printf("%d %d %d\n", x, y, z);
    return 0;
}               // code 7.6













#include<stdio.h>
void test_function(int ara[])
{
    ara[0] = 100;
    return;
}
int main()
{
    int ara [] = {1, 2, 3, 4, 5};
    printf("%d\n", ara[0]);    //output 1

    test_function(ara);
    printf("%d\n", ara[0]);  // output 100

    return 0;
}     //code 7.8







#include<stdio.h>

int fmax(int ara[], int n);

int main()
{
    int ara[] = {-100, 0, 53, 22, 83, 23, 89, -132, 201, 3, 85};
    int n = 11;
    int max = fmax(ara,n);

    printf("%d\n", max);
    return 0;
}


int fmax(int ara[], int n)
{
    int max = ara[0];

    int i;

    for(i=1; i<n; i++)
    {
        if(ara[i]>max)
        {
            max = ara[i];
        }
    }
    return max;
}                               // code 7.7














#include <stdio.h>

// Function to find the minimum value in an array
int findMin(int arr[], int size) {
    int min = arr[0]; // Assume the first element as the minimum

    // Iterate through the array
    for (int i = 1; i < size; i++) {
        // Update min if current element is smaller
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    return min; // Return the minimum value
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5, 8}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to find the minimum value
    int min = findMin(arr, size);

    // Print the minimum value
    printf("Minimum value in the array: %d\n", min);

    return 0;
}













#include <stdio.h>

// Function to find the sum of elements in an array
int findSum(int arr[], int size) {
    int sum = 0; // Initialize sum to zero

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // Add each element to the sum
        sum += arr[i];
    }

    return sum; // Return the sum
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5, 8}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to find the sum of elements
    int sum = findSum(arr, size);

    // Print the sum of elements
    printf("Sum of elements in the array: %d\n", sum);

    return 0;
}















#include <stdio.h>

// Function to find the sum of elements in an array
int findSum(int arr[], int size) {
    int sum = 0; // Initialize sum to zero

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // Add each element to the sum
        sum += arr[i];
    }

    return sum; // Return the sum
}

// Function to find the average of elements in an array
double findAverage(int arr[], int size) {
    // Calculate the sum of elements using the findSum function
    int sum = findSum(arr, size);

    // Calculate the average
    double average = (double)sum / size;

    return average; // Return the average
}

int main() {
    int arr[] = {4, 7, 2, 9, 1, 5, 8}; // Sample array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the function to find the average of elements
    double average = findAverage(arr, size);

    // Print the average of elements
    printf("Average of elements in the array: %.2lf\n", average);

    return 0;
}















// all in one max min sum average from an array

#include <stdio.h>

int arr[] = {3, 4, 6, 7, 14, 16, 21, 23, 99, 298};

// Function to find the maximum value in an array
int findMax(int arr[], int size) {
    int max = arr[0]; // Assume the first element as the maximum

    // Iterate through the array
    for (int i = 1; i < size; i++) {
        // Update max if current element is greater
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max; // Return the maximum value
}

// Function to find the minimum value in an array
int findMin(int arr[], int size) {
    int min = arr[0]; // Assume the first element as the minimum

    // Iterate through the array
    for (int i = 1; i < size; i++) {
        // Update min if current element is smaller
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min; // Return the minimum value
}

// Function to find the sum of elements in an array
int findSum(int arr[], int size) {
    int sum = 0; // Initialize sum to zero

    // Iterate through the array
    for (int i = 0; i < size; i++) {
        // Add each element to the sum
        sum += arr[i];
    }
    return sum; // Return the sum
}

// Function to find the average of elements in an array
double findAverage(int arr[], int size) {
    // Calculate the sum of elements using the findSum function
    int sum = findSum(arr, size);

    // Calculate the average
    double average = (double)sum / size;

    return average; // Return the average
}

int main() {
    //int arr[] = {4, 7, 2, 9, 1, 5, 8}; // Sample array .. I can declare the array elements in here(local) and global way as I did in this code

    int size = sizeof(arr) / sizeof(arr[0]); // Calculate the size of the array

    // Call the functions to find max, min, sum, and average
    int max = findMax(arr, size);
    int min = findMin(arr, size);
    int sum = findSum(arr, size);
    double average = findAverage(arr, size);

    // Print the results
    printf("Maximum value in the array: %d\n", max);
    printf("Minimum value in the array: %d\n", min);
    printf("Sum of elements in the array: %d\n", sum);
    printf("Average of elements in the array: %.2lf\n", average);

    return 0;
}












// Array facts practice all in one type without function

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
        }


    printf("Array Length : %d\n\n", length);

    printf("First Element is : %d\n", firstElement);
    printf("Sixth Element is : %d\n", sixthElement);
    printf("Last Element is : %d\n\n\n", lastElement);

    printf("The maximum integer number in the array is: %d\n", maxNumber);
    printf("The minimum integer number in the array is: %d\n\n", minNumber);

    return 0;
}















#include <stdio.h>

int globalArray[5] = {1, 2, 3, 4, 5}; // Global array

void function() {
    int localArray[3] = {6, 7, 8}; // Local array
    printf("Global array inside function: %d\n", globalArray[0]); // Accessing global array inside function
    printf("Local array inside function: %d\n", localArray[0]); // Accessing local array inside function
}

int main() {
    int localArray[2] = {9, 10}; // Local array
    printf("Global array in main: %d\n", globalArray[0]); // Accessing global array in main
    printf("Local array in main: %d\n", localArray[0]); // Accessing local array in main
    function();
    return 0;
}
















#include <stdio.h>

int Array[5] = {1, 2, 3, 4, 5}; // Global array

void function()
{
    int Array[3] = {6, 7, 8}; // Local array
    printf("Global array inside function not working for local array: %d\n\n", Array[0]); // output will be 6
    printf("If I don't print this inside function array elements then the output will come from Global Array Elements.\n\n");
}

int main()
{
    int Array[2] = {9, 10}; // Local array
    printf("Global and inside function's array is not working for local variable in main cause of main() array[] and the output : %d\n\n", Array[0]); // output 9
    function();
    return 0;
}













#include <stdio.h>

// Function to calculate the area of a circle
double calculateArea(double radius) {
    const double PI = 3.14159; // Define PI constant
    double area = PI * radius * radius; // Calculate area using formula A = πr^2
    return area; // Return the calculated area
}

int main() {
    double radius, area;

    // Input radius from the user
    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    // Call the function to calculate the area
    area = calculateArea(radius);

    // Print the result
    printf("The area of the circle with radius %.2lf is %.2lf\n", radius, area);

    return 0;
}


















#include<stdio.h>

int a[] = {3,4,6,7,11,14,16,20,21,23,27,29,100,298,299,300,144,94,2100,700};  // created an array as global

int fmax(int a[], int size)
{
    int max = a[0], i;

    for(i=1 ; i<size ; i++)
    {
        if(a[i] >  max)
        {
            max = a[i];
        }
    }
    return max;
}

int fmin(int a[], int size)
{
    int min = a[0], i;

    for(i=1; i<size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int fsum(int a[], int size)
{
    int sum = 0, i;

    for(i=0; i<size; i++)   // or I can write like this for(int i=0;i<size;i++) then I don't need to declare int i as i did n every function
    {
        sum += a[i];
    }
    return sum;
}

int favrg(int a[], int size)
{
    int sum = fsum(a,size);

    double avrg = (double)sum/size;

    return avrg;
}

int main()
{
    // a[] = { already declared in global way at the begining of this code}
    int size = sizeof(a) / sizeof(a[0]);

    int max = fmax(a, size);
    int min = fmin(a, size);
    int sum = fsum(a, size);
    int avrg = favrg(a, size);

    printf("The Max num is : %d\nThe Min is %d\nThe Sum is %d\nAverage : %d\n", max, min, sum, avrg);
    return 0;
}















#include <stdio.h>

int main() {
    int ara[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;   // if we don't know the size of array then  int right = size - 1;
    int mid_indx;
    int num;
    scanf("%d", &num);

    for (; low_indx <= high_indx; )    // while loop is better for binary search
    {
        mid_indx = (low_indx + high_indx) / 2;
        if (num == ara[mid_indx]) {
            break;
        }
        if (num < ara[mid_indx]) {
            high_indx = mid_indx - 1;
        } else {
            low_indx = mid_indx + 1;
        }
    }

    if (low_indx > high_indx) {
        printf("%d is not in the array\n", num);
    } else {
        printf("%d is found in the array. It is the %dth element of the array.\n", ara[mid_indx], mid_indx);
    }

    return 0;
}                       // code 8.1 (using for loop instead of while loop















#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If the key is present at the middle
        if (arr[mid] == key) {
            return mid;
        }

        // If the key is smaller, ignore the right half
        else if (arr[mid] > key) {
            right = mid - 1;
        }

        // If the key is larger, ignore the left half
        else {
            left = mid + 1;
        }
    }

    // If the key is not found, return -1
    return -1;
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key, index;

    printf("Enter the key to search: ");
    scanf("%d", &key);

    // Call binarySearch function to search for the key
    index = binarySearch(arr, size, key);

    if (index != -1) {
        printf("Key found at index %d\n", index);
    } else {
        printf("Key not found\n");
    }

    return 0;
}                   // 8.1 binary search with a function
















#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int left = 0;
    int right = size - 1;
    int index = -1; // Initialize index to -1, indicating not found

    // Perform binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If target is found at mid
        if (arr[mid] == target) {
            index = mid;
            break;
        }

        // If target is smaller, ignore right half
        else if (arr[mid] > target) {
            right = mid - 1;
        }

        // If target is larger, ignore left half
        else {
            left = mid + 1;
        }
    }

    // Print result
    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}











#include <stdio.h>

int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 12;

    int left = 0;
    int right = size - 1;
    //int index = -1; // Initialize index to -1, indicating not found

    // Perform binary search
    while (left <= right) {
        int mid = left + (right - left) / 2;

        // If target is found at mid
        if (arr[mid] == target) {
            index = mid;
            break;
        }

        // If target is smaller, ignore right half
        else if (arr[mid] > target) {
            right = mid - 1;
        }

        // If target is larger, ignore left half
        else {
            left = mid + 1;
        }
    }

    // Print result
    if (index != -1) {
        printf("Element %d found at index %d\n", target, index);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}

















#include <stdio.h>

int main() {
    int ara[16] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low_indx = 0;
    int high_indx = 15;   // if we don't know the size of array then  int right = size - 1;
    int mid_indx;
    int num;
    scanf("%d", &num);

    while (low_indx <= high_indx)
        {
            mid_indx = (low_indx + high_indx) / 2;

            if (num == ara[mid_indx])
            {
                break;
            }

            if (num < ara[mid_indx])
            {
                high_indx = mid_indx - 1;
            }
            else
            {
                low_indx = mid_indx + 1;
            }
        }

        if (low_indx > high_indx)
        {
            printf("%d is not in the array\n", num);
        }
        else
        {
            printf("%d is found in the array. It is the %dth element of the array.\n", ara[mid_indx], mid_indx);
        }
    return 0;               // code 8.1 by while loop
}













#include<stdio.h>
int main()
{
    int a[] = {1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100};
    int low=0, high=15, mid, num;
    scanf("%d", &num);

    while(low<=high)
    {
        mid = (low+high)/2;

        if(num==a[mid])
        {
            break;
        }
        else if(num < a[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }

    if(low > high)
    {
        printf("%d is not in the array!\n", num);
    }
    else
    {
        printf("%d is in the array!\nIt's the %dth element of the array", a[mid], mid);
        return 0;
    }
}














#include <stdio.h>
int main()
{
 char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h', '\0', 'i', 's', ' ', 'm',
'y', ' ', 'c', 'o', 'u', 'n', 't', 'r', 'y'};
 printf("%s\n", country);
  return 0;
}











#include <stdio.h>
int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
    int i, length;
    printf("%s\n", country);
    length = 10;
    for(i = 0; i < length; i++) {
    if(country[i] >= 97 && country[i] <= 122) {
        country[i] = 'A' + (country[i] - 'a');
        }
    }
    printf("%s\n", country);
    return 0;
}













#include <stdio.h>
int string_length(char country[])
{
    int i, length = 0;
    for(i = 0; country[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char country[100];
    int length;
    while(1 == scanf("%s", &country))
    {
        length = string_length(country);
        printf("length: %d\n", length);
    }
    return 0;
}                   //code 9.5












#include <stdio.h>
int main()
{
    char ara[100];
    while(NULL != gets(ara))
    {
        printf("%s\n", ara);
    }
    return 0;
}               //code 9.6












#include <stdio.h>
int main()
{
    char ara[100];
    while(NULL != gets(ara))
    {
        printf("%s\n", ara);
    }
    return 0;
}               //code 9.6










#include<stdio.h>
int main()
{
    int i=0;
    while(i==0)
    {
        printf("Hello\n");
        printf("world\n");
    }
}









#include<stdio.h>

int main() {
    int a[4][4] = {{0, 0, 0, 1},{0, 0, 1, 0},{0, 1, 0, 0},{1, 0, 0, 0}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", a[i][j]);
        }

        printf("\n");
    }

    return 0;
}










#include<stdio.h>
int main()
{
    int i=0;
    while(i==0)
    {
        printf("Hello");
        printf("world");
    }
}













#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 's' || str[i] == 'S')
        {
            count++;
        }
    }

    printf("Number of 's' or 'S' in the string: %d\n", count);

    return 0;
}









#include <stdio.h>

int main() {
    char input[100];
    int counts[26] = {0}; // Initialize counts for each alphabet to zero

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    // Remove newline character manually
    for(int i = 0; input[i] != '\0'; i++) {
        if(input[i] == '\n') {
            input[i] = '\0';
            break;
        }
    }

    // Count occurrences of each alphabet
    for(int i = 0; input[i] != '\0'; i++) {
        char c = input[i];
        if(c >= 'a' && c <= 'z') {
            counts[c - 'a']++;
        }
    }

    // Print occurrences of each alphabet
    printf("Occurrences of each alphabet:\n");
    for(int i = 0; i < 26; i++) {
        printf("%c: %d\n", 'a' + i, counts[i]);
    }

    return 0;
}


















#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d\n", i );
        return 0;  // for using this return 0; the output will be 0.. if we don't use this return 0 here then the output ill be as usual 0 to 4....
    }
    return 0;
}













#include <stdio.h>

int main() {
    while(1) // if we use 0 instead of 1 here then it will run but logically This loop will never execute. not gonna give any output. it will be like a blank screen
    {
        printf("This is an infinite loop\n");
        //return 0;  // if we use this return 0 here inside the loop then it won't be an infinite loop and gonna print the line normally once..  and if we don't use the return 0 here inside the loop then it will behave like an infinite loop
    }
    return 0;
}













#include<stdio.h>
int main() {
    // Error occurred during program execution
    return 1; // Program terminated with an error. output will be blank screen/
}













#include<stdio.h>

int f() {
    // Error occurred
    return -1; // Function encountered an error
}
int main(){int f();}














#include<stdio.h>
int func(int x, int y)
{
    return x+y;
}
int main()
{
    int i = 1;

    printf("Start\n");

    int x=7, y =14;

    printf("sum = %d\n", func(x,y));

    while(i <= 10) {
        printf("%d ", i);
        if (i == 6) {
            return 0;
        }
        i++;
    }

    printf("End\n");

    return 0;
}













#include <stdio.h>

#define MAX_NUMBERS 10

int main() {
    int numbers[MAX_NUMBERS];
    int count, i;
    float sum = 0, average;

    printf("Enter the count of numbers (up to %d): ", MAX_NUMBERS);
    scanf("%d", &count);

    if (count <= 0 || count > MAX_NUMBERS) {
        printf("Invalid count of numbers. Exiting...\n");
        return 0;
    }

    printf("Enter %d numbers:\n", count);

    for (i = 0; i < count; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    average = sum / count;

    printf("\nEntered numbers: ");

    for (i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }

    printf("\nSum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}














#include <stdio.h>
#include <stdlib.h>

int func(int x, int y) {
    return x + y;
}

int main() {
    int i = 1;
    int x, y;

    printf("Enter two numbers (separated by space): ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Error: Invalid input\n");
        return 1; // Return non-zero to indicate error
    }

    printf("Start\n");
    printf("Sum = %d\n", func(x, y));

    while (i <= 10) {
        printf("%d ", i);
        if (i == 6) {
            printf("\nError: i reached 6\n");
            return 1; // Return non-zero to indicate error
        }
        i++;
    }

    printf("\nEnd\n");

    return 0;
}















#include<stdio.h>
int main()
{
    int i=10;
    while(i>0)
    {
        printf("hey");
        printf("world!");
        return 0;  // this return 0 will stop the loop and terminate the program successfully that's hy output won't be infinte loop. it will be heyworld for once
    }
    //return 0;
}












#include<stdio.h>
int main()
{
    int i = 0;
    while (i < 5)
    {
        printf("%d\n", i);
        //i++;   // output 0-4
    }
    //i++;  // infinite loop for using this or without this here after loop
}













#include<stdio.h>
int main()
{
   int i = 0;
    do
    {
        printf("%d\n", i);
        i++;   //without using this increment it ill be infinite loop but after using this i++ we get output 0-4
    }
    while (i < 5);
    return 0;
}














#include<stdio.h>
int main()
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", i);
        i += 2;   // output should be 0 2 4  but compiler showing 0 3
    }
    return 0;
}









#include<stdio.h>
int main()
{
    for(int i = 1; i < 10; i++)
    {
        printf("%d ", i);
        i += 3;   // Incrementing i by 3 in each iteration
    }
    return 0;
}










#include<stdio.h>
int main()
{
    for(int i = 10; i > 0; i--)
    {
        printf("%d ", i);
        i -= 2;   // output should be 10 8 6 4 2  but compiler showing 10 7 4 1
    }
    return 0;
}












#include <stdio.h>

int main() {
    for (;;) {
        printf("This is an infinite loop using for loop.\n");
    }
    return 0;
}








#include <stdio.h>

int main() {
    while (1) {
        printf("This is an infinite loop using while loop.\n");
    }
    return 0;
}











#include <stdio.h>

int main() {
    do {
        printf("This is an infinite loop using do-while loop.\n");
    } while (1);
    return 0;
}













#include<stdio.h>
int main()
{
    for(int i = 0; i < 5; // no increment)
    {
        printf("%d ", i);
        //return 0;  // if ths return 0 using here then output will be 0 for once
    }
    return 0;  // infinte loop 0000000000........ like this
}














#include<stdio.h>
int main()
{
    int i = 5;
    while(i--)    // if we use while(i++) it will be infinite loop
    {
        printf("Hello ");
        //return 0;  // if this return 0 using here then output will be hello for once. therwise it will give us hello hello hello hello hello for 5 times
    }
    return 0;
}












#include<stdio.h>
int main()
{
    int x = 5;
    do
    {
        printf("%d ", x++);   //  The output will be 5. Although the condition x < 5 is false initially, the do-while loop executes the code block at least once before checking the condition. Therefore, 5 is printed once before the loop terminates.
    }
    while(x < 5);
    return 0;
}












#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ", i);
        if(i==2)
        {
            break;
        }
    }
    return 0;
}













// square pattern

#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= cols; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}













//Right Half Pyramid or Triangle Pattern:

#include <stdio.h>

int main()
{
    int rows, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}











//diamond shape
#include <stdio.h>

int main() {
    int n, i, j;

    printf("Enter the number of rows (must be odd): ");
    scanf("%d", &n);
    printf("\n");

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for (i = n-1; i >= 1; i--)
    {
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= 2 * i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}














//square shape
#include<stdio.h>
int main()
{
    int i,j,rows,cols;
    printf("Rows and columns : ");
    scanf("%d %d", &rows, &cols);
    printf("\n");
    printf("Here is the Square shape.\n");
    printf("\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=cols; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}













//Right Half Pyramid or triangle shape
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("rows: ");
    scanf("%d", &rows);

    printf("\n");
    printf("Here is the Right Half Pyramid or Triangle shape!\n");
    printf("\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}














//full pyramid
#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("rows : ");
    scanf("%d", &rows);

    printf("Here's the full pyramid\n");
    printf("\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}















#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("rows:");
    scanf("%d", &rows);

    printf("Here's the inverted full pyramid\n");
    printf("\n");

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}















// Diamond Shape (Full pyramid + inverted full pyramid = A Diamond Shape) just inverted full pyramid e for(i=rows-1 and baki shob same)

#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("rows:");
    scanf("%d", &rows);

    printf("Here's the Diamond!\n");
    printf("\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }                    //till now it's a full pyramid and below part isgonna be inverted hal pyramid and then totally it will be a diamond shape

    for(i=rows-1; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}










// diamond shape practice
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("rows:");
    scanf("%d",&rows);
    printf("here's the diamond\n");
    printf("\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=rows-1; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=2*i-1; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}











//loop control
#include<stdio.h>
int main()
{
    int i,j;
    for(i=0, j=10 ; i<5 && j>5 ; i++, j--)   //  multiple loop control variables in a single loop to control different aspects of the loop behavior...For example, in nested loops, each loop may have its own loop control variable.
    {
        printf("i = %d and j = %d\n", i, j);   // out put will be i = 0 and j = 10, i = 1 and j = 9, i = 2 and j = 8, i = 3 and j = 7, i = 4 and j = 6
    }
    return 0;
}














// Loop Terminating Condition: To terminate a loop based on user input rather than a condition, you can use an infinite loop and include logic to check for the termination condition inside the loop. For example:
#include<stdio.h>
int main()
{
    char input;
    while (1)
    {
        printf("Enter a character (q to quit): ");
        scanf(" %c", &input);
        if (input == 'q')
        {
            break;
        }
    }
    return 0;
}













//Loop Variations: Pre-increment (++i) and post-increment (i++) operators increment the value of a variable (i) by 1 before and after the current operation, respectively. Within a loop, the primary difference between them is when the increment occurs. Pre-increment increments the variable before using its value in the current operation, while post-increment uses the current value and then increments. For example:
//loop variation : pre increment : ++i and post increment : i++
#include <stdio.h>

int main() {
    printf("\n i = \n");
    for (int i = 0; i <= 5; i++)
    {
        printf("Value of i: %d\n", i);
    }

    printf("\n");

    // Pre-increment
    printf("Pre-increment:\n");
    for (int i = 0; i <= 5; ++i)
    {
        printf("Value of ++i: %d\n", ++i);
    }
     printf("\n");


     // Pre-increment
    printf("Pre-increment:\n");
    for (int i = 0; i <= 5; ++i)
    {
        printf("Value of i: %d\n", i);
    }

     printf("\n");


     // Post-increment
    printf("\nPost-increment:\n");
    for (int i = 0; i <= 5; i++)
    {
        printf("Value of i: %d\n", i);
    }
     printf("\n");


    // Post-increment
    printf("\nPost-increment:\n");
    for (int i = 0; i <= 5; i++)
    {
        printf("Value of i++: %d\n", i++);
    }

    return 0;
}
















// Loop Patterns: You can create loop patterns that alternate between two different characters or numbers by using conditions within the loop. For example, to print alternating characters 'A' and 'B':

#include<stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i % 2 == 0)
        {
            printf("A ");
        }
        else
        {
            printf("B ");
        }
    }
    return 0;    // output will be like : A B A B A B A B A B
}














// Loop Manipulation: Modifying the loop control variable inside the loop body can alter the loop's behavior. For example:

#include<stdio.h>
int main()
{
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", i);

        if (i == 5)
        {
            i += 2;  // Increment i by 2 when it reaches 5
        }
    }
    return 0; // output will be 0 to 5 and 8, 9
}















#include<stdio.h>
int main()
{
    int i=0;
    while (i<5)
    {
        printf("C");
    }
    // i++; usng this or not, this program is an infinite loop.
}













#include<stdio.h>
int main()
{
    int i=10;
    while(i>0)
    {
        printf("Shamim ");
        printf("Rahman ");
        printf("Sam...");
        //return 0;  // if we use this then it will exit the loop and terminate the program and then the output will be Shamim Rahman Sam... for once..... otherwise if we don't use this return 0 here inside loop then it will be infinite loop....
    }
    return 0;
}










#include<stdio.h>
int main()
{
    int i=0;
    while(0)    // it will print nothing. The while loop condition while(0) is always false because 0 is considered as false in C. Therefore, the loop body will never execute.
    {
        printf("yo");
    }
    return 0;
}











#include<stdio.h>
int main()
{
    int i=0;
    while(i++)
    {               // it will print nothing.. here i++ means 0 as post increment show the current value at first then it increment by 1. so i    {
        printf("SRS");
    }
    return 0;
}











#include<stdio.h>
int main()
{
    int i=7;  // if we use any int number here and use this expression while(i++) then it will be infinite loop
    while(i++)  // here i++ means 7 as post increment show the current value at first then it increment by 1. so i=7 and condition is  true so it will be infinite loop
    {
        printf("SRS...");
    }
    return 0;
}











#include<stdio.h>
int main()
{
    //int i=0;  // if we use any int number here and use this expression while(i++) then it will be infinite loop
    while(7)  // when we use any int number instead of 0 here then it will be infinite loop as 1 or any number here means true but boolean 0 means false and that's why when we use while(0) then that show nothing to the screen cause  then program won't execute ..
    {
        printf("SRS...");
    }
    return 0;
}












#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<10; i++)
    {
        printf("%d ",i);

        i+=2;
    }
    return 0;
}           // output will be 0 3 6 9














#include <stdio.h>

int main() {
    int num = 10;       // int byte size = 4 bytes   // Range Formulae 2^n - 1 so 4bytes = 4*8 = 32 bits so, 2^32-1 = 4294967295
    float f = 3.14;         // float byte size  = 4 bytes
    char ch = 'A';          // size 1 byte
    double d = 3.14159265358979323846; // size 8 bytes
    _Bool flag = 1;             // size 1 byte

    printf("Integer: %d\n", num);
    printf("Float: %f\n", f);
    printf("Character: %c\n", ch);
    printf("Double: %lf\n", d);
    printf("Boolean: %d\n", flag);

    return 0;
}






















// C program to illustrate for loop
#include <stdio.h>

// Driver code
int main()
{
  int i;

  for (i = 1; i <= 10; i++)
  {
    printf( "Hello World\n");
  }
  return 0;
}













// C program to illustrate
// while loop
#include <stdio.h>

// Driver code
int main()
{
  // Initialization expression
  int i = 2;

  // Test expression
  while(i < 10)
  {
    // loop body
    printf( "Hello World\n");

    // update expression
    i++;   // if it's not used then it will be an infinity loop

    //return 0;  //if we use return 0 here then it will exit the loop and terminate the program and that's why the output will be hello world for once
  }
  return 0; // output will be hello world for 8 times as it will be 2-9 total 8 times
}














// C program to illustrate
// do-while loop
#include <stdio.h>

// Driver code
int main()
{
  // Initialization expression
  int i = 2;

  do
  {
    // loop body
    printf( "Hello World\n");

    // Update expression
    i++;

    // Test expression
  }  while (i < 1);   // condition is false so it will execute for once as it is a do while loop

  return 0;
}














#include<stdio.h>
int main()
{
    int i=0;
    while(i<100)  // if I use any number less than 10 here as like 3 then the output will be SRS for 3 times and then the program will be terminated. and if we use more than 10 here then the program output will be 10 times SRS and then Shamim Rahman Sam and then it will be terminated
    {
        printf("SRS...\n");
        i++;

        if(i==10) // if we don't use this condition here then it will be infinite loop
        {
            printf("\nShamim Rahman Sam...\n");
            break;
        }
       // return 0;   // if e use return 0 here then the output wlll be SRS for 1 time.
    }
    return 0;
}













#include <stdio.h>

#define PI 3.14159    // The line #define PI 3.14159 is a preprocessor directive in C. It tells the compiler to replace every occurrence of PI in the code with 3.14159 before the compilation process begins. This is known as a macro definition...it means  whenever the compiler encounters PI, it replaces it with 3.14159. This makes the code more readable and maintainable, especially if the value of PI needs to be changed in multiple places within the code.

int main() {
    double radius = 5.0;
    double area;

    // Calculate the area of a circle using the defined PI constant
    area = PI * radius * radius;

    printf("Area of the circle: %lf\n", area);

    return 0;
}














#include <stdio.h>

#define PI 3.14159

int main() {
    const int MAX_VALUE = 100;

    printf("Max Value: %d\n", MAX_VALUE);
    printf("Value of PI: %lf\n", PI);

    return 0;
}













#include <stdio.h>

int main() {
    int a = 10, b = 5;
    int result;

    result = a + b;
    printf("Addition: %d\n", result);

    result = a * b;
    printf("Multiplication: %d\n", result);

    result = a > b ? a : b;
    printf("Max Value: %d\n", result);

    return 0;
}













// control structures // conditionals and loops // if else switch and for while do while
#include <stdio.h>

int main() {
    int num = 5;

    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n");
    }

    switch (num) {
        case 1:
            printf("One\n");
            break;
        case 2:
            printf("Two\n");
            break;
        default:
            printf("Other\n");
    }

    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", i);
    }
    printf("\n");

    int j = 0;
    while (j < 5) {
        printf("%d ", j);
        j++;
    }
    printf("\n");

    int k = 0;
    do {
        printf("%d ", k);
        k++;
    }
    while (k < 5);
    printf("\n");

    return 0;  // output Number is positive.     Other     0 1 2 3 4      0 1 2 3 4      0 1 2 3 4
}














// function
#include<stdio.h>

int add(int x, int y)   // crated own function
{
    return x+y;
}

int main()
{
    int result = add(7,14);   // call the function add(x,y)
    printf(" x+y is %d\n", result);
    return 0;
}













#include <stdio.h>

int main() {
    int arr[5] = {0, 1, 2, 3, 4, 5, 6, 7};
    int i;

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}











// array
#include<stdio.h>
int main()
{
    int a[] = {0,1,2,3,4,5,6,7,8,9,10};
    int i;

    for(i=0; i<5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;   // output will be 0 1 2 3 4
}












//pointer
#include <stdio.h>

int main() {
    int num = 10;
    int *ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value of num using pointer: %d\n", *ptr);

    return 0;
}















#include<stdio.h>
int main()
{
    int n = 10;

    int *ptr = &n;
    int* p = &n;

    printf("value of num is %d\n", n);
    printf("value of num using pointer is %d\n", *ptr);
    printf("%d\n", *p);

    printf("\n");

    printf("address of num is %p\n", &n);
    printf("%p\n", p);
    printf("%p\n", ptr);

    return 0;
}
















#include <stdio.h>

int main() {
    // Declaration and initialization of a 2D array
    int matrix[3][3] =
    {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing and printing elements of the 2D array
    printf("Elements of the 2D array:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}













// 2D Array Practice
#include<stdio.h>
int main()
{
    int matrix[4][4] =
    {
        {0,0,0,1},
        {0,0,1,0},
        {0,1,0,0},
        {1,0,0,0}
    };

    printf("2D Array Elements : \n\n");

    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}














//string practice
#include<stdio.h>
#include<string.h>

int main()
{
    char s1[] = "Shamim Rahman Sam...";
    char s2[20];

    strcpy(s2, s1);
    printf("Copied string : %s\n", s2);

    return 0;
}














// structure practice

#include <stdio.h>

struct Student
{
    int roll_no;
    char name[20];
};

int main() {
    struct Student s;

    s.roll_no = 101;
    strcpy(s.name, "John");

    printf("Roll No: %d\n", s.roll_no);
    printf("Name: %s\n", s.name);

    return 0;
}














#include<stdio.h>
int main()
{
    int a[] = {14,2,3,4,5};
    printf("%d\n", *a + 2);   // *a dereferences the pointer to the first element of the array a, effectively giving the value of the first element, which is 14.
    return 0;    // Adding 2 to *a results in 14 + 2, which equals 16.
}













// structure practice
#include<stdio.h>

struct student
{
    int roll;
    char name[20];
};

int main()
{
    struct student s;

    s.roll = 144;
    strcpy(s.name, "SHAMIM RAHMAN SAM");

    printf("Roll no is %d\n", s.roll);
    printf("Name is %s\n", s.name);
}
















// pattern programs


// right half pyramid with * ** *** ...
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}














// right half pyramid with any integer number which we give as input that will show like this 1 11 111 1111 ......
// this program can be possible as I take the input as character instead of integer as it showing the same number 3 33 333........

#include<stdio.h>
int main()
{
    int i,j,num,rows;
    printf("Rows: ");
    scanf("%d", &rows);
    printf("print this : ");
    scanf("%d", &num);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", num);
        }
        printf("\n");
    }
    return 0;
}













// right half pyramid with any letter small or capital  such as a aa aaa .....
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("Rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'S');   // printf("%c ", 'm');  // like this we can show capital/small characters in a right half pyramid system
        }
        printf("\n");
    }
    return 0;
}













// all characters in one code as I'm taking these as input in scanf as char

// right half pyramid for similar characters such as * ** ***.. $ $$ $$$... 7 77 777... etc with any character and number as character which we give as input

#include<stdio.h>
int main()
{
    int i,j,rows;
    char chr;

    printf("Rows: ");
    scanf("%d", &rows);

    printf("print this : ");
    scanf("\n %c", &chr);  // must be add a space before %c to consume the newline character or use new line \n

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", chr);
        }
        printf("\n");
    }
    return 0;
}











// right half pyramid with numbers 1 12 123 like that
#include<stdio.h>
int main()
{
    int i,j,rows;
    printf("rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}













// right half pyramid with a ab abc ....
#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'a'+(j-1));   // if i & j value = 0 instead of 1 then i can write her {printf("%c", 'a' + j)}
        }
        printf("\n");
    }
    return 0;
}











// right half pyramid with A AB ABC .....
#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A'+ (j-1));  // if i & j value = 0 instead of 1 then i can write her {printf("%c", 'A' + j)}
        }
        printf("\n");
    }
    return 0;
}














// right half pyramid with smiley character.. suddenly invented thisby implementing && || in printf

#include<stdio.h>
int main()
{
    int i, j, rows;
    printf("rows: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {   // Depending on the environment and the terminal being used, this non-printable control character may be interpreted as a smiley emoji or other graphical symbol.
            printf("%c ", 'a' && 's');    // printf("%c ", 'S' && 'm');
        }   // if we use anything like this here with && || then the output will show smiley emojis
        printf("\n");
    }
    return 0;
}














//square shape with any character like *** *** ***...

#include<stdio.h>
int main()
{
    int i,j,s,row,col;

    printf("ROWS AND COLUMNS : ");
    scanf("%d %d", &row, &col);

    printf("character is : ");
    scanf(" %c", &s);
    printf("\nThe Square shape\n\n");

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }
    return 0;
}
















//square shape with 1 2 3 4   1 2 3 4 like this

#include<stdio.h>
int main()
{
    int i,j,s,row,col;

    printf("ROWS AND COLUMNS : ");
    scanf("%d %d", &row, &col);

    printf("\nThe Square shape\n\n");

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("%d ", j);  // printf("%d ", i) // check the output as we want row as output instead of column
        }
        printf("\n");
    }
    return 0;
}














//square shape with a b c   a b c.... like this

#include<stdio.h>
int main()
{
    int i,j,s,row,col;

    printf("ROWS AND COLUMNS : ");
    scanf("%d %d", &row, &col);

    printf("\nThe Square shape\n\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)  // changed both i, j  condition a lil bit to get the proper output as i want
        {
            printf("%c ", 'A' + j); // printf("%c ", 'a' + j);    // printf("%c ", 'A' + i);     // printf("%c ", 'a' + i);
            // check the output as we want row as output instead of column
        }
        printf("\n");
    }
    return 0;
}















//all square pattern in one
//square shape with any character like *** *** ***...

#include<stdio.h>
int main()
{
    int i,j,s,row,col;

    printf("ROWS AND COLUMNS : ");
    scanf("%d %d", &row, &col);

    printf("character is : ");
    scanf(" %c", &s);

    printf("\nThe Square shape\n\n");

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    printf("\n\n");

    printf("\nThe Square shape\n\n");

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("%d ", j);  // printf("%d ", i) // check the output as we want row as output instead of column
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            printf("%d ", i);  // printf("%d ", i) // check the output as we want row as output instead of column
        }
        printf("\n");
    }

    printf("\n\n\n\n\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)  // changed both i, j  condition a lil bit to get the proper output as i want
        {
            printf("%c ", 'A' + j); // printf("%c ", 'a' + j);    // printf("%c ", 'A' + i);     // printf("%c ", 'a' + i);
            // check the output as we want row as output instead of column
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)  // changed both i, j  condition a lil bit to get the proper output as i want
        {
            printf("%c ", 'A' + i); // printf("%c ", 'a' + j);    // printf("%c ", 'A' + i);     // printf("%c ", 'a' + i);
            // check the output as we want row as output instead of column
        }
        printf("\n");
    }
    return 0;
}




















//practice again Right half pyramid for any character even also numbers as character
#include<stdio.h>
int main()
{
    int i, j, rows;
    char s;

    printf("Rows are : ");
    scanf("%d", &rows);

    printf("Character is : ");
    scanf(" %c", &s);
    // in one line :   scanf("%d %c", &rows, &s);

    printf("Here's the Right Half Pyramid\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }
    return 0;
}

















// practice again right half pyramid with integer numbers like 1 12 123...
#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Rows : ");
    scanf("%d", &rows);

    printf("Here's The Right Half Pyramid with integer numbers\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);   //  printf("%c ", j);  by this character otput mistake i can get emojis from compiler as it's a wrong printf and non printable. cause output character chaileo j diye integer numbers mean hocche. so character chaile 'A'+j dite hobe
        }
        printf("\n");
    }
    return 0;
}













// right half pyramid with a ab abc/ A AB ABC...
#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Rows are: ");
    scanf("%d",&rows);

    printf("Here's The Right Half Pyramid with A B C\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c ", 'A'+ j);  //  printf("%c ", 'a'+ j);
        }
        printf("\n");
    }
    return 0;
}














#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Rows are: ");
    scanf("%d",&rows);

    printf("Here's The Right Half Pyramid with A B C\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<=i; j++)
        {
            printf("%c ", 'A'+ j+2);  //  printf("%c ", 'a'+ j+2);  that's how it will not start from A. it will start from C by adding 2 columns as we did j+2
        }
        printf("\n");
    }
    return 0;
}














// practice again right half pyramid with integer numbers like 1 12 123...
#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Rows : ");
    scanf("%d", &rows);

    printf("Here's The Right Half Pyramid with integer numbers\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%d ", j+3);   // by this j+3 the output will start fro 4 45 456 ... like this as it started from 1 condition wise that's why j+3 = 1+3 = 4...
        }
        printf("\n");
    }
    return 0;
}















#include<stdio.h>
int main()
{
    int i, j, rows;

    printf("Rows are : ");
    scanf("%d", &rows);


    printf("Here's the Right Half Pyramid\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}














//all in one
//right half pyramid all in one (with numbers 123 12 1 & characters ABC AB A and abc ab a and also any characters like *** ** *....even also with not only column system but also with row system

#include<stdio.h>
int main()
{
    int i,j,rows;
    char s;

    printf("Rows are : ");
    scanf("%d", &rows);

    printf("\n");

    printf("character : ");
    scanf(" %c", &s);

    printf("\nHere's the right half pyramid for similar characters\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    printf("\n\n\n");


    printf("\nHere's the right half pyramid for 123 or abc\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%d ", j);   // j+1 cause j=1 so 0+1 = 1
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%d ", i);   // j+1 cause j=1 so 0+1 = 1
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    for(i=0; i<rows; i++)
    {
        for(j=0; j<=i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%c ", 'A' + j);  // here's no needed j+1  cause A is in 0 value and B in value 1 SO j+1 means it will start from B
            //printf("%c ", 'a' + j) // for small letters output
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<=i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%c ", 'A' + i);  //printf("%c ", 'a' + i) // for small letters output
        }
        printf("\n");
    }

    return 0;
}





















//inverted right half pyramid with characters  *** ** *

#include<stdio.h>
int main()
{
    int i,j,rows;
    char s;

    printf("Rows are : ");
    scanf("%d", &rows);

    printf("character : ");
    scanf(" %c", &s);

    printf("\nHere's the inverted right half pyramid\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<rows-i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }
    return 0;
}













//inverted right half pyramid with integer numbers  123 12 1
#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Rows are : ");
    scanf("%d", &rows);

    printf("\nHere's the inverted right half pyramid\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=0; j<=rows-i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%d ", j+1);   // j+1 cause j=1 so 0+1 = 1
        }
        printf("\n");
    }
    return 0;
}













//inverted right half pyramid with characters ABC AB A
#include<stdio.h>
int main()
{
    int i,j,rows;

    printf("Rows are : ");
    scanf("%d", &rows);

    printf("\nHere's the inverted right half pyramid\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=0; j<=rows-i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%c ", 'A' + j );  // here's no needed j+1  cause A is in 0 value and B in value 1 SO j+1 means it will start from B
        }
        printf("\n");
    }

    printf("\n\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=0; j<=rows-i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%c ", 'a' + j );  // here's no needed j+1  cause A is in 0 value and B in value 1 SO j+1 means it will start from B
        }
        printf("\n");
    }
    return 0;
}

















//all in one
//inverted right half pyramid with numbers 123 12 1 & characters ABC AB A and abc ab a and also any characters like *** ** *....even also with not only column system but also with row system

#include<stdio.h>
int main()
{
    int i,j,rows;
    char s;

    printf("Rows are : ");
    scanf("%d", &rows);

    printf("\n");

    printf("character : ");
    scanf(" %c", &s);

    printf("\nHere's the inverted right half pyramid for similar characters\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<rows-i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    printf("\n\n\n");


    printf("\nHere's the inverted right half pyramid for 123 or abc\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=0; j<=rows-i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%d ", j+1);   // j+1 cause j=1 so 0+1 = 1
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=0; j<=rows-i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    for(i=1; i<=rows; i++)
    {
        for(j=0; j<=rows-i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%c ", 'A' + j +2);  // here's no needed j+1  cause A is in 0 value and B in value 1 SO j+1 means it will start from B
            //printf("%c ", 'a' + j) // for small letters output
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<rows-i; j++)  //changed j=1 by j=0 to get the output as i want
        {
            printf("%c ", 'A' + i);   //printf("%c ", 'a' + i) // for small letters output
        }
        printf("\n");
    }

    return 0;
}















//full pyramid with even number can be possible by this way
#include<stdio.h>
int main()
{
    int i,j,k,rows;

    printf("rows are : ");
    scanf("%d", &rows);

    printf("\n\nHere's the full pyramid with even number\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(k=1; k<=i; k++)
        {
            printf("%d ", k);  // also can be possible with abc or aaa or with any character
        }
        printf("\n");
    }
    return 0;
}

















// all in one
// left half pyramid pattern with integer numbers 123, abc and any character * or anything even also with not only column system but also with row system
#include<stdio.h>
int main()
{
    int i, j, rows;
    char s;

    printf("Rows: ");
    scanf("%d", &rows);

    printf("Character: ");
    scanf(" %c", &s);

    printf("\nHere's the left half pyramid with any character *\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*(rows-i)-1; j++)
        {
            printf(" ");
        }

        for(j=0; j<=i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    printf("\n\n\n");

    printf("\n\nHere's the left pyramid for 123 and abc\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*(rows-i)-1; j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*(rows-i)-1; j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("%d ", i+1);
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*(rows-i)-1; j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*(rows-i)-1; j++)
        {
            printf(" ");
        }
        for(j=0; j<=i; j++)
        {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }
    return 0;
}















// all in one
// inverted left half pyramid pattern with integer numbers 123, abc and any character * or anything even also with not only column system but also with row system
#include<stdio.h>
int main()
{
    int i, j, rows;
    char s;

    printf("Rows: ");
    scanf("%d", &rows);

    printf("Character: ");
    scanf(" %c", &s);

    printf("\nHere's the inverted left half pyramid with any character *\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*i; j++)
        {
            printf(" ");
        }

        for(j=0; j<rows-i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    printf("\n\n\n");

    printf("\n\nHere's the inverted left pyramid for 123 and abc\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*i; j++)
        {
            printf(" ");
        }
        for(j=0; j<rows-i; j++)
        {
            printf("%d ", j+1);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*i; j++)
        {
            printf(" ");
        }
        for(j=0; j<rows-i; j++)
        {
            printf("%d ", i+1);
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*i; j++)
        {
            printf(" ");
        }
        for(j=0; j<rows-i; j++)
        {
            printf("%c ", 'A' + j);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=0; i<rows; i++)
    {
        for(j=0; j<2*i; j++)
        {
            printf(" ");
        }
        for(j=0; j<rows-i; j++)
        {
            printf("%c ", 'A' + i);
        }
        printf("\n");
    }
    return 0;
}




















// all in one
// Full pyramid pattern with integer numbers 123, abc and any character * or anything even also with not only column system but also with row system
#include<stdio.h>
int main()
{
    int i, j, rows;
    char s;

    printf("Rows: ");
    scanf("%d", &rows);

    printf("Character: ");
    scanf(" %c", &s);

    printf("\nHere's the full pyramid with any character *\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    printf("\n\n\n");

    printf("\n\nHere's the full pyramid for 123 and abc\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }
    return 0;
}


















// all in one
// inverted Full pyramid pattern with integer numbers 123, abc and any character * or anything even also with not only column system but also with row system
#include<stdio.h>
int main()
{
    int i, j, rows;
    char s;

    printf("Rows: ");
    scanf("%d", &rows);

    printf("Character: ");
    scanf(" %c", &s);

    printf("\nHere's the inverted full pyramid with any character *\n\n");

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }

        for(j=1; j<=i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    printf("\n\n\n");

    printf("\n\nHere's the inverted full pyramid for 123 and abc\n\n");

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    printf("\n\n");

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }
    return 0;
}



















// diamond shape (full + inverted full pyramid = diamond) with numbers, alphabets and characters
#include<stdio.h>
int main()
{
    int i,j,rows;
    char s;

    printf("rows:");
    scanf("%d",&rows);

    printf("character : ");
    scanf(" %c", &s);

    printf("here's the diamond with characters like *\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    for(i=rows-1; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    printf("\n\n\n\nHere's the diamond with numbers and alphabets\n\n");

    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    for(i=rows-1; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    for(i=rows-1; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n\n\n\n\n\n\n");


    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    for(i=rows-1; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    for(i=1; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }

    for(i=rows-1; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}



















//Hourglass pattern. inverted diamond shape (inverted + full pyramid = diamond) with numbers, alphabets and characters
#include<stdio.h>
int main()
{
    int i,j,rows;
    char s;

    printf("rows:");
    scanf("%d",&rows);

    printf("character : ");
    scanf(" %c", &s);

    printf("here's the diamond with characters like *\n\n");

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    for(i=2; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", s);
        }
        printf("\n");
    }

    printf("\n\n\n\nHere's the diamond with numbers and alphabets\n\n");

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    for(i=2; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    printf("\n\n\n\n");


    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    for(i=2; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    printf("\n\n\n\n\n\n\n");


    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    for(i=2; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + j - 1);
        }
        printf("\n");
    }

    printf("\n\n\n\n");

    for(i=rows; i>=1; i--)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }

    for(i=2; i<=rows; i++)
    {
        for(j=1; j<=rows-i; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("%c ", 'A' + i - 1);
        }
        printf("\n");
    }

    return 0;
}















// C program for infinite loop
// using for, while, do-while
#include <stdio.h>

// Driver code
int main()
{
    for (;;) {
        printf("Infinite-loop\n");
    }

    while (1) {
        printf("Infinite-loop\n");
    }

    do {
        printf("Infinite-loop\n");
    } while (1);

    return 0;
}















//print “Hello World” without semicolon?
#include <stdio.h>
int main(void)
{
    if (printf("Hello World")) { }
}











#include<stdio.h>
void main()
{

} // output blank screen. // Process returned 1 (0x1) //The process returning "1 (0x1)" typically indicates that the program or command exited with an error.













// C program to print hello-world
// without using semicolon
#include <stdio.h>

// Driver code
int main()
{
	// This will print the hello-world
	// on the screen without giving any error
	if (printf(“Hello - World”)) {
	}
	return 0;
}








#include <stdio.h>
int main(void)
{
    if (printf("Hello World")) { }
}















// C program to swap two variables
// without using a third variable
#include <stdio.h>

int main()
{
	// Variable declaration
	int var1 = 50;
	int var2 = 60;

	printf(
		"Values before swap are var1 = %d and var2 = %d\n",
		var1, var2);

	// var1 = 110 ( 50 + 60)
	var1 = var1 + var2;

	// var2 = 50 (110 - 60)
	var2 = var1 - var2;

	// var1 = 60 (110 - 50)
	var1 = var1 - var2;

	printf("Values after swap are var1 = %d and var2 = %d",
		var1, var2);

	return 0;
}


















#include<stdio.h>
int main()
{
    int x,y;
    x=1;
    y=x;
    x=3;
    y=x;
    x=7;
    printf("%d %d", x,y);
}
















#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        printf("%c is vowel\n", ch);
    }
    else {
        printf("%c is consonant\n", ch);
    }
}
















#include<stdio.h>
int main()
{
    int n, i=1;
    scanf("%d",&n);

    while(i<=10)
    {
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}











#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1;i<=10;i++)
    {
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}











#include<stdio.h>
int main()
{
    int n,i=1;
    scanf("%d",&n);

    for( ; ; )
    {
        printf("%d x %d = %d\n", n,i,n*i);
        i++;

        if(i>10)
        {
            break;
        }
    }
    return 0;
}














#include<stdio.h>
int main()
{
    int n=7,i=1,m=0;
    for(i=1;i<=10;i++)
    {
        m=m+n;
        printf("%d x %d = %d\n", n,i,m);
    }
    return 0;
}












#include<stdio.h>
int main()
{
    int n,i;

    for(n=1;n<=20;n++)
    {
        for(i=1;i<=10;i++)
        {
            printf("%d x %d = %d\n",n,i,n*i);

            if(i==10)
            {
                printf("\n\n");
            }
        }
    }
    return 0;
}












// 1-20 namta by 2D array
#include <stdio.h>
int main()
{
    int namta[20][10];
    int row, col;

    for (row = 0; row < 20; row++)
    {
        for(col = 0; col < 10; col++)
        {
            namta[row][col] = (row + 1) * (col + 1);
            printf("%d x %d = %d\n", (row + 1), (col + 1), namta[row][col]);
        }
        printf("\n");
    }


    return 0;
}















#include<stdio.h>
int main()
{
    int a=5,b=2,c=3;
    int result= a * (b + c) / b - c;
    printf("%d", result);
    return 0;
}














#include<stdio.h>
int main()
{
    int i;
    for(i=0; i<5; ++i) // if we use i++ here still the output will 0124
    {
        if(i==3)
        {
            continue;
        }
        printf("%d",i);
    }
}













// from subeen's book 4.11
// I made it with count times
#include<stdio.h>
int main()
{
    int a,b,c;
    int count=1;

    for(a=1; a<=3; a++)
    {
        for(b=1; b<=3; b++)
        {
            for(c=1; c<=3; c++)
            {
                printf("%d\t %d\t %d\t Count: %d\n",a,b,c,count);
                count++;
            }
        }
    }
    return 0;
}
















#include<stdio.h>
int main()
{
    int a,b,c,count=1;

    for(a=1; a<=3; a++)
    {
        for(b=1; b<=3 && b!=a; b++)
        {
            for(c=1; c<=3 && c!=a && c!=b; c++)
            {
                printf("%d\t %d\t %d\t Count: %d\n",a,b,c,count);
                count++;
            }
        }
    }
    return 0;
}














#include<stdio.h>
int main()
{
    int a,b,c,count=1;

    for(a=1; a<=3; a++)
    {
        for(b=1; b<=3; b++)
        {
            for(c=1; c<=3; c++)
            {
                if(b!=a && c!=a && c!=b)
                {
                    printf("%d\t %d\t %d\t Count: %d\n", a, b, c, count);
                    count++;
                }
            }
        }
    }

    return 0;
}


















//prob 1 // code 5.1 of subeen's book
#include<stdio.h>
int main()
{
    int plus=15, minus=5, x, y;

    x = (plus + minus) / 2;
    y = (plus - minus) / 2;

    printf("x is %d and y is %d\n", x, y);
    return 0;
}













// prob 2 // code 5.2

#include<stdio.h>
int main()
{
    double a1,a2,b1,b2,c1,c2,d,x,y;

    printf("a1 = ");
    scanf("%lf", &a1);

    printf("a2 = ");
    scanf("%lf", &a2);

    printf("b1 = ");
    scanf("%lf", &b1);

    printf("b2 = ");
    scanf("%lf", &b2);

    printf("c1 = ");
    scanf("%lf", &c1);

    printf("c2 = ");
    scanf("%lf", &c2);

    d = a1*b2 - a2*b1;
    if((int)d==0)
    {
        printf("Value of x and y can not be determined.\n");
    }
    else
    {
        x = (b2*c1 - b1*c2) / d;
        y = (a1*c2 - a2*c1) / d;

        printf("x is %.2lf and y is %.2lf\n", x, y);

    }

    return 0;
}














#include<stdio.h>
int main()
{
    int i;
    for(i=0;i<10;i++){
    printf("%d\n",i);
    return 0;  //output will be 0
    }
    printf("%d\n",i);    // if we use this printf here then it will give us output 10 ... and then the total output will be 0-10 with the last output 0-9 ...
    //return 0; //output 0-10
}















// prob 5
#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);

    for(i=1,sum=0 ; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("%d\n", sum);
    return 0;
}
















#include<stdio.h>
int main()
{
    int i,n,sum;
    scanf("%d",&n);

    for(i=1,sum=0 ; i<=n; i++)
    {
        sum = sum+i;
    }
    printf("%d\n", sum);
    return 0;
}













#include<stdio.h>
int main()
{
    int a,b,gcd,x;
    scanf("%d %d",&a,&b);

    x = (a < b) ? a : b;

    for( ; x>=1; x--)
    {
        if(a%x==0 && b%x==0)
        {
            gcd = x;
            break;
        }
    }
    printf("GCD is %d\n", gcd);
    return 0;
}











#include<stdio.h>
int main()
{
    int a,b,temp,gcd;
    scanf("%d %d",&a,&b);

    if(a==0 || b==0 )
    {
        gcd=0;
    }
    else if(a==1 || b==1)
    {
        gcd=1;
    }
    else
    {
        while(b!=0)
        {
            temp=b;
            b=a%b;
            a=temp;
        }
        gcd=a;
    }
    printf("GCD is %d\n", gcd);
    return 0;
}













#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a%b);     //recursive call.. recursion example and an easy way to get gcd by creating function and with euclidean algorithm
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("GCD of %d and %d is %d\n", num1, num2, gcd(num1, num2));

    return 0;
}












#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcm(num1, num2));

    return 0;
}













#include<stdio.h>

int gcd(int a, int b)
{
    if(b==0)
    {
        return a;
    }

    return (b, a%b);
}

int lcm(int a, int b)
{
    return (a*b)/gcd(a,b);
}

int main()
{
    int n1,n2;
    scanf("%d %d", &n1, &n2);

    printf("\n\nGCD is %d and LCM is %d\n", gcd(n1,n2), lcm(n1,n2));
}














#include<stdio.h>
int main()
{
    int i, a[]={10,20,30,40,50,60,70,80,90,100};

    for(i=0; i<10; i++)
    {
        printf("Element %d is %d\n",i+1, a[i]);
    }
    return 0;
}












#include<stdio.h>
int main()
{
    int i=1,count=1;
    char sam[100] = "The World is Yours!";

    while(i<100)
    {
        printf("%s count %d\n", sam, count);

        i++;
        count++;

        if(i==22)
        {
            break;
        }
    }
    return 0;
}














#include<stdio.h>
int main()
{
    int i=1;
    char sam[] = "The World is Yours!";

    for(i=1; i<=100; i++)
    {
        printf("%s\n", sam);
    }
    return 0;
}










// 6.7 code
#include<stdio.h>
int main()
{
    int first[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
    59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
    82, 58, 69, 67, 53, 56, 71, 62},
    second[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
    86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
    69, 67, 53, 56, 71, 62, 49},
    final[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
    69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
    55, 69, 85, 81, 80, 67, 88, 71};

    int i;
    double total[40];

    for(i=0; i<40; i++)
    {
        total[i] = first[i]/4.0 + second[i]/4.0 + final[i]/2.0;
        printf("Roll no %d\t Total Marks : %.2lf\n", i+1, total[i]);
    }
    return 0;
}














// code 6.7 by 2D array
#include<stdio.h>
int main()
{
    int marks[4][40] =
    {
        {83, 86, 97, 95, 93, 95, 86, 52, 49, 41,
        42, 47, 90, 59, 63, 86, 40, 46, 92, 56,
        51, 48, 67, 49, 42, 90, 42, 83, 47, 95,
        69, 82, 82, 58, 69, 67, 53, 56, 71, 62},

        {86, 97, 95, 93, 95, 86, 52, 49, 41, 42,
        47, 90, 59, 63, 86, 40, 46, 92, 56, 51,
        48, 67, 49, 42, 90, 42, 83, 47, 95, 69,
        82, 82, 58, 69, 67, 53, 56, 71, 62, 49},

        {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100,
        64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58,
        66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69,
        85, 81, 80, 67, 88, 71},

        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  // in 1D or 2D Array, it can be like { }   // I mean null set as it have no value right now.. we will get total marks here after calculation...
    };

    int col;

    for(col=0; col<40; col++)
    {
        marks[3][col] = marks[0][col]/4.0 + marks[1][col]/4.0 + marks[2][col]/2.0;
        printf("Roll no %d\t Total Marks : %d\n", col+1, marks[3][col]);
    }
    return 0;
}













/// array reverse
#include<stdio.h>
int main()
{
    int a[] = {10,20,30,40,50,60,70,80,90,100};
    int i,j,temp;

    for(i=0, j=9; i<j; i++, j--)
    {
        temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }

    for(i=0; i<10; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}













//code 6.8
#include <stdio.h>
int main()
{
    int marks, i, count;
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
    65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
    62, 66, 76, 70, 67, 65, 77, 63};

    for(marks = 50; marks <= 100; marks++)
    {
        count = 0;
        for(i = 0; i < 40; i++)
        {
            if(total_marks[i] == marks)
            {
                count++;
            }
        }
        printf("Marks: %d Count: %d\n", marks, count);
    }
    return 0;
}



















//code 6.7 and 6.8 in one code

#include<stdio.h>

int main() {
    int first[40] = {83, 86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90,
        59, 63, 86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82,
        82, 58, 69, 67, 53, 56, 71, 62},
        second[40] = {86, 97, 95, 93, 95, 86, 52, 49, 41, 42, 47, 90, 59, 63,
        86, 40, 46, 92, 56, 51, 48, 67, 49, 42, 90, 42, 83, 47, 95, 69, 82, 82, 58,
        69, 67, 53, 56, 71, 62, 49},
        final[40] = {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100, 64, 55,
        69, 85, 81, 80, 67, 88, 71, 62, 78, 58, 66, 98, 75, 86, 90, 80, 85, 100, 64,
        55, 69, 85, 81, 80, 67, 88, 71};

    int i, marks, count=0;
    double total[40];

    for(i=0; i<40; i++) {
        total[i] = first[i]/4.0 + second[i]/4.0 + final[i]/2.0;
        printf("Roll no %d\t Total Marks : %.2lf\n", i+1, total[i]);
    }

    printf("\n\n\n");
    //code 6.8.. Counting number of students who scored each mark
    for(marks = 0; marks <= 100; marks++)
    {
        count = 0;

        for(i = 0; i < 40; i++)
        {
            if((int)total[i] == marks) // Cast to int for comparison
            {
                count++;
            }
        }
        printf("Marks: %d Count: %d\n", marks, count);
    }

    return 0;
}
















// code 6.7 and 6.8 in one code (by 2D array)
#include<stdio.h>
int main()
{
    int marks[4][40] =
    {
        {83, 86, 97, 95, 93, 95, 86, 52, 49, 41,
        42, 47, 90, 59, 63, 86, 40, 46, 92, 56,
        51, 48, 67, 49, 42, 90, 42, 83, 47, 95,
        69, 82, 82, 58, 69, 67, 53, 56, 71, 62},

        {86, 97, 95, 93, 95, 86, 52, 49, 41, 42,
        47, 90, 59, 63, 86, 40, 46, 92, 56, 51,
        48, 67, 49, 42, 90, 42, 83, 47, 95, 69,
        82, 82, 58, 69, 67, 53, 56, 71, 62, 49},

        {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100,
        64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58,
        66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69,
        85, 81, 80, 67, 88, 71},

        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  // in 1D or 2D Array, it can be like { }   // I mean null set as it have no value right now.. we will get total marks here after calculation...
    };

    int col, marks_count[101] = {0};

    for(col=0; col<40; col++)
    {
        marks[3][col] = marks[0][col]/4.0 + marks[1][col]/4.0 + marks[2][col]/2.0;
        printf("Roll no %d\t Total Marks : %d\n", col+1, marks[3][col]);

        marks_count[marks[3][col]]++;
    }

    printf("\n\n\n");
    //code 6.8.. Counting number of students who scored each mark
    for(int i = 0; i <= 100; i++) {
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }

    return 0;
}















//code 6.9

#include<stdio.h>

int main()
{
    int total_marks[] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
    65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
    62, 66, 76, 70, 67, 65, 77, 63};

    int i;
    int marks_count[101] = {0};  // int marks_count[101];
                                    // for(i = 0; i < 101; i++) {
                                    // marks_count[i] = 0;}
                                    // instead of doing this we can write this in one line by initializing the value with {0}

    for(i = 0; i < 40; i++)
    {
        marks_count[total_marks[i]]++;
    }

    for(i = 50; i <= 100; i++)
    {
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }
    return 0;
}



















//code 6.10
#include<stdio.h>
int main()
{
    int i,j;

    int totalmarks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};

    int countmarks[11] = {0};   // as in the array there have 12 elements and first element mean arr[0]. that's why here arr[11]

        // instead of using loop like this we can do it i one line what e did here by initializing value with {0}
        // for(i=0; i<11; i++) { countmarks[i] = 0 };
    for(i=0; i<12; i++)
    {
        countmarks[totalmarks[i]]++;

        for(j=0; j<=10; j++)
        {
            printf("%d ", countmarks[j]);
        }
        printf("\n\n");
    }
    printf("\n\n");
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
        }


    printf("Array Length : %d\n\n", length);

    printf("First Element is : %d\n", firstElement);
    printf("Sixth Element is : %d\n", sixthElement);
    printf("Last Element is : %d\n\n\n", lastElement);

    printf("The maximum integer number in the array is: %d\n", maxNumber);
    printf("The minimum integer number in the array is: %d\n\n", minNumber);

    return 0;
}

















// function 7.1 - 7.5
#include<stdio.h>

int add(int a, int b)  // double add (double a, double b)
{
    int sum = a + b;   // double sum = a + b;
    return sum;
}

int main()
{
    //int a,b;     /// double a,b;
    //a = 7, b=14;
    // c = a + b;
    printf("%d\n", add(7,14)); // add(a,b) // c
    return 0;
}             // we can write the add function after main function but for that we have to declare the function at first then use main function then can define the add function. and if we don't declare it before main function then output will be error. this is the way to write own funtion
















// function 7.1 - 7.5
#include<stdio.h>

int add(int a, int b); // that's how we can declare user defined functions..  // double add (double a, double b)

int main()
{
    //int a,b;     /// double a,b;
    //a = 7, b=14;
    // c = a + b;
    printf("%d\n", add(7,14)); // add(a,b) // c
    return 0;
}             // we can write the add function after main function but for that we have to declare the function at first then use main function then can define the add function. and if we don't declare it before main function then output will be error. this is the way to write own funtion

int add(int a, int b)  // double add (double a, double b)
{
    int sum = a + b;   // double sum = a + b;
    return sum;
}














// code 7.6
#include<stdio.h>

int func(int x, int y)
{
    y = x;
    x = 2 * y;

    return (x*y);
}

int main()
{
    int x=10, y=30;

    int z = x*y;

    printf("%d\t %d\t %d\t %d\n", x,y,z,func(x,y));    // z means 10*30=300   and  func(x,y) = 10*20=200

    return 0;
}
















// code 7.6
#include <stdio.h>

int test_function(int x)
{
    int y = x;         // The reason y is not declared as a parameter is because it's a variable used for internal computation within the function, and it doesn't need to be passed into the function from outside. It's initialized based on the value of the parameter x within the function body.
    x = 2 * y;
    return (x * y);
}

int main()
{
    int x = 10, y = 20, z = 30;
    z = test_function(x);
    printf("%d %d %d\n", x, y, z);
    return 0;
}















//
#include<stdio.h>

double pi = 3.14; //global variable

void func()
{
    pi = 3.1416;  // local variable
    return;  // return not needed in void function
}

int main()
{
    printf("global pi = %lf\n", pi);

    func();
    printf("Local pi = %lf\n", pi);

    return 0;
}

















// max min sum average all in one
#include<stdio.h>

int max(int a[], int size)
{
    int max = a[0];

    for(int i=1; i<size; i++) // Start from index 1
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}


int min(int a[], int size)
{
    int min = a[0];

    for(int i=1; i<size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int sum(int a[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += a[i];
    }
    return sum;
}

double avrg(int a[], int size)
{
    int sum_val = sum(a, size);

    double avrg = (double)sum_val / size;

    return avrg;
}

int main()
{
    int a[] = {3,4,6,7,11,13,14,16,2,20,21,23,27,29,100,298,7,77,221};

    int size = sizeof(a) / sizeof(a[0]);

    printf("Maximum Number : %d\n", max(a, size));
    printf("Minimum Number : %d\n", min(a, size));
    printf("Sum : %d\n", sum(a, size));
    printf("Average : %.3lf\n", avrg(a, size));

    return 0;
}















#include<stdio.h>

int a[] = {3,4,6,7,11,13,14,16,2,20,21,23,27,29,100,298,7,77,221};

int max(int a[], int size)
{
    int max = a[0];

    for(int i=1; i<size; i++)
    {
        if(a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int min(int a[], int size)
{
    int min = a[0];

    for(int i=1; i<size; i++)
    {
        if(a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int sum(int a[], int size)
{
    int sum = 0;

    for(int i=0; i<size; i++)
    {
        sum += a[i];
    }

    return sum;
}

double avrg(int a[], int size)
{
    int total = sum(a, size);

    double avrg = (double) total / size;

    return avrg;
}

int main()
{
    int size = sizeof(a) / sizeof(a[0]);

    printf("Maximum Number is %d\n", max(a,size));
    printf("Minimum Number is %d\n", min(a,size));
    printf("Total Sum is %d\n", sum(a,size));
    printf("Average is %.3lf\n", avrg(a,size));

    return 0;
}











#include<stdio.h>

void test_function(int ara[])
{
    ara[0] = 100;
    return;
}

int main()
{
    int ara [] = {1, 2, 3, 4, 5};
    printf("%d\n", ara[0]);
    test_function(ara);
    printf("%d\n", ara[0]);
    return 0;
}













#include<stdio.h>

int a[] = {3,4,6,7,11,13,14,16,2,20,21,23,27,29,100,298,7,77,221};

int max(int a[], int size)
{
    int max = a[0];

    for(int i=0; i<size; i++)
    {
        if(a[i]>max)
        {
            max = a[i];
        }
    }
    return max;
}

int min(int a[], int size)
{
    int min = a[0];
    for(int i=1; i<size; i++)
     {
         if(a[i]<min)
         {
             min = a[i];
         }
     }
     return min;
}

int sum(int a[], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum += a[i];
    }
    return sum;
}

double avrg(int a[], int size)
{
    int total = sum(a,size);
    double avrg = (double) total / size;
    return avrg;
}


int main()
{
    int size = sizeof(a) / sizeof(a[0]);

    printf("Maximum Number is %d\n", max(a,size));
    printf("Minimum Number is %d\n", min(a,size));
    printf("Total Sum is %d\n", sum(a,size));
    printf("Average is %.3lf\n", avrg(a,size));

    return 0;
}

















#include <stdio.h>

int globalArray[5] = {1, 2, 3, 4, 5}; // Global array

void function() {
    int localArray[3] = {6, 7, 8}; // Local array
    printf("Global array inside function: %d\n", globalArray[0]); // Accessing global array inside function
    printf("Local array inside function: %d\n", localArray[0]); // Accessing local array inside function
}

int main() {
    int localArray[2] = {9, 10}; // Local array
    printf("Global array in main: %d\n", globalArray[0]); // Accessing global array in main
    printf("Local array in main: %d\n", localArray[0]); // Accessing local array in main
    function();
    return 0;
}
















#include <stdio.h>

#define PI 3.14159

int main() {
    double radius, area;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);

    area = PI * radius * radius;

    printf("The area of the circle with radius %.2f is %.2f\n", radius, area);

    return 0;
}


















#include <stdio.h>

float calculate_area(float radius) {
    float area;
    const float pi = 3.14159; // You can also use the math.h library for a more precise value of pi

    area = pi * radius * radius;

    return area;
}

int main() {
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    float area = calculate_area(radius);
    printf("The area of the circle is: %.2f\n", area);

    return 0;
}



















#include<stdio.h>

void func(int a[])
{
    a[0] = 100;
    //return;
}

int main()
{
    int a[] = {1,2,3,4,5};
    printf("%d\n\n", a[0]);

    func(a);
    printf("%d\n", a[0]);

    return 0;
}

















//tricky ques
#include<stdio.h>
int main()
{
    int i;
     if(printf("0"))
     {
         i = 3;
     }
     else
     {
         i = 5;
     }
     printf("%d\n",i);  // output 03
     return 0;
}













#include<stdio.h>
int main()
{
    int i=0;
    while(i<5)
    {
        printf("Yo\n");
        i++;  // if it's not used then it will be an infinity loop as the conditon true. but by increasing incremet it will be stop whe it become 5<5....
    }
}















#include<stdio.h>
int main()
{
    int i;

    for(i=1; i<10; i++)
    {
        printf("%d\n", i);

        i += 3;
    }

    return 0;   // output 1 5 9
}












#include<stdio.h>
int main()
{
    int i;

    for(i=10; i>0; i--)
    {
        printf("%d\n", i);

        i -= 3;
    }

    return 0;   // output : 10 7 4 1
}















#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,6,7,11,13,14,16,20,21,23,26,27,31,50,100,122,200,243,298,299};
    int length, n, mid;
    int left = 0, right;
    length = sizeof(a) / sizeof(a[0]);
    right = length-1;

    printf("Number : ");
    scanf("%d", &n);

    while(left <= right)
    {
        mid = (left+right)/2;

        if(a[mid] == n)
        {
            //printf("got it in index %d\n", mid);  /// if we write this line here then the last else { found } that line not needed
            break;
        }

        else if( a[mid] < n)
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }

    if(left > right)
    {
        printf("not found\n");
    }
    else
    {
        printf("%d found at index %d\n", a[mid], mid);
    }

    return 0;
}

















#include<stdio.h>
int main()
{
    int a[] = {1,2,3,4,6,5,7,9,11,12,13,14,15,16,17,20,21,22,23,24,26,27,28,29,31,50,99,100,101,111,200,202,221,222,297,298,299};

    int num, length, left, right, mid;

    printf("number is ");
    scanf("%d", &num);

    length = sizeof(a) / sizeof(a[0]);

    left = 0;
    right = length - 1;

    while(left <= right)
    {
        mid = (left + right) / 2;

        if(num == a[mid])
        {
            break;
        }

        else if(num > a[mid])
        {
            left = mid + 1;
        }

        else
        {
            right = mid - 1;
        }
    }

    if(left > right)
    {
        printf("\n%d is Not Found in Array!\n", num);
    }
    else
    {
        printf("\n%d is Found in the Array at index [%d]\n", num, mid);
    }

    return 0;
}














#include<stdio.h>
int main()
{
    int a[] = {100, 98, 97, 31, 23, 21, 16, 14, 11, 7, 3, 1};

    int num, length, left, right, mid;

    printf("number is ");
    scanf("%d", &num);

    length = sizeof(a) / sizeof(a[0]);

    left = 0;
    right = length - 1;

    while(left <= right)
    {
        mid = (left + right) / 2;

        if(num == a[mid])
        {
            break;
        }

        else if(num > a[mid])
        {
            right = mid - 1;
        }

        else
        {
            left = mid + 1;
        }
    }

    if(left > right)
    {
        printf("\n%d is Not Found in Array!\n", num);
    }
    else
    {
        printf("\n%d is Found in the Array at index [%d]\n", num, mid);
    }

    return 0;
}













// this is done by Bubble Sort algorithm. Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.
// sorting array ascending or descending way
#include<stdio.h>
int main()
{
    int a[] = {21, 23, 16,7,31,3,14,11,100,298,2,26,27,9,6,299,1};
    int i,j,temp,length;
    length = sizeof(a)/sizeof(a[0]);

    for(i=0; i<length; i++)
    {
        for(j=i+1; j<length; j++)
        {
            if(a[i]>a[j]) // for ascending order 123   // and for descending order just change the operator sign like this if(a[i]<a[j])to get 3 2 1
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d\n", a[i]);
    }
    return 0;
}
















///string 9.2/3
#include <stdio.h>
int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};
    int i, length = 10;
    printf("%s\n", country);

    for(i = 0; i < length; i++)
    {
        if(country[i] >= 97 && country[i] <= 122)
        {
            country[i] = 'A' + (country[i] - 'a');
        }
    }














//9.4 in alphabetical way
#include<stdio.h>
int main()
{
    char a,z,abc[] = "Bangladesh";
    int i, length = 10;
    printf("%s\n", abc);
    for(i=0; i<length; i++)
    {
        if(abc[i] >= a && abc[i] <= z)
        {
            abc[i] = 'A' + (abc[i] - 'a');
        }
    }
    printf("%s\n", abc);
    return 0;
}
















//9.5
#include <stdio.h>

int string_length(char str[])
{
    int i, length = 0;

    for(i = 0; str[i] != '\0'; i++)
    {
        length++;
    }
    return length;
}

int main()
{
    char country[100];
    int length;

    while(1 == scanf("%s", &country))
    {
        length = string_length(country);
        printf("length: %d\n", length);
    }
    return 0;
}














// 9.6  // it's also an infinity loop
#include <stdio.h>
int main()
{
    char ara[100];

    while(NULL != gets(ara))  // get() is better than scanf() to get input properly. scanf breaks a string into parts if there's any space between words but get() has not this issue.
    {
        printf("%s\n", ara);
    }
    return 0;
}
















// 9.7
#include <stdio.h>
int main()
{
    char str1[] = "Bangla", str2[] = "desh", str3[12];
    int i, j, length1 = 6, length2 = 4;
    for(i = 0, j = 0; i < length1; i++, j++)
    {
        str3[j] = str1[i];
    }
    for(i = 0; i < length2; i++, j++)
    {
        str3[j] = str2[i];
    }
    str3[j] = '\0';  // used it to make understand compiler that thr string ended here after gettin this null value at the end
    printf("%s\n", str3);
    return 0;
}















//code 9.9 subeen
#include <stdio.h>
#include <string.h>
int main()
{
    char s[1002], ch;
    int i, j, length, is_word_started;

    gets(s);

    length = strlen(s);
    is_word_started = 0;

    for (i = 0; i < length; i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;
                ch = 'A' + s[i] - 'a'; // first character is capital
                printf("%c", ch);
            }
            else
            {
                 printf("%c", s[i]);
            }
        }

        else if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;
            }
            printf("%c", s[i]);
        }

        else
        {
            if (is_word_started == 1)
            {
                is_word_started = 0;
                printf("\n");
            }
        }
    }
    printf("\n");
    return 0;
}
















// this is done by Bubble Sort algorithm. Bubble Sort is a simple sorting algorithm that repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order. This process is repeated until the list is sorted.
// sorting array ascending or descending way
#include<stdio.h>
int main()
{
    int a[] = {21, 23, 16,7,31,3,14,11,100,298,2,26,27,9,6,299,1};
    int i,j,temp,length;
    length = sizeof(a)/sizeof(a[0]);

    for(i=0; i<length; i++)
    {
        for(j=i+1; j<length; j++)
        {
            if(a[i]>a[j]) // for ascending order 123   // and for descending order just change the operator sign like this if(a[i]<a[j])to get 3 2 1
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
        printf("%d\n", a[i]);
    }
    return 0;
}

















#include<stdio.h>
int main()
{
    int i = 0;   // if we initialize the value 1 or any other int number then this code will be infinite loop
                // int i = -1/-2/-3 output will be SRS/SRSSRS//SRSSRSSRS ....
    while(i++)
    {
        printf("SRS");
    }
    return 0;
}














// 10.1 prime num( not efficient
#include<stdio.h>
int prime(int n)
{
    int i;
    if(n<2)
    {
        return 0;
    }
    for(i=2; i<n; i++)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    while(1)
    {
        printf("enter number (enter 0 to exit) : ");
        scanf("%d", &n);

        if(n==0)
        {
            break;
        }

        if(1==prime(n))
        {
            printf("%d is a prime number\n", n);
        }

        else
        {
            printf("%d is not a prime number\n", n);
        }
    }
    return 0;
}














// better than 10.1 but not proper efficient
#include<stdio.h>
int prime(int n)
{
    int i;

    if(n<2)
    {
        return 0;
    }

    if(n==2)
    {
        return 1;
    }

    if(n%2 == 0)
    {
        return 0;
    }

    for(i=3; i<n/2; i= i+2)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    while(1)
    {
        printf("enter number (enter 0 to exit) : ");
        scanf("%d", &n);

        if(n==0)
        {
            break;
        }

        if(1==prime(n))
        {
            printf("%d is a prime number\n", n);
        }

        else
        {
            printf("%d is not a prime number\n", n);
        }
    }
    return 0;
}
















// 10.2 using root = sqrt(n) to get primary number in an efficient way

#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int i, root;

    if(n == 2)
    {
        return 1;
    }

    if(n%2 == 0)
    {
        return 0;
    }

    root = sqrt(n);

    for(i=3; i<=root; i=i+2)
    {
        if(n%i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    while(1)
    {
        printf("enter number(enter 0 to exit) : ");
        scanf("%d", &n);

        if(n==0)
        {
            break;
        }

        if(1 == prime(n))
        {
            printf("%d is a Prime Number!\n", n);
        }
        else
        {
            printf("%d is Not a Prime Number!\n", n);
        }
    }
    return 0;
}
















#include <stdio.h>

int main()
{
    int i, num, temp = 0;
    printf("Enter any numb to Check for Prime: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            temp++;
            break;
        }
    }

    if (temp == 0 && num != 1)
    {
        printf("%d is a Prime number", num);
    }
    else
    {
        printf("%d is not a Prime number", num);
    }
    return 0;
}















// easy way to get primary number but it's not efficient
#include<stdio.h>
int main()
{
    int i, num, temp = 0;

    printf("enter num : ");
    scanf("%d", &num);

    for(i=2; i<=num/2; i++)
    {
        if(num%i == 0)
        {
            temp++;
            break;
        }
    }

    if(temp==0 && num!=1)
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

    return 0;
}














#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int i, root;

    if(n==2)
    {
        return 1;
    }

    if(n%2==0)
    {
        return 0;
    }

    root = sqrt(n);

    for(i=3; i<=root; i=i+2)
    {
        if(n%2==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    while(1)
    {
        printf("enter num: ");
        scanf("%d", &n);

        if(n==0)
        {
            break;
        }

        if(1==prime(n))
        {
            printf("%d is a Prime Number\n", n);
        }
        else
        {
            printf("%d is not a prime number\n", n);
        }
    }

}















#include<stdio.h>
int main()
{
    int i, n, temp=0;

    printf("enter number : ");
    scanf("%d", &n);

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            temp++;
            break;
        }
    }
    if(temp==0 && n!=1)
    {
        printf("%d is a Prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}














// prime number 10.2
#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int i, root;

    if(n==2)
    {
        return 1;  //prime
    }

    if(n%2==0)
    {
        return 0;  // not prime
    }

    root = sqrt(n);

    for(i=3; i<=root; i=i+2)
    {
        if(n%i==0)
        {
            return 0; //not prime
        }
    }
    return 1; //prime
}

int main()
{
    int n;

    while(1)   // infinity loop until we give input 0 to exit condition wise
    {
        printf("enter number(enter 0 to exit) : ");
        scanf("%d", &n);

        if(n==0)
        {
            break;
        }

        if(1==prime(n))
        {
            printf("%d is a prime number\n", n);
        }
        else
        {
            printf("%d is not a prime number\n", n);
        }
    }
    return 0;
}
















#include<stdio.h>
int main()
{
    int i, n, temp=0;

    printf("enter number : ");
    scanf("%d", &n);

    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            temp++;
            break;
        }
    }
    if(temp==0 && n!=1)
    {
        printf("%d is a Prime number\n", n);
    }
    else
    {
        printf("%d is not a prime number\n", n);
    }

    return 0;
}

















#include<stdio.h>
#include<math.h>

int prime(int n)
{
    int i, root;

    if(n==2)
    {
        return 1;
    }

    if(n%2==0)
    {
        return 0;
    }

    root = sqrt(n);

    for(i=3; i<=root; i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;

    while(1)
    {
        printf("enter number(enter 0 to exit) : ");
        scanf("%d", &n);

        if(n==0)
        {
            break;
        }

        if(1==prime(n))
        {
            printf("%d is a prime number\n", n);
        }
        else
        {
            printf("%d is not a prime number\n", n);
        }
    }
    return 0;
}











// code 6.7 (by 2D array)
#include<stdio.h>
int main()
{
    int marks[4][40] =
    {
        {83, 86, 97, 95, 93, 95, 86, 52, 49, 41,
        42, 47, 90, 59, 63, 86, 40, 46, 92, 56,
        51, 48, 67, 49, 42, 90, 42, 83, 47, 95,
        69, 82, 82, 58, 69, 67, 53, 56, 71, 62},

        {86, 97, 95, 93, 95, 86, 52, 49, 41, 42,
        47, 90, 59, 63, 86, 40, 46, 92, 56, 51,
        48, 67, 49, 42, 90, 42, 83, 47, 95, 69,
        82, 82, 58, 69, 67, 53, 56, 71, 62, 49},

        {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100,
        64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58,
        66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69,
        85, 81, 80, 67, 88, 71},

        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  // in 1D or 2D Array, it can be like { }   // I mean null set as it have no value right now.. we will get total marks here after calculation...
    };

    int col;

    for(col=0; col<40; col++)
    {
        marks[3][col] = marks[0][col]/4.0 + marks[1][col]/4.0 + marks[2][col]/2.0;
        printf("Roll no %d\t Total Marks : %d\n", col+1, marks[3][col]);
    }

    return 0;
}













// code 6.7 and 6.8 in one code (by 2D array)
#include<stdio.h>
int main()
{
    int marks[4][40] =
    {
        {83, 86, 97, 95, 93, 95, 86, 52, 49, 41,
        42, 47, 90, 59, 63, 86, 40, 46, 92, 56,
        51, 48, 67, 49, 42, 90, 42, 83, 47, 95,
        69, 82, 82, 58, 69, 67, 53, 56, 71, 62},

        {86, 97, 95, 93, 95, 86, 52, 49, 41, 42,
        47, 90, 59, 63, 86, 40, 46, 92, 56, 51,
        48, 67, 49, 42, 90, 42, 83, 47, 95, 69,
        82, 82, 58, 69, 67, 53, 56, 71, 62, 49},

        {87, 64, 91, 43, 89, 66, 58, 73, 99, 81, 100,
        64, 55, 69, 85, 81, 80, 67, 88, 71, 62, 78, 58,
        66, 98, 75, 86, 90, 80, 85, 100, 64, 55, 69,
        85, 81, 80, 67, 88, 71},

        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
        0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  // in 1D or 2D Array, it can be like { }   // I mean null set as it have no value right now.. we will get total marks here after calculation...
    };

    int col, marks_count[101] = {0};

    for(col=0; col<40; col++)
    {
        marks[3][col] = marks[0][col]/4.0 + marks[1][col]/4.0 + marks[2][col]/2.0;
        printf("Roll no %d\t Total Marks : %d\n", col+1, marks[3][col]);

        marks_count[marks[3][col]]++;
    }

    printf("\n\n\n");
    //code 6.8.. Counting number of students who scored each mark
    for(int i = 0; i <= 100; i++)
    {
        printf("Marks: %d Count: %d\n", i, marks_count[i]);
    }

    return 0;
}














*/

#include<stdio.h>
int main()
{
    int marks[4][10] =  {
        {80, 70, 92, 78, 58, 83, 85, 66, 99, 81},
        {75, 67, 55, 100, 91, 84, 79, 61, 90, 97},
        {98, 67, 75, 89, 81, 83, 80, 90, 88, 77},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};  // last one can be null set instead of using 10 zero.. like this {}

    int col;
    for(col=0; col<10; col++)
    {
        marks[3][col] = marks[0][col]/4.0 + marks[1][col]/4.0 + marks[2][col]/2.0;

        printf("Roll : %d\t Total Marks : %d\n", col+1, marks[3][col]);
    }

    return 0;
}

