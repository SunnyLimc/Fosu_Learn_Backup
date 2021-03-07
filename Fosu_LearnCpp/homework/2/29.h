#ifndef _homework_2_29_
#define _homework_2_29_

#include <math.h>
#include <iostream>
#include <vector>

class Tool
{
public:
	static void printMsg(const char msg[]);
};

inline void Tool::printMsg(const char msg[])
{
	std::cout << msg;
}

class Homework_2_29
{
private:
	int rangeS, rangeE;
	std::vector<int> res;
	bool isRange();

public:
	Homework_2_29(int start = 1, int end = 100) : rangeS(start), rangeE(end)
	{
		if (!isRange())
		{
			Tool::printMsg("·¶Î§²»ÕýÈ·");
			return;
		}
		process();
	};
	std::vector<int> getRes() { return res; }

	void process();
};

inline bool Homework_2_29::isRange()
{
	if (rangeE - rangeS > 0 && rangeS > 0 && rangeE < INT_MAX)
	{
		return true;
	}
	else
	{
		return false;
	}
}

inline void Homework_2_29::process()
{
	std::vector<int> mis(rangeE + 1);
	mis[1] = 1;
	for (int i = 2; i <= sqrt(rangeE); i++)
	{
		for (int j = i + 1; j <= rangeE; j++)
		{
			if (mis[j] == 0 && j % i == 0)
			{
				mis[j] = 1;
			}
		}
	}
	for (int i = rangeS; i <= rangeE; i++) {
		if (mis[i] == 0) {
			res.push_back(i);
		}
	}

}



#endif