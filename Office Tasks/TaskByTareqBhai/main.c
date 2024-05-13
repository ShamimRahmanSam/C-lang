/*

Date : 22/03/2024
Question/Tasks : 1. How To find Array's Last integer number?
                 2. How to find Max integer Number of an array where we have 10 integer numbers in that array?


Date :; 16/04/2024
                 3. Give some array element as input and find out the second largest element of that array.







// Ques/Task 1 : 1. How To find Array's Last integer number?


#include <stdio.h>

int main()
{
    int numbers[] = {10, 20, 30, 40, 50};

    int array_length = sizeof(numbers) / sizeof(numbers[0]);

    int last_number = numbers[array_length - 1];

    printf("The last integer number in the array is: %d\n", last_number);

    return 0;
}
















// Ques/Task 2: How to find Max integer Number of an array where we have 10 integer numbers in that array?

#include <stdio.h>

int main() {
    int numbers[] = {10, 25, 7, 42, 15, 30, 18, 5, 38, 20};

    int max_number = numbers[0];

    for (int i = 1; i < 10; i++) {
        if (numbers[i] > max_number) {
            max_number = numbers[i];
        }
    }

    printf("The maximum integer number in the array is: %d\n", max_number);

    return 0;
}

















//Task 3 : Find out 2nd largest element of an array
#include <stdio.h>
int main ()
{
    int i, n=0, largest1=0, largest2=0, temp=0;

    printf("Enter the size of the Array\n");

    scanf("%d", &n);

    int array[n];

    printf ("Enter the Elements\n");

    for (i=0; i<n; i++)
    {
        scanf ("%d", &array[i]);
    }

    printf ("\n");

    printf ("The array elements are : \n");

    for (i=0; i<n; i++)
    {
        printf ("%d\t", array[i]);
    }

    printf ("\n\n");

    largest1 = array[0];
    largest2 = array[1];

    if (largest1 < largest2)
    {
        temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }

    for (int i=2; i<n; i++)
    {
        if (array[i] > largest1)
        {
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2 && array[i] != largest1)
        {
            largest2 = array[i];
        }
    }

    printf ("LARGEST ElEMENT = %d\n", largest1);
    printf ("SECOND LARGEST ELEMENT = %d\n", largest2);

    return 0;
}

















// Date 18/04/2024
// task 4 : infinity for loop. range 0-100 ... click + to increment and - to decrement and count how many + or - clicked.
// need to this later!















































// date : 25-4-2024
// task 5 :  Find out every alphabet's count in an array string




#include <stdio.h>

int main() {
    char input[100];
    int counts[26] = {0};

    printf("Enter a string: ");

    fgets(input, sizeof(input), stdin);

    for(int i = 0; input[i] != '\0'; i++)
    {
        if(input[i] == '\n')
        {
            input[i] = '\0';
            break;
        }
    }

    for(int i = 0; input[i] != '\0'; i++)
    {
        char c = input[i];
        if(c >= 'a' && c <= 'z')
        {
            counts[c - 'a']++;
        }
    }

    printf("Occurrences of each alphabet:\n");

    for(int i = 0; i < 26; i++)
    {
        printf("%c: %d\n", 'a' + i, counts[i]);
    }

    return 0;
}

