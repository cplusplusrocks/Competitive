#include<bits/stdc++.h>
using namespace std;
long long int a,b,c,x=0,y=0,z=0,n;
int main() {
	// your code goes here
	scanf("%lld",&n);
	for(int loop=0;loop<n;loop++)
	{
		scanf("%lld%lld%lld",&a,&b,&c);
		x+=a;
		y+=b;
		z+=c;
	}
	if(x==0&&y==0&&z==0)
	printf("YES\n");
	else
	printf("NO\n");
	return 0;
}
