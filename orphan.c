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
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    pid_t pid = fork();

    if (pid == 0)
    {             // Child Process
        sleep(2); // To simulate orphan state if parent terminates
        printf("Child Process:\n");
        printf("Sorting (Child Process) not implemented here.\n");
        exit(0); // Exiting child process to turn it into a zombie if parent waits
    }
    else if (pid > 0)
    { // Parent Process
        sort(arr, n);
        printf("Parent Process:\nSorted Array: ");
        for (int i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        // Wait for the child process to demonstrate zombie state
        int status;
        wait(&status);
        printf("Child process completed.\n");
    }
    else
    {
        perror("fork failed");
    }

    return 0;
}
