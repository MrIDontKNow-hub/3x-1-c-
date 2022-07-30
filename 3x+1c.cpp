// 3x+1c.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    int x = 1;
    int a = 1;
    int c1 = 1;
    int c2 = 1;
    string lv;
    ifstream lv1("LastVal.txt");
    while (getline ( lv1,lv ))
    {
        a = std::stoi(lv);
    }
    lv1.close();



label1:
    c1 = 1;
    cout << x << endl << endl;
    while (x != 1)
    {

        if (x % 2 == 0)
        {
            x = x / 2;

            c1++;
           
        }
        else
        {
            x = x * 3;
            x = x + 1;
            c1++;
        }
        
        cout << x << endl;



    }
    if (c1 > c2)
    {
        c2 = c1;
        ofstream lv3("LoopMax.txt");
        lv3 << "Nr " << a << " a avut un loop de " << c2 << "             //";
        lv3.close();
    }
    



    cout << endl;
    a = a + 1;
    x = a;
    ofstream lv2("LastVal.txt");
    lv2 << x;
    lv2.close();
    goto label1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
