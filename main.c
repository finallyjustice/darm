#include <stdio.h>
#include <stdint.h>

typedef struct _darm_t {
} darm_t;

int darm_armv7(darm_t *d, uint32_t insn);

int main()
{
    darm_t d;
    printf("-> %d\n", darm_armv7(&d, 0xe2a34fff));
    printf("-> %d\n", darm_armv7(&d, 0xe0a34fff));
}
