#include <iostream>
#include <time.h>
using std::cout;
using std::cin;

int main() {
    // Use current time as seed for random generator
    srand(time(0));
    
    // Generate random number
    int lb = 0, ub = 99;
    int ans = rand() % (ub-lb+1) + lb;

    // Take input
    int guess = -100;
    do {
        cout << "Please enter your guess number: ";
        cin >> guess;
        if (guess == ans) cout << "Correct guess!\n";
        if (guess > ans) cout << "Answer is smaller.\n";
        if (guess < ans) cout << "Answer is larger.\n"; 
    } while (guess != ans);

    return 0;
}