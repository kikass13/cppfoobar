#include <iostream>
#include <stdio.h>
#include <cstring>




void func(char* arr)
{
	for(int i = 0; i < 8; i++)
  	{
  		unsigned int val = arr[i];
  		std::cout << val << std::endl;
  	}
}



int main()
{
  std::cout << "Hello Nick!\n\n";

  char buf[] = {5,1,1,0,0,0,0,0};

  /*
  	int x; 
	std::memcpy( &x, &buf, sizeof( int ) );

	std::cout << "extracted x val from buf: " << x << std::endl << std::endl;

	char a[10];
	std::memcpy( &a, &x, sizeof( int ) );

  for(int i = 0; i < 8; i++)
  {
  	unsigned int val = a[i];
  	std::cout << val << std::endl;
  }
*/

  func(buf);



}
