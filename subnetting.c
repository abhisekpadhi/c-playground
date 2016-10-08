#include <stdio.h>
#include <math.h>

int unusedbits (int a)
{
  int i;
  for (i=0;;i++)
  {
    if ( a<=(pow(2,i)-2) )
    break;
  }
  return i;
}

char findclass (int a)
{
	if (a <= (pow(2,8)-2))
		return 'c';
	else if (a <= pow(2,16)-2 && a >= (pow(2,8)-2))
		return 'b';
	else if (a <= pow(2,24)-2 && a >= (pow(2,16)-2))
		return 'a';
	else
		return 'd';
}
int calcx (char c, int a)
{
	if ( c == 'c')
		return (8-a);
	else if (c == 'b')
		return (16-a);
	else if (c == 'a')
		return (24-a);
}

void calcsubnet (int a,int b,char c)
{
	int i,j,k,s=0,validsubnet;
	if (c == 'c')
	{
		for (i = 0,j=7; i < a; i++,j--)
		{
			s+=pow(2,j);
		}
		printf("\nCLASS = C");
		printf("\nDefault Subnet Mask : 255.255.255.0");
		printf("\nSubnet Mask : 255.255.255.%d",s);
		validsubnet = 256 - s;
		for (i = 0,j = 0; j<=s ; ++i,j+=validsubnet)
		{
			printf("\nIP range for Subnet - %d: 192.168.0/1/2.%d to 192.168.0/1/2.%d",i,(j+1),(j+(validsubnet-2)));
		}		
		printf("\n");

	}

	else if (c=='b')
	{		
		//s=0;
		printf("\nCLASS = B");
		printf("\nDefault Subnet Mask : 255.255.0.0");
		printf("\nSubnet Mask : 255.255.255.");
		for (i=0, j=7; i < a ; i++, j--)
		{
			// if (i=8)
			// 	s=0;

			s+=pow(2,j);

			if (s==255)
			{
				printf("%d",s);
				s = 0;
				j = 8;
			}

			// if (i=7)
			// {
			// 	printf("%d",s);
			// 	j=8;
			// 	//s=0;
			// }
		}
		printf(".%d",s);


		validsubnet = 256 - s;
		for (i = 0,j = 0,k=0; k>255 ; ++i,j+=validsubnet)
		{
			if (j>255)
				j=0;
			printf("\nIP range for Subnet - %d: 172.16.%d.%d to 172.16.%d.%d",i,k,(j+1),k,(j+(validsubnet-2)));
			if (j>255)
				k++;
		}		
		printf("\n");
	}

	else if (c=='a')
	{
		/* code */
	}

	else
		printf("\n ERROR IN CLASS CALCULATION");
}

int main ()
{
  int noh,un,x;
  char c;
  printf("\n How many hosts ? :");
  scanf("%d",&noh);
  c=findclass (noh);
  printf("\n %d Numbers of hosts can be accomodated in class %c",noh,c);
  un=unusedbits (noh);
  x=calcx (c,un);
  //printf("\n Maximum number of subnets : ",pow(2,x));
  calcsubnet (x,un,c);
  return 0;

}
