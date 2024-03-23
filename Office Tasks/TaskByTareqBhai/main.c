/*

Date : 22/03/24
Question/Tasks : 1. How To find Array's Last integer number?
                 2. How to find Max integer Number of an array where we have 10 integer numbers in that array?




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












*/



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


