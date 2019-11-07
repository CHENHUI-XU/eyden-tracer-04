#pragma once

#include "sampleGenerator.h"

class CSampleGeneratorRegular : public CSampleGenerator
{
public:
	virtual void getSamples(int n, float* u, float* v, float* weight) const override
	{
		// --- PUT YOUR CODE HERE ---
		int m = sqrt(n);
			int counter = 0;
			for (int i = 0; i < m; i++) {
				for (int j = 0; j < m; j++) {
					u[counter] = (i + 0.5f) / m;
					v[counter] = (j + 0.5f) / m;
					weight[counter] = 1.0f / (m * m);
					counter++;
				}
			}
	}
};
