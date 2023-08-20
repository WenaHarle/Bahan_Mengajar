#include <stdio.h>

int main() {
    int choice;
    printf("Choose an option (1-3): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1: printf("Hello\n"); break;
        case 2: printf("World\n"); break;
        case 3: printf("Goodbye\n"); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}

