#include<stdio.h>		
#include<string.h>		

char* encrypt(char msg[])		
{
	
	for(int i=0;i<strlen(msg);i++)
	{
		if ((int)msg[i]>=65 && (int)msg[i]<=90)	
		{
			msg[i]=(char)((((int)msg[i]-65+1)%26)+65);
		}
		if((int)msg[i]>=97 &&(int)msg[i]<=122)
			msg[i]=(char)((((int)msg[i]-97+1)%26)+97);

	}
	return msg;
}
char* decrypt(char msg[])		
{	
	for(int i=0;i<strlen(msg);i++)	
	{
		if ((int)msg[i]>=65 && (int)msg[i]<=90)
		{
			int a=((int)msg[i]-65-1);	
			
			if(a<0)
				{
					msg[i]=26+a+65;	
					continue;
				}
			msg[i]=(char)((a%26)+65);
		}
		if((int)msg[i]>=97 && (int)msg[i]<=122)
		{
			int a=(int)msg[i]-97-1;
			if(a<0)
			{
				msg[i]=26+a+97;
				continue;
			}
			msg[i]=(char)(a%26+97);
		}
	}
	printf("%s\n",msg);
}
int main()		
{
	char msg[100];char *encrypted;		
	printf("enter the msg to encrypt\n");
	fgets(msg, sizeof(msg), stdin);;	
	printf("the encryption of msg is\n");
	encrypted=encrypt(msg);
	printf("%s",encrypted);
	printf("decryption of the encrypted msg is\n");
	decrypt(encrypted);	
	return 0;
}
	
