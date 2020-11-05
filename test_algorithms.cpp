#include <bits/stdc++.h>
#include "Large_num.h"
#include "./toom_cook_alg.cpp.dependencies"

using namespace std;

int main()
{
    string a , b;
    cout << "Enter 2 integer numbers: ";
    cin >> a >> b;
    Large_num num1(a) , num2(b);
    Calc toom_cook_alg(b, a);

    Large_num result = num1.karatsuba(num2);
    cout << "Karatsuba methods\n";
    result.print();
    cout << "\n";

    cout << "Inverce number:\n";
    result = result.inverse_number();
    result.print();
    cout << "\n";

    cout << "Schonhage-Strasen multiplication\n";
    result = num1.schonhage_strasen(num2);
    result.print();
    cout << "\n";

    cout << "Schonhage multiolication\n";
    result = num1.schonhage_strasen(num2);
    result.print();
    cout << "\n";

    cout << "Toom-Cook multiplication\n";
    toom_cook_alg.calcToomCook();
    cout << "\n";

    cout << "Integer division:\n";
    result = num1.integer_divizion_by(num2);
    result.print(); 
    cout << "\n";

    if (num1.solovay_strassen_primality_test())
    {
        cout << "num1 is prime by SolovayStrasen test\n";
    }
    else
    {
        cout << "num1 is not prime by SolovayStrasen test\n";
    }

    if (num1.miller_rabin_primality_test())
    {
        cout << "num1 is prime by MillerRabin test\n";
    }
    else
    {
        cout << "num1 is not prime by Miller test\n";
    }

    if (num1.leman_primality_test())
    {
        cout << "num1 is prime by Leman test\n";
    }
    else
    {
        cout << "num1 is not prime by Leman test\n";
    }
    
    puts("\nProgram was made by Chomko Vasyl, student K-21.");
    
    return 0;
}
