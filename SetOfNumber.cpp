#include "SetOfNumber.h"

bool SetOfNumber::has(uint32_t value, uint32_t limit) const
{
	uint32_t sszz = limit == -1 ? this->sszz : limit;

	for (uint32_t i{ 0 }; i < sszz; i++)
	{
		if (arr[i] == value)
		{
			return true;
		}
	}
    return false;
}
