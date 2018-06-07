#include <cstdio>
#include <iostream>
#define MAX 10

using namespace std;

//function prototype
int gcd(int a, int b);

void rotateUsingTemp(int arr, int n, int d);

void rotateByOne(int arr, int n, int d);

void rotateUsingGcd(int arr, int n, int d);

// main function
int main() {
    
    int val = gcd(2, 4);
    printf("%d\n", val);
    //printf("%d\n", 4%2);
    
    return 0;
}

// function declaration

void rotateUsingTemp(int arr, int n, int d) {
    
    //    int b[];
    //    for (int i=0; i < n;  i++) {
    //        statements
    //    }
    
    
}

int gcd(int a, int b) {
    if(b == 0) {
        return a;
    }
    else {
        return gcd(b, a%b);
    }
}




