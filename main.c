#include <stdio.h>
#include <stdlib.h>
#include <sys>

/*
input : commands (string) char [] -> stdin
  
input: commands
split command 

search command path
	if path is not enough => only input command name without path
	then check  relative path(is there slash or dot dot in string(first char)?) => if relative path 
		then
			get shell path
			get relative path
			append command name to relative path
			chkeck exist file => if exist
			then
				fork
				exec
		else if => chek : is there the file in env path
			get env path 
			split env paths
			loop each env path
				append command to env path
				check command exist in path
				then
					return path
					break
		then
			fork
			exec
		else
			return error code
	else
		check command exist in path
		then(if exit)
			fork
			exec
		else
			return error code


  output : 

   */
/*
 * function : input_command
 * input
 * 		command(type: char array) : string as command
 * 		length(type: int) : limit command length
 * output
 * 		error_code
 */
int input_command(char * commands,int length);  
/*
 * function : split_command
 * input
 * 		command(type: char array) : string input command
 * 		command_length(type: int) : limit command length string
 *		argv(type : char (2-dimension array) : arguments splited from command
 *		argc(type : int) : count of arguments
 * output
 * 		error_code
 */
int split_command(char * command, int command_length, char ** argv, int argc);
/*
 * function : check_command_path
 * this fuction check command path type full path, relative path or only command
 * input
 * 		command(type: char array) : string as command
 * 		length(type: int) : limit command length
 * output
 * 		error_code
 */
int check_command_path(char * command, int length);
/*
 * function : check_path
 * input
 * 		check_path(type: char array) : string input path
 * 		path_length(type: int) : limit path length
 * output
 * 		check flag
 * 		0  : there is no path
 *		not 0 : true : there is path
 */
int check_path(char * path, int length);
/*
 * function : check_file
 * input
 * 		check_file(type: char array) : string input 
 * 		path_length(type: int) : limit path length
 * output
 * 		check flag
 * 		0  : there is no path
 *		not 0 : true : there is path
 */


int main() {

}
