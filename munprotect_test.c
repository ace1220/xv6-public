//
// Created by k20006917 (Grace Edgecombe) on 4/13/22.
//

#include "types.h"
#include "mmu.h"
#include "types.h"
#include "user.h"


// passing to command line as an option
int
main(void)
{
    char *start = sbrk(0);
    sbrk(PGSIZE);
    *start = 0;
    int status = munprotect(start, 1);
    if (status == -1) {
        printf(1, "\nWas not able to perform instruction as expected.\n");
    }
    else {
        printf(1, "\nA page entry now readable and writable.\n");
    }
    exit();
}
