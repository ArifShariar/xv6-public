#include "types.h"
#include "user.h"
#include "fcntl.h"

int main(int argc, char *argv[]){
    printf(1, "%d\n", incr(atoi(argv[1])));
    exit();
}