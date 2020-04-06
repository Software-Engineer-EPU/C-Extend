#include <bits/stdc++.h>
using namespace std;
void check (int a)
{
	if (a < 0 || a > 10) {
		cout << "-1";
		return;
	}
	else if (a >= 9) {
			cout << "A+";
			return;
		}

	 	else if (a >= 8) {
				cout << "A";
				return;
			}

			else if (a >= 7) {
					cout << "B";
					return;
				}

				else if (a >= 6) {
						cout << "C";
						return;
					}

					else if (a >= 5) {
							cout << "D";
							return;
						}

						else if (a < 5) {
								cout << "E";
								return;
						}
	
}
int main()
{
	int n;
	float a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	for (int i = 0; i < n; i++) {
		check (a[i]);
		cout << endl;
	}
}