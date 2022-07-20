#include <stdio.h>
#include <stdint.h>
#include <netinet/in.h>
#include <stdlib.h>
int main(){
	FILE *fp = fopen("a.bin","rb");
	if(fp == NULL){
		printf("a.bin open error!!");
		return 1;
	}
	uint32_t a;
	fread(&a, 4, 1, fp);
	a = ntohl(a);
	fclose(fp);

	fp = fopen("c.bin","rb");
	if(fp == NULL){
		printf("a.bin open error!!");
		return 1;
	}
	uint32_t c;
	fread(&c, 4, 1, fp);
	c = ntohl(c);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", a, a, c, c, (a+c), (a+c));
	fclose(fp);
	return 0;
}

