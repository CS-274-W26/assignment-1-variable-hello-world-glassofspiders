#include <stdio.h> // Necessary for printf()
#include <stdlib.h> // Necessary for rand()/ srand()
#include <time.h> // Necessary for time()

int main() {

    // Random number seed    
	srand(time(NULL));

    // Generates random number 0-10
	int num = rand() % 11;

    // Selects phrase based off random number (0-10) generated
	if(num < 5){

        printf("Eat more beef, kick less cats");
    }else if(num < 10){

        printf("FRODO LIVES");
    }else if(num == 10) {

        printf("Larn is the best roguelike");
    }

return 0;
}
