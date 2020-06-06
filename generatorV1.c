#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char chars[32]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','2','3','4','5','6','7'};
int size=16;
char address[16];
int main(){
	srand(time(NULL));
	for(int i=0;i<size;i++){
		address[i]=chars[rand()%32];
	}
	printf("%s", address);
	return 0;
}
