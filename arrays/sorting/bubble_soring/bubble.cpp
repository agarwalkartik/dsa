#include <cstdio>
#include <iostream>
#define MAX 10

using namespace std;

//function prototype
void sortBubble(int arr[], int n);
void swap(int *a, int *b);
void sortBubbleImproved(int arr[], int n);

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
    
    sortBubbleImproved(arr, n);
    
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


//improved version
// we are adding the new flag to check if is array already sorted.
void sortBubbleImproved(int arr[], int n){
    int swapped = 1;
    int count = 0;
    
    for(int i=0; i< n && swapped; i++) {
        swapped = 0;
        count++;
        for (int j=0; j < n-i-1; j++) {
            if(arr[j] > arr[j+1] ) {
                swapped = 1;
                count++;
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
    printf("Total loop Count %d\n", count);
    
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
