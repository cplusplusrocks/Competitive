
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int a,b,c,x=0,y=0,z=0,n;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d%d%d",&a,&b,&c);
		x+=a;
		y+=b;
		z+=c;
	}
	if(x==0&&y==0&&z==0)
	printf("YES");
	else
	printf("NO");
	return 0;
}
