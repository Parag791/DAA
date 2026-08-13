1.#include<stdio.h>

int main() {
    T l = range(0, 20, 10);
    printf("%s\n", str(l));

    T m = new();
    int step = 4;

    for (int i = 0; i < len(l); ++i) {
        push(m, get(l, (i + step) % len(l)));
    }

    printf("%s\n", str(m));

    return halt();
}
2.#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    int a[100];
    int smallest = INT_MAX, secondSmallest = INT_MAX;
    int largest = INT_MIN, secondLargest = INT_MIN;

    printf("Enter size of array: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] < smallest) {
            secondSmallest = smallest;
            smallest = a[i];
        } else if (a[i] < secondSmallest && a[i] != smallest) {
            secondSmallest = a[i];
        }

        if (a[i] > largest) {
            secondLargest = largest;
            largest = a[i];
        } else if (a[i] > secondLargest && a[i] != largest) {
            secondLargest = a[i];
        }
    }

    printf("Second smallest = %d\n", secondSmallest);
    printf("Second largest = %d\n", secondLargest);

    return 0;
}
