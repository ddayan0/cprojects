#include <stdio.h>
#include <sys/types.h>
/* TODO: Fix sudo, commands not working
 *       Integrate process wait function
 *       Input alias function
 *       Make a config file
 *       Store certain values as global variables
 *       CD Is not functional
 *       apt not functional, breaks program
 *
*/





void parse (char *line, char **argv){
	while(*line != '\0'){
		while (*line == ' ' || *line == '\t' || *line == '\n')
			*line++ = '\0';
		*argv++ = line;
		while(*line != '\0' && *line != ' ' && *line != '\t' && line != '\n')
			line++;
	
	}
	*argv = '\0';
}
void execute (char **argv){
	pid_t pid;
	int status;
	if ((pid = fork()) < 0) {
		printf("FORK FAILED!\n");
		exit(1);
	}
	else if (pid == 0) {
		if (execvp(*argv, argv) < 0) {
			printf("EXEC FAILED\n");
			exit(1);
		}
	}
	
}
void main(void){
	char line[1024];
	char *argv[64];
	while (1) {
		printf("Shell$");
		gets(line);
		printf("\n");
		parse(line, argv);
		if (strcmp(argv[0], "exit") == 0)
			exit(0);
		execute(argv);
	
	
	
	}





}
