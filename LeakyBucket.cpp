#include<iostream>
#include<unistd.h>
#include<stdlib.h>
#define bucketsize 512
using namespace std;

void bktInput(int a,int b)
{
if(a>bucketsize)
{
cout<<"\t\toverflow\n";
}
else
{
usleep(500);
}
while(a>b)
{
cout<<"\t\t"<<b<<"bytes outputed\n";
a-=b;
usleep(500);
}
if(a>0)
{
cout<<"\n\t\tlast "<<a<<" bytes sent\n";
//Program exited with return code: 0
cout<<"\n\t\tbucket o/p successfully\n";
}
}
int main()
{
int op,pktsize;
cout<<"enter o/p rate: ";
cin>>op;
for(int i=1;i<=5;i++)
{
usleep(rand()%1000);
pktsize=rand()%1000;
cout<<"\n packet no"<<i<<"\tpacket size="<<pktsize<<endl;
bktInput(pktsize,op);
}
return 0;
}

/*
Output:
enter o/p rate: 100

 packet no1	packet size=886
		overflow
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed

		last 86 bytes sent

		bucket o/p successfully

 packet no2	packet size=915
		overflow
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed

		last 15 bytes sent

		bucket o/p successfully

 packet no3	packet size=335
		100bytes outputed
		100bytes outputed
		100bytes outputed

		last 35 bytes sent

		bucket o/p successfully

 packet no4	packet size=492
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed

		last 92 bytes sent

		bucket o/p successfully

 packet no5	packet size=421
		100bytes outputed
		100bytes outputed
		100bytes outputed
		100bytes outputed

		last 21 bytes sent

		bucket o/p successfully
*/
