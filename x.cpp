#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <stdbool.h>
#include <sys/wait.h>

int main(){
    // ./binary is a binary of a infinite loop code
    FILE *ptr = popen("sh -c ': | timeout 2s ./binary; echo $?'","r");
    int termination_status = pclose(ptr);
    if(WIFEXITED(termination_status)){
        int exit_code = WEXITSTATUS(termination_status);
        printf("The code exited by itself with exit_code : %d", exit_code); // The code exited by itself with exit_code : 141
    }else if(WIFSIGNALED(termination_status)){
        int signal_num = WTERMSIG(termination_status);
        printf("The code exited by outside process with termination status : %d", signal_num);
    }else if(WCOREDUMP(termination_status)){
        printf("Segmentation fault [core dumped]");
    }else if(WIFSTOPPED(termination_status)){
        int signal_num = WSTOPSIG(termination_status);
        printf("Child process stopped with signal : %d", signal_num);
    }
    return 0;
} 