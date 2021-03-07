#ifndef _homework_2_34_
#define _homework_2_34_

#include <iostream>
#include <vector>
class Homework_2_34
{
private:
    std::vector<int> p;
    std::vector<std::vector<int>> res;

    void search(std::vector<int> &can, int target, int index)
    {
        if (p.size() == target){
            res.push_back(p);
            return;
        }
        else {
            for (unsigned int i = index; i < can.size(); i++)
            {
                p.push_back(can[i]);
                search(can, target, i + 1);
                p.pop_back();
            }
        }
    }

public:
    std::vector<std::vector<int>> doit(std::vector<int> &can, int target)
    {
        res.clear();
        p.clear();
        search(can, target, 0);
        return res;
    }
};

#endif