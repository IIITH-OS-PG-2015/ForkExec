#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

int main(){

	int childPid = fork();
	int status;

	if( childPid==0 ){
		/* Child process */
		char *lsCommand[3] = {"ls", "-l" , NULL} ;
		execvp( lsCommand[0], lsCommand );

	}
	else{
		/* Parent process */
		waitpid(childPid, &status, 0);
	}


return 0;
}
