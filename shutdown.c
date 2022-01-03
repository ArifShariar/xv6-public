// a normal file to implement shutdown command in xv6
#include "types.h"
#include "stat.h"
#include "user.h"

int main(int argc, char * argv[])
{
    printf(1, "Shutting down....\n");
    shutdown();
    exit();
}