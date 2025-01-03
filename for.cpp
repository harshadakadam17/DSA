#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

#define SHM_SIZE 1024  // Size of shared memory

int main() {
    // Generate a unique key for the shared memory segment
    key_t key = ftok("shmfile", 65);

    // Create a shared memory segment with read-write permissions
    int shmid = shmget(key, SHM_SIZE, 0666 | IPC_CREAT);

    // Attach the shared memory segment to the server's address space
    char *shared_memory = (char *)shmat(shmid, NULL, 0);

    // Write a message to the shared memory
    printf("Server: Writing message to shared memory...\n");
    char message[] = "Hello from the server!";
    strcpy(shared_memory, message);

    // Detach from the shared memory
    shmdt(shared_memory);

    printf("Server: Message written to shared memory.\n");
    
    return 0;
}
#include <stdio.h>
#include <sys/ipc.h>
#include <sys/shm.h>
#include <string.h>

#define SHM_SIZE 1024  // Size of shared memory

int main() {
    // Generate a unique key for the shared memory segment
    key_t key = ftok("shmfile", 65);

    // Create a shared memory segment with read-write permissions
    int shmid = shmget(key, SHM_SIZE, 0666 | IPC_CREAT);

    // Attach the shared memory segment to the server's address space
    char *shared_memory = (char *)shmat(shmid, NULL, 0);

    // Write a message to the shared memory
    printf("Server: Writing message to shared memory...\n");
    char message[] = "Hello from the server!";
    strcpy(shared_memory, message);

    // Detach from the shared memory
    shmdt(shared_memory);

    printf("Server: Message written to shared memory.\n");
    
    return 0;
}
