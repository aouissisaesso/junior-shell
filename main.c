#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define Max_cd 1024
#define MAX_args 64
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"
void repl();
char **split_line(char *line);
int execute(char **args);
void affiche_bienvenue();

int main() {
	affiche_bienvenue();
	repl();
	return 0 ;
}
void affiche_bienvenue() {
printf(YELLOW);
printf("====================================\n" );
printf("Bienvenue dans junior-shell (v1.0)\n");
printf("Tapez 'exit' pour quitter le shell \n");
printf("=====================================\n");
printf(RESET);
}
void repl() {
char line[Max_cd];
char **args ;
int status = 1 ;
do {
	printf("junior-shell> ");
	if(fgets(line, sizeof(line), stdin) == NULL) {
		break ;
	}
	line[strcspn(line, "\n")] = '\0';
	if(strlen(line) == 0) continue ;
	args = split_line(line);
	status = execute(args);
	free(args);
 } while(status);
}
char **split_line(char *line) {
	char **args = malloc(MAX_args * sizeof(char *));
	char *token;
	int i = 0 ;
	
	token = strtok(line, " ");
	while(token != NULL && i < MAX_args -1){
		args[i++] = token ;
		token = strtok(NULL, " ");
	}
	args[i]= NULL;
	return args;
}
int execute(char **args) {
	if(args[0] == NULL) return 1;
	if(strcmp(args[0], "exit") == 0) return 0;
	if (strcmp(args[0], "genpass") == 0){
		system("./password_generate.sh");
		return 1;
	}
	if(strcmp(args[0], "securegenpass") == 0){
	system("./secure_genpass.sh");
	return 1;
	}
	if(strcmp(args[0], "complexgenpass") == 0){
	system("complex_genpass.sh");
	return 1;
	}
	if (strcmp(args[0], "sysinfo") == 0) {
	system("./sysinfo.sh");
	return 1 ;
	}
	
	pid_t pid = fork();
	if(pid == 0) {
		execvp(args[0], args);
		perror("execvp");
		exit(EXIT_FAILURE);
	} else if (pid > 0) {
		wait(NULL);
	} else {
		perror("fork");
	}
	return 1 ;
} 
