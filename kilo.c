#include<unistd.h>

int main(){
    char c;
    /*
    To find more information about read, run: man 2 read
    read returns the number of bytes read on success and -1 on failure.
    STDIN_FILENO is a macro defined in <unistd.h> that is a file descriptor for stdin, which is always 0.
    */
    while(read(STDIN_FILENO, &c, 1) == 1 && c != 'q');
    return 0;
}
