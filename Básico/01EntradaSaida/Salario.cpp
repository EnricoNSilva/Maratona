#include <stdio.h>
#include <iostream>
using namespace std;
#include <bits/stdc++.h>

int main() {
    int NumFunc, TrabHrs;
    
    double ValHrs, Salario;
    
    cin >> NumFunc >> TrabHrs >> ValHrs;
   
    Salario = TrabHrs * ValHrs;
       
    cout << "NUMBER = " << NumFunc  << endl;
    cout << "SALARY = U$ " << fixed << setprecision(2) << Salario << endl;
    return 0;
}