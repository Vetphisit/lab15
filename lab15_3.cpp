#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[] = {1,2,4,6,9}; 
    double b[] = {5.5,2.1,13,-7,6.9,0,25,11.1,-4}; 

    int na = sizeof(a)/sizeof(a[0]);
    int nb = sizeof(b)/sizeof(b[0]);

    int *pa = max_element(a, a + na); // ระบุช่วงของ array a
    cout << "Address of the highest value in array A is " << pa << "\n";
    cout << "The highest value in array A is "<< *pa << "\n"; // ใช้ *pa เพื่อเข้าถึงค่า

    double *pb = max_element(b, b + nb); // ระบุช่วงของ array b
    cout << "Address of the highest value in array B is " << pb << "\n";
    cout << "The highest value in array B is "<< *pb << "\n"; // ใช้ *pb เพื่อเข้าถึงค่า

    return 0;
}