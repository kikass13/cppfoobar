#include <stdio.h>
#include <iostream>
#include <string.h> //for memcpy

#define BUFF_SIZE 10

//struct Foo { ... };
//typedef struct Foo Foo;

typedef struct Data
{
	float x;
	float y;
	float z;

} Data;

typedef struct Foo
{ 
	int id;
	int type;

	Data data;
} Foo;


int main()
{
	//INIT DATA
	//************************************************
	std::cout << "Init ..." << std::endl;
	//create Foo data for start
	Foo foo[BUFF_SIZE];
	//assign random data
	for(int i = 0; i < BUFF_SIZE; i++)
	{
		foo[i].id = i;
		if(i % 2 == 0)
			foo[i].type = 'N';
		else
			foo[i].type = 'K';

		Data d;
		d.x = 1337.1 + i;
		d.y = 24.8 + i;
		d.z = 778.12 + i;
		memcpy(&foo[i].data, &d, sizeof(Data));
	}

	//PRINT INPUT DATA
	//************************************************
	std::cout << "Input is ..." << std::endl;
	for (int i = 0; i < BUFF_SIZE; i++)
	{
		std::cout << foo[i].data.x << ", " << foo[i].data.y << ", " << foo[i].data.z << std::endl;
	}

	//CREATE SECOND BUFFER TO COPY TO
	//************************************************
	std::cout << "Create Buffer ..." << std::endl;
	Data dataBuffer[BUFF_SIZE];
	Data* dataBufferPtr = dataBuffer;

	//COPY RELEVANT DATA (STRIDED)
	//************************************************
	std::cout << "Copy ..." << std::endl;
	//declare stride pointer to first element of strided data
	Foo* strider = (Foo*) &foo[0].data;
	std::cout << "sizeof(Foo): " << sizeof(Foo) << std::endl;
	//use loop unroll if possible
	//loop unroll parameter, see: http://fastcpp.blogspot.nl/2011/04/how-to-unroll-loop-in-c.html
	#define ROUND_DOWN(x, s) ((x) & ~((s)-1))
	const int stepsize = 1;
		//...
	//loop
	for(int i = 0; i < ROUND_DOWN(BUFF_SIZE, stepsize); i+=stepsize)
	//for (int i = 0; i < BUFF_SIZE; i++)
	{
		std::cout << " >>> " << strider << std::endl;
		//use this if you want to show that stride ptr is pointing the right memory
		//int debug = -1;
		//memcpy(&debug, strider++, sizeof(int));
		//std::cout << debug << std::endl;
		
		memcpy(dataBufferPtr++, strider++, sizeof(Data) );
	}

	//PRINT RESULT DATA
	//************************************************
	std::cout << "Result ..." << std::endl;
	for (int i = 0; i < BUFF_SIZE; i++)
	{
		std::cout << dataBuffer[i].x << ", " << dataBuffer[i].y << ", " << dataBuffer[i].z << std::endl;
	}

	return 0;
}