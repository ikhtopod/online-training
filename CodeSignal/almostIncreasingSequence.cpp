#include "almostIncreasingSequence.h"

namespace insoLLLent::CodeSignal {

bool almostIncreasingSequence(const std::vector<int>& sequence) {
	const size_t seq_size = sequence.size();

	int8_t counter = 0;
	for (size_t i = 1; i < seq_size; ++i) {
		if (sequence[i - 1] < sequence[i]) continue;
		if (++counter > 1) return false;
		if (i < 2) continue;

		if (sequence[i] <= sequence[i - 2]) {
			if (i < seq_size - 1) {
				if (sequence[++i] <= sequence[i - 2]) return false;
			}//fi
		}//fi
	}//rof

	return true;
}

} // namespace insoLLLent::CodeSignal
