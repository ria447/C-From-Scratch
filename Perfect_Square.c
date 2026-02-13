#include <stdio.h>
#include <math.h>

bool isPerfectSquare(int num) {

    int answer;

    answer = sqrt(num);

    if (answer * answer == num)
        return 1;
    else
        return 0;
}
