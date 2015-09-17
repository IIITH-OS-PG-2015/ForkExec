#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){

	printf("Original process pid, before fork() : %d \n", getpid() );

	int pid = fork();

	if( pid==0 ){
		/* Child process */
		printf("Child pid : %d \n", getpid() );

	}
	else{
		/* Parent process */
		sleep(1);
		printf("Parent's pid : %d \n", getpid() );
	}

	/* NOTE : 
	 * Which process (among child & parent) will be executed first is not guaranteed.
	 * Hence we put the parent process to sleep(), which ensures that the child is executed before parent.
	 *
	 */


	/* Uncomment below line to see what will be the output */
	//printf("How many times will I be printed?!! \n" );

return 0;
}
