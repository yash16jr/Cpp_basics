#include<iostream>
#include<ostream>
using namespace std;

// If an array is declared in main, the max size can be of 10^6 for int type , 10^7 for bool
// But if declared gloabally, the max size can be of 10^7 for int, 10^8 for bool
// All globally declared variables will have 0 as default instead of gargbage values

// RECURSION

void print_name(int i, int n){ 
    if (i > n){
       return;
    }
    cout << "Name: Yash" << endl;
    print_name(i +1, n);
}


//Summation of n numbers using recursion
// TC is exponential: 2^n
int sum_n(int n){
    if (n <= 0) return 0; 
    return n + sum_n(n-1); 
    // sum of that number + sum of all the numbers before it
}

// factorial of a number using recursion
int factorial(int n){
    if (n == 0) return 1;
    return n * factorial(n-1);
}

// reversing a string using recursion
string reverse(int l, int r, string s){
    if (l >= r) return s;
    char temp = s[l];
    s[l] = s[r-1];
    s[r-1] = temp;
    return reverse(l + 1, r - 1, s);
}

// Fibonacci number using recursion
int fib(int n){
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int ptr(){
    int x = 3;
    int* p = &x; // int* type for pointers
    cout<<"Memory location of x is "<<p<<endl;
    cout<< p <<endl;
    // Getting the value at pointer p
    cout<< *p << endl; 
 
}

void swap(int* x, int* y){

    int temp = *x;
    *x = *y;
    *y = temp;

}
 






int main(){
    //print_name(0, 4);

    //cout << sum_n(5);

    //cout << factorial(6);

    // string s = "this will be reversed";
    // cout << reverse(0, s.length(), s);

    //cout << fib(7);
    //ptr();

    int x = 45;
    int y = 15;

    cout << "x = " << x << endl;
    cout <<"y = " << y << endl;
    swap(x, y);
    cout << "x = " << x << endl;
    cout <<"y = " << y << endl;
    return 0;
}


