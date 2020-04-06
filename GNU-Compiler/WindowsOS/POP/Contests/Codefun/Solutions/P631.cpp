/* Code by KingNNT */

#include <bits/stdc++.h>
using namespace std;

void Filter_Duplicate_Dumbers_with_Dynamic_Memory (long int *&a, long int &n)
{
	for (long int i = 0; i < n; i++)
	    for (long int t = i+1; t < n; t++) {
	    	while (a[i] == a[t]) {
	        	for (long int j = i; j < n; j++)            
	            	a[j] = a[j+1];
	        		n--;        
	        }    
	    }
}


//<---------------------------------------------------------------------->//

int main()
{
	long int n; cin >> n;
	long int* a = new long int[n];

	for (long int i = 0; i < n; i++) 
		cin >> a[i];
	Filter_Duplicate_Dumbers_with_Dynamic_Memory(a,n);
	cout << n;
	return 0;
}