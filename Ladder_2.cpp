#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,j,x,y,n,ans=0;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&n);	
			if(n!=0)
			{
				x=i+1;
				y=j+1;
			}
		}
	}
	if(x>3)
	ans+=x-3;
	else
	ans+=3-x;
	if(y>3)
	ans+=y-3;
	else
	ans+=3-y;
	printf("%d",ans);
	return 0;
}
