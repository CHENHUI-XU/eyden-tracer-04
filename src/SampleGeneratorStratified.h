#pragma once

#include "sampleGenerator.h"

class CSampleGeneratorStratified : public CSampleGenerator
{
public:
	virtual void getSamples(int n, float* u, float* v, float* weight) const override
	{
		// --- PUT YOUR CODE HERE ---
		int m = sqrt(n);
			int counter = 0;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++) {
					float ei = DirectGraphicalModels::random::U<float>();
					float ej = DirectGraphicalModels::random::U<float>();
					u[counter] = (i + ei) / m;
					v[counter] = (j + ej) / m;
					weight[counter] = 1.0f / (m * m);
					counter++;
				}
			}
	}
};
