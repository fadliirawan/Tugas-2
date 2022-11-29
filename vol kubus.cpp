#include <stdio.h>
int main(){
	int s,vol;
	printf("input sisi kubus : ");
	scanf("%i", &s);
	vol=s*s*s;
	
	if(s <= 10){
	printf("\nvolume kubus adalah : %i", vol); 
}
	else if(s > 10){
	printf("\nprogram gagal");
}
	return 0;
}
