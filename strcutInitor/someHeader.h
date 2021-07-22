

#include <stdio.h>
#include "main.h"

void outputTest(struct test* obj)
{
	//std::cout << (int) obj.blub[0] << (int) obj.blub[1] << (int) obj.blub[2] << (int) obj.blub[3] << std::endl;
	printf("%d%d%d%d\n", obj->blub[0], obj->blub[1], obj->blub[2], obj->blub[3]);
	printf("%c", obj->xaxa);
}

