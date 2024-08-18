#include <iostream>
#include <vector>
#include <list> 

int main()
{


    int num;
    int num2;
    int i = 0;

    std::cin >> num;
    std::list<int> vec;

    do {
        std::cin >> num2;
        vec.push_back(num2);
        i++;
    } while (i != num);

    vec.sort();
    vec.unique();



    for (const auto& elem : vec) {


        std::cout << elem << " ";
    }
}