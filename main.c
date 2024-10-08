#include <stdio.h>
#include <time.h>
#include <unistd.h> // for sleep function

void display_time(){
    time_t now;// to store current
    struct tm *current;// to hold the local time

    // get the current time
    time(&now);
    // convert it to local time
    current = localtime(&now);

    // displaying time in HH:MM:SS format
    printf("\r%02d:%02d:%02d", current->tm_hour, current->tm_min, current->tm_sec);
    fflush(stdout);// ensures that the out is printed immediately
}
    // displat look like a real screen, you can clear the screen
    void clear_screen(){
        printf("\033[H\033]");
    }
    int main(){
        while (1)
        {
            clear_screen();// clear screen before showing time
            display_time();// show the current time
            sleep(1);// wait 1 second before updating
        }
        



        return 0;
    }




