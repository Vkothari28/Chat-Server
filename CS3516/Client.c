/*
 * Client.c
 *
 *  Created on: Jun 23, 2019
 *      Author: vinit
 */

#include <iostream>
#include <stdio.h>
#include <sys/socket.h>
#include <unistd.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>


char*connectionstats(char* user){

	char *S;


		char *msgstat = "USER_CONNECT:";
		int size = strsize(user) + strsize(msgstat) + 1;


		S = malloc(sizeof(char) * (size));

		strcat(S, user);


		strcat(S, msgstat);


		*(S + size) = '\0';


		return S;
}


// the connection message
char* msgconnection(char*user){

int msgstat= "USER_CONNECT";
char *S;





int size = strsize(user) + strsize(msgstat) + 1;
	S = malloc(sizeof(char) * (size));


	strcat(S, user);

	strcat(S, msgstat);





	*(S + size) = '\0';

	return S;
}




char* msgdisc(char* username){


}
