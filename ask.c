#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
	
int main(int argc, char *argv[]){

	printf("What would you like to do Mister DDubleU?:");
	char line[100];
	fgets(line,sizeof(line),stdin); 
	line[strlen(line) - 1] = '\0'; //gets rid of the new line
	char * s = line;
	char * command[5];
	int i = 0;
	while(s){
		command[i] = strsep(&s," ");
		i++;
	}
	command[i] = NULL;
	execvp(command[0],command);
}
