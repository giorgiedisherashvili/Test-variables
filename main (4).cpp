/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{

    int array [5] { 1, 2, 3, 4, 5};
    
    array [0] = 5;
    array [1] = 10;
    array [2] = 20;
    array [3] = 30;
    array [4] = 40;
    
    
    cout << array[0] + array[1] + array[2] + array[3] + array[4] << endl;
    cout << (array[0] + array[1] + array[2] + array[3] + array[4]) / 5 << endl;
    
    


}