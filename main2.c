#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gcd(int x, int y){
	while (y!= 0){ // ogdoh too 0tei tentsentsuu bish bn
		int temp=y; // y iig tur orluulah huvisagchid hiine
		y=x%y;
		x=temp;
	}
	return x;
}

int lcm(int x, int y){
	return (x*y / gcd(x,y));
}

int main(void){
    int x,y;
    printf("Enter number: ");
    scanf("%d%d", &x, &y);

    printf("gcd=%d\n", gcd(x,y));
    printf("lcm=%d\n", lcm(x,y));
    return 0;
   
}