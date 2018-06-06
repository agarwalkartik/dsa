#include <cstdio>
#include <iostream>
#define MAX 10

using namespace std;

//function prototype
void sortBubble(int arr[], int n);
void swap(int *a, int *b);

// main function
int main() {
    
    int n;
    int arr[MAX];
    printf("Enter the array length. Maximum would be 10.\n");
    cin >> n;
    
    printf("Enter numbers...\n");
    
    for (int i=0; i < n; i++) {
        cin >> arr[i];
    }
    
    sortBubble(arr, n);
    
    printf("Sorted Array:\n");
    
    for (int i=0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}

// function declaration
void sortBubble(int arr[], int n){
    
    for(int i=0; i< n; i++) {
        
        for (int j=0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1] ) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }

}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
