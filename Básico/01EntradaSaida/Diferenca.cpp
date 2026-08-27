#include <stdio.h>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    int A, B, C, D, DIFERENCA;
    
    cin >> A >> B >> C >> D;
   
	DIFERENCA = (A * B - C * D);
    
    cout << "DIFERENCA = " << fixed << setprecision(1) << DIFERENCA << endl;
    
    return 0;
}