#include <stdio.h>

#include <unistd.h> // for fork()

#include <sys/types.h> // for pid_t

int main() {

pid_t pid;

// Create a new process

pid = fork();

if (pid < 0) {

// Error occurred

printf("Fork failed!\n");

return 1;

}

else if (pid == 0) {

// Child process

//execlp("/bin/ls","ls",NULL);

// Explore this !!!!

printf("Child Process:\n");

printf(" PID = %d\n", getpid());

printf(" Parent PID = %d\n", getppid());

}

else {

// Parent process

printf("Parent Process:\n");

printf(" PID = %d\n", getpid());

printf(" Child PID = %d\n", pid);

}

return 0;
