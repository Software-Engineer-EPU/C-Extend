#include <bits/stdc++.h>
using namespace std;
void tgPascal(int size){
    int PascalTr[size][size]; 
    int hang,cot; 
    for(hang=0;hang<size;hang++) 
        for(cot=0;cot<size;cot++)  PascalTr[hang][cot]=0; 
            PascalTr[0][0]=1; 
            PascalTr[1][0]=1; 
            PascalTr[1][1]=1; 
         
        for(hang=2;hang<size;hang++) { 
            PascalTr[hang][0]=1; 
            for(cot=1;cot<=hang;cot++) { 
                PascalTr[hang][cot]=PascalTr[hang-1][cot-1]+PascalTr[hang-1][cot]; 
            } 
        } 
        for(hang=0;hang<size;hang++) { 
            for(cot=0;cot<=hang;cot++) {                
                cout << PascalTr[hang][cot];
            } 
            cout<<endl;   
        } 
         
}

int main() 
{
    int size; 
    cin >> size; 
    tgPascal(size); 
    return 0; 
}