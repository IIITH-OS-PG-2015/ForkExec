#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int num = 0;
int main(){
    int pid;
    pid = fork();

    printf("%d", num);  
    
	if(pid == 0){       /*child*/
        num = 1;
    }else if(pid > 0){  /*parent*/
        num = 2;
    }
    
	//printf("%d", num);
	//Guess the output first. Uncomment to check your guess!
}
