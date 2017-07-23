#include "test.h"
#include "DMRG.h"

int OP::Max;


int main()
{
        Parameter para(100, 100, 200, 6);

        OP::Max=para.D();

        DMRG Heisenberg(para);
}