//Q132.Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.
#include <stdio.h>

int main() {
    enum TrafficLight {RED, YELLOW, GREEN};
    enum TrafficLight signal;

    signal = RED;   // You can change this to YELLOW or GREEN

    if(signal == RED)
        printf("Stop\n");
    else if(signal == YELLOW)
        printf("Wait\n");
    else if(signal == GREEN)
        printf("Go\n");

    return 0;
}
