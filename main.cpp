#include "test.h"
#include "DMRG.h"

int OP::Max;


int main()
{
        Parameter para(40, 40, 200, 6);

        OP::Max=para.D();

        DMRG Heisenberg(para);
}