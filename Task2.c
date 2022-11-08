#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<stdlib.h>
#include<sys/wait.h>
int main()
{
    int pid, status;
    pid = fork();
    if(pid == -1)
        {
            printf("fork failed\n"); 
            exit(1);
    }
    if(pid == 0)
{
/* Child */ 
    printf("Child here!\n"); 
}
else
{
/* Parent */
    wait(&status); 
    printf("Well done kid!\n"); 
}
}
