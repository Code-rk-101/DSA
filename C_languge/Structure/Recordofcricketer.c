#include<stdio.h>
// #include"string.h"
int main()
{
    typedef struct cricketer{
        char name[20];
        int age;
        int match;
        float avgrun;
    }cricketer;

    cricketer arr[20];
    for(int i=0;i<=2;i++)
    {
        printf("Enter the name of cricketer: ");
        fgets(arr[i].name, sizeof(arr[i].name),stdin);
        printf("Enter the age of cricketer: ");
        scanf("%d",&arr[i].age);
        printf("Enter the no of matches played by cricketer: ");
        scanf("%d",&arr[i].match);
        printf("Enter the average run of cricketer: ");
        scanf("%f",&arr[i].avgrun);
        printf("\n");
        getchar();
    }

    for(int i=0;i<=2;i++)
    {
        printf("\nThe name of cricketer: ");
        printf("%s", arr[i].name);
        printf("The age of cricketer: \n%d",arr[i].age);
        printf("The no of matches played by cricketer: %d\n",arr[i].match);
        printf("The average run of cricketer: %f\n",arr[i].avgrun);
    }
return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     typedef struct cricketer {
//         char name[20];
//         int age;
//         int match;
//         float avgrun;
//     } cricketer;

//     cricketer arr[20];
//     for (int i = 0; i <= 3; i++) {
//         printf("Enter the name of cricketer: ");
//         fgets(arr[i].name, sizeof(arr[i].name), stdin);
//         printf("Enter the age of cricketer: ");
//         scanf("%d", &arr[i].age);
//         printf("Enter the no of matches played by cricketer: ");
//         scanf("%d", &arr[i].match);
//         printf("Enter the average run of cricketer: ");
//         scanf("%f", &arr[i].avgrun);
//         printf("\n");
//         getchar(); // Consume the newline character
//     }

//     for (int i = 0; i <= 3; i++) {
//         printf("Cricketer %d:\n", i + 1);
//         printf("Name: %s", arr[i].name);
//         printf("Age: %d\n", arr[i].age);
//         printf("Matches played: %d\n", arr[i].match);
//         printf("Average runs: %.2f\n", arr[i].avgrun); // Display average runs with two decimal places
//         printf("\n");
//     }

//     return 0;
// }
