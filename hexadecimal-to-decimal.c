// Hexadecimal to decimal

#include<stdio.h>
void main()
{
	int hex_n=0,remainder,decimal_n=0,i=0;
	printf("\n Enter Hexadecimal number: ");
	scanf("%d",&hex_n);
	while(hex_n != 0)
	{
		remainder = hex_n % 10;
		decimal_n += remainder * pow(16,i);
		hex_n/=10;
		i++;
	}
	printf("\n The Decimal equivalent = %d",decimal_n);
}
