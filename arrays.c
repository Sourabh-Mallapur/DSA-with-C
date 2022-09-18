#include <stdio.h>

// Insertion − add an element at given index.
// Deletion − delete an element at given index.
// Search − search an element using given index or by value.
// Update − update an element at given index.

/*******************************************************
/ * to initialize array of given size
********************************************************/
void initialize_array (int * arr, int size);

/*******************************************************
/ * to insert given element at given index
********************************************************/
void insert_element (int * test, int element, int index, int size);

void print_array (int * test, int size);


int main (void) {
    // creating a array
    int size;
    printf("Enter The Size of Your Numeric Array\n");
    scanf("%d",&size);
    int arr[size];
    printf("Successfully Created an Array of Size %d \n", size);
    initialize_array(arr, size);
    print_array(arr, size);
    insert_element(arr, 2, 2, size);
    print_array(arr, size);
}

void initialize_array (int * arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter element at Index %d - \n", i);
        scanf("%d", arr + i);
    }
}

void print_array (int * arr, int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}


// insert element in the middle of array 
// remove element in the middle of array
void insert_element (int * arr, int element, int index, int size) { 
    if ( index < 0) {
        printf("Underflow, Index does not Exist!");
    }
    if ( index > size ) {
        printf("Overflow, Index does not Exist!");
    }
    else {
        int arr_new[size + 1];
        int i = 0;
        for (; i != index; i++) {
            arr_new[i] = * (arr + i);
        }
            arr_new[i] = element;
            i += 1;
        for (; i < (size + 1); i++) {
            arr_new[i] = * (arr + i - 1);
        }  
    }
}