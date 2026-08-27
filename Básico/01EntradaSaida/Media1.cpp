#include <stdio.h>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    double A, B, MEDIA;
    
    cin >> A >> B;
   
	MEDIA = (3.5 * A + 7.5 * B) / 11.0;
    
    cout << "MEDIA = " << fixed << setprecision(5) << MEDIA << endl;
    
    return 0;
}