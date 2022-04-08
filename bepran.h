#pragma once
#include <random>



// pseudo-random number generation mainly for perlin noise gen
// using mersenne twister




// trying to think of a better place then a seperate namespace for mt seed
namespace ran
{
	// mt engine
	std::mt19937 mt(std::random_device{}());
}

namespace bep
{

	int rand(int min, int max)
	{
		// to obtain a range
		std::uniform_int_distribution gen(min, max);
		return gen(ran::mt);
	}
}

