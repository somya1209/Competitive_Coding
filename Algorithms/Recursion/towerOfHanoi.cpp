//author:somya
//solution to problem -Help the Old Man-geeksforgeeks

#include <iostream>
using namespace std;
int count;
void toh(int n,char src,char temp,char dest,int times)
{
	if(n==1 )
	{count++;
	 if(count==times)
	cout<<src-64<<" "<<dest-64<<endl;
	}
	else
	{
		toh(n-1,src,dest,temp,times);
			// if(count==times)
			count++;
		 if(count==times)	
		cout<<src-64<<" "<<dest-64<<endl;
		toh(n-1,temp,src,dest,times);
	}
	
}
int main() {
	int t,n,tim;
	// your code goes here
	cin>>t;
	while(t--)
	{count=0;
		cin>>n>>tim;
	toh(n,'A','B','C',tim);
	
	}
	return 0;
}
