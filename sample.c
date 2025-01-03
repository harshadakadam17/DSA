#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main()
{
    int n;
    printf("Enter number  of elements to sort ");
    scanf("%d", &n);

    int arr[n];
    printf("Enters %d elements to sort ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", arr[i]);
    }
    pid_t pid = fork();

    if (pid == 0)
    {
        sleep(2);
        printf("The child process ");
        printf("Sorting (child process ) not implemented");
        exit(0);
    }
    else if (pid > 0)
    {
        sort(arr, n);
        printf("Parent process :\n Sorted elements :");
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        printf("\n") int status;
        wait(&status);
        printf("child process completed ");
    }
    else
    {
        perror("fork failed");
    }

    return 0;
}