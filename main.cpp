#include <iostream>
using namespace std;
#include <vector>
#include <stdlib.h>
#include <algorithm>
#include <fstream>

int main()
{
	fstream fin;
	fin.open("file.in",ios::in);
	if(!fin)
	{
		cout<<"file open error\n";
		return 0;
	}
	int n;
	fin>>n;
	vector<int> m(n);
	for(int i=0;i<n;i++)
		fin>>m.at(i);

	sort(m.begin(),m.end());
	int sum=0;
	for(int i=0;i<5;i++)
		sum=sum+m.at(n-1-i);
	
	cout<<sum<<endl;
	return 0;
}
