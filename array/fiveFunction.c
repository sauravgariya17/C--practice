// insertion , deletion , searching , traverse using switch and functions

#include <stdio.h>

void insert(int arr[], int *ld, int size, int pos, int ele) {

    if (*ld == size - 1) {
        printf("Array is full\n");
        return;
    }
    else if (pos < 0 || pos > *ld + 1) {
        printf("Invalid position\n");
        return;
    }
    else if (pos == *ld + 1) {   // insert at end
        arr[pos] = ele;
        (*ld)++;
        printf("Element inserted at end\n");
    }
    else {   // insert in middle
        for (int i = *ld; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }
        arr[pos] = ele;
        (*ld)++;
        printf("Element inserted at position %d\n", pos);
    }
}

// DELETE FUNCTION
void del(int arr[], int *ld, int pos) {

    if (*ld == -1) {
        printf("Array is empty\n");
        return;
    }
    else if (pos < 0 || pos > *ld) {
        printf("Invalid position\n");
        return;
    }
    else if (pos == *ld) {   // delete from end
        (*ld)--;
        printf("Element deleted from end\n");
    }
    else {   // delete from middle
        for (int i = pos; i < *ld; i++) {
            arr[i] = arr[i + 1];
        }
        (*ld)--;
        printf("Element deleted from position %d\n", pos);
    }
}

// SEARCH FUNCTION
void search(int arr[], int ld, int ele) {
    if (ld == -1) {
        printf("Array is empty\n");
        return;
    }

    for (int i = 0; i <= ld; i++) {
        if (arr[i] == ele) {
            printf("Element found at position %d\n", i);
            return;
        }
    }
    printf("Element not found\n");
}

// TRAVERSE FUNCTION
void traverse(int arr[], int ld) {
    if (ld == -1) {
        printf("Array is empty\n");
        return;
    }

    printf("Array elements: ");
    for (int i = 0; i <= ld; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    int ld = -1;   // FIRST APPROACH → array initially empty

    int choice, pos, ele;

    do {
        printf("\n1. Insertion");
        printf("\n2. Deletion");
        printf("\n3. Searching");
        printf("\n4. Traversing");
        printf("\n5. Exit");
        printf("\nEnter choice: ");
        scanf("%d", &choice);

        switch (choice) {
        case 1:
            printf("Enter position (0 to %d): ", ld + 1);
            scanf("%d", &pos);
            printf("Enter element: ");
            scanf("%d", &ele);
            insert(arr, &ld, size, pos, ele);
            break;

        case 2:
            printf("Enter position (0 to %d): ", ld);
            scanf("%d", &pos);
            del(arr, &ld, pos);
            break;

        case 3:
            printf("Enter element to search: ");
            scanf("%d", &ele);
            search(arr, ld, ele);
            break;

        case 4:
            traverse(arr, ld);
            break;

        case 5:
            printf("Program exited\n");
            break;

        default:
            printf("Invalid choice\n");
        }

    } while (choice != 5);

    return 0;
}
