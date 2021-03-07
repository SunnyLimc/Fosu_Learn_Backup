#include "34.h"
#define target 3
#define sum 5

void handle(int i) {
	switch (i)
	{
	case 0:
		std::cout << "红";
		break;
	case 1:
		std::cout << "黄";
		break;
	case 2:
		std::cout << "蓝";
		break;
	case 3:
		std::cout << "白";
		break;
	case 4:
		std::cout << "黑";
		break;
	default:
		std::cout << "没有匹配的对象" << std::endl;
		break;
	}
}
void homework_2_34_main()
{
    std::vector<int> input;
    std::vector<std::vector<int>> output;
    for (int i = 0; i < sum; i++)
    {
        input.push_back(i);
    }
    Homework_2_34 cal;
    output = cal.doit(input, target);
    for (unsigned int i = 0; i < output.size(); i++)
    {
        for (int j = 0; j < target; j++)
        {
			handle(output[i][j]);
        }
        std::cout << std::endl;
    }
    std::cout << "Total is:" << output.size() << std::endl;
}