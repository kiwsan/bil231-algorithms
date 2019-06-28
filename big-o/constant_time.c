//Big-O

#include <stdio.h>
#include <stdlib.h>
#include <sys/timeb.h>

#define ARRAY_SIZE 10000
#define SIZE_1 10
#define SIZE_2 100
#define SIZE_3 10000
#define EXECUTION_COUNT 100000

int get_item(int* a, int i);
float elapsed_time(struct timeval t0, struct timeval t1);
int run_and_measure(int* a, int size);

int main() {
    int i = 0;
    int *a = NULL;

    a = malloc(ARRAY_SIZE * sizeof(int));

    for (i = 0; i < 10000; i++)
    {
        a[i] = i;
    }
    
    run_and_measure(a, SIZE_1);
    run_and_measure(a, SIZE_2);
    run_and_measure(a, SIZE_3);

    free(a);

    return EXIT_SUCCESS;
}

int run_and_measure(int* a, int size) {
    struct timeval t0;
    struct timeval t1;
    int i = 0;

    gettimeofday(&t0, 0);
    
}