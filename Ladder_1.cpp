#include<bits/stdc++.h>
using namespace std;
int a,b,c,x=0,y=0,z=0,n;
int main() {
	// your code goes here
	scanf("%d",&n);
	for(int loop=0;loop<n;loop++)
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
