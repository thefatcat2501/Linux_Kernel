#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <stdlib.h>

int main() {
    pid_t child_pid;
    int counter = 2;

    printf("\nGia tri khoi tao counter = %d",counter);
    child_pid = pork();
    printf("\nDay la child_pid = ", child_pid);
    if(child_pid >= 0){
        if(child_pid == 0){
            counter ++;
            sleep(2);
            printf("\nDay la process CON, gia tri counter sau khi tang = %d", counter);
            
            while (1);
        }else{
            counter ++;
            sleep(10);
            printf("\nDay la process CHA, gia tri counter sau khi tang = %d",counter);

            while(1);
        }
    }else{
        printf("\nKhoi tao process that bai!!!");
    }
    return 0;
}