#include <stdio.h>
#include <unistd.h>

int main() {
    int h = 0, m = 0, s = 0;
    
    printf("⏱️  Stopwatch (Press Ctrl+C to stop)\n");
    
    while(1) {
        printf("\r%02d:%02d:%02d", h, m, s);
        fflush(stdout);
        s++;
        
        if(s == 60) {
            s = 0;
            m++;
        }
        if(m == 60) {
            m = 0;
            h++;
        }
        sleep(1);
    }
    return 0;
}
