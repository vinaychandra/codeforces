// http://codeforces.com/problemset/problem/459/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int x1,x2,y1,y2;
	cin>>x1>>y1>>x2>>y2;

	if (x1 == x2)
	{
		int dist = abs(y2-y1);
		x1 += dist;
		x2 += dist;
		cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;
	}
	else if (y1 == y2)
	{
		int dist = abs(x2-x1);
		y1 += dist;
		y2 += dist;
		cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;		
	}
	else if (abs(x2 - x1) == abs(y2 - y1))
	{
		cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
	}
	else
	{
		cout<<"-1";
	}
	cout<<endl;
}