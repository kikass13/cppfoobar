#include <iostream>
#include <vector>
#include <chrono>
#include <assert.h>     /* assert */

/**********************************************
/**********************************************
***********************************************/

#define N 500000000


int main()
{
	std::vector<double> vec(N);

	//////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////
	//////////////////////////////////////////////////////////////////////////////////////////////////

	// do the standard loop and measure time
	auto start = std::chrono::system_clock::now();
	for(size_t i = 0, size=vec.size(); i!=size; ++i) 
	{
		vec[i] = i*(i-1)*4*(i+1);
	}
	auto end = std::chrono::system_clock::now();

	// print
	std::cout 	<< "Elapsed time (in msecs): "
				<< std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count()
				<< std::endl;

	//////////////////////////////////////////////////////////////////////////////////////////////////

	//////////////////////////////////////////////////////////////////////////////////////////////////

	// done
	return 0;
}


