#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
#include <string.h>
char chars[32]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','2','3','4','5','6','7'};
int size1=16;
int size2=29;
char address[16];
char fullAddress[29]="http://";
void adGen(FILE *fp){
	char onion[6]=".onion";
	srand(time(size2)); 
	for(int i=0;i<size1;i++){
		address[i]=chars[rand()%32];
	}
	strcat(fullAddress, address);
	strcat(fullAddress, onion);
	fprintf(fp, "%s\n", fullAddress);
	return;
}

void fac(){
	FILE *fp;
	fp = fopen("addresslist.txt","w");
	adGen(fp);
	fclose(fp);
	return;
}

void main(){
size2=69;
for(int i=1;i<INT_MAX;i++){
	size2++;
	fac();
}
}
