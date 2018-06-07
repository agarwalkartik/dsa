#include <cstdio>
#include <iostream>
#define MAX 10

using namespace std;

//function prototype
void sortSelection(int arr[], int n);
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
    
    sortSelection(arr, n);
    
    printf("Sorted Array:\n");
    
    for (int i=0; i < n; i++) {
        printf("%d\t", arr[i]);
    }
    
    return 0;
}

// function declaration
void sortSelection(int arr[], int n){
    
    int min;
    
    for(int i=0; i< n-1; i++) {
        
        min = i;
        
        for (int j=i+1; j<n; j++) {
            if(arr[min] > arr[j]) {
                min = j;
            }
        }
        
        // printf("%d\n", arr[min]);
        swap(arr[min], arr[i]);
    }
    
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}


