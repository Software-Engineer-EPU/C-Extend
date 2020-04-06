#include <bits/stdc++.h>
using namespace std;

long long int gt(long long int n)
{
	long long int s = 1;
	for (long long int i = 1; i <= n; i++)
		s *=i;
	return s;
}
int main()
{
	long long int n,x,s = 0;
	do cin >> n; while (n > 15);

	/*
	//string s = to_string(gt(n));
	string s;
	ostringstream convert;   
    convert << gt(n);
    s = convert.str();
    for ( int i = 0; i < s.length(); i++){
    	stringstream strtonum(s[i]);
    	strtonum >> x;
    	sum +=x;

    }

    */
   	x = gt(n);
   	while (x/10 != 0){
   		s+=x%10;
   		x/=10;
   }
   cout << s+x;
 

}