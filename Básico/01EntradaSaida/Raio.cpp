#include <stdio.h>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
	
    double pi = 3.14159; 
    double raio;
    
    cin >> raio;
    
    double area = raio * raio * pi;

     
    cout << "A=" << fixed << setprecision(4) << area << endl ; // Colocar o setprecision e o fixed direto no cout
    
    return 0;
}