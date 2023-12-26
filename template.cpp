#include <bits/stdc++.h>
using namespace std;

//template <class val>

template <class val1, class val2>
void swapVal(val1 &a, val2 &b){
    val1 temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int intX = 2, intY = 3;
    double doubleX =1.2, doubleY = 3.1;
    string str1 = "Code", str2 = "Learn";
    swapVal(intX, intY);
    cout<<"intX = "<< intX << "\tinY = "<<intY<<endl;
    swapVal(doubleX, doubleY);
    cout<<"doubleX = "<<doubleX<<"\tdoubleY = "<<doubleY<<endl;
    swapVal(str1, str2);
    cout<<"Str1 = "<<str1<<"\tstr2 = "<<str2<<endl;
    return 0;
}