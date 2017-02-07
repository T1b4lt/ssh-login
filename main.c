/*
####################################################################
#   Made by T1b4lt                                                 #
#                                                                  #
#                                                                  #
#   A simple ssh_login                                             #
#   In line 23 user@ip-adress maybe changed (ex: root@255.255.0.0) #
#   In line 24 password maybe changed with yours                   #
#   You maybe have installed sshpass                               #
#   Installing tutorial: sudo apt-get install sshpass              #
#                                                                  # 
#   v1.0                                                           #
####################################################################
*/
#include "ssh_login.h"


int main(int argc, char** argv)
{

	char cmd[100]="";
	char sshpass[12]="sshpass -p ";
	char ssh[35]=" ssh user@ip-adress";/*change user and ip-adress*/
	char pwd[35]="password";/*change the password*/


	strcat(cmd, sshpass);
	strcat(cmd, pwd);
	strcat(cmd, ssh);
	fprintf(stdout, "\nGenerated command: %s\n", cmd);

	if(system(cmd)==ERR)
	{
		fprintf(stderr, "\nERR at ssh command\n");
		return ERR;
	}

	fprintf(stdout, "\nThanks for using ssh_login. Created by T1b4lt.\n");

	return 0;

}
