#include<stdio.h>

int main() {
    int input[100], size = 0;
    int i, j, count;
    int visited[100] = {0};  // Keeps track of visited elements

    printf("Enter the size (up to 100): ");
    scanf("%d", &size);

    printf("Enter the %d values:\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &input[i]);
    }

    printf("\nUnique values and their frequency:\n");
    for(i = 0; i < size; i++) {
        if(visited[i] == 1)
            continue;

        count = 1;
        for(j = i + 1; j < size; j++) {
            if(input[i] == input[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("%d appears %d times\n", input[i], count);
    }

    return 0;
}