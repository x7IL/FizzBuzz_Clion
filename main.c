#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/*
 *
 /B-CPE-210> ./a.out10 15 | cat -e
Buzz$
11$
Fizz$
13$
14$
FizzBuzz$
 /B-CPE-210> ./a.out 2 1 >/dev/null || echo "Exit status: $?"
Error: the second parameter must be greater than the first one.
Exit status: 84
 /B-CPE-210> ./fizzbuzz
Exit status: 84
 *
 */

int main(int argc, char ** argv) {
    if(argv[1] == NULL){
        return 84;
    }
    else if(atoi(argv[1]) < atoi(argv[2])) {
        for (int i = atoi(argv[1]); i < atoi(argv[2]) + 1; i++) {
            (i % 3 == 0) ? printf("Fizz") : 0;
            (i % 5 == 0) ? printf("Buzz") : 0;
            (i % 3 != 0 && i % 5 != 0) ? printf("%d",i) : 0;
            printf("\n");
        }
        return 0;
    }
    else {
        write(2,"the second argument must be greater than the first one\n",56);
    }
    return 84;
}
