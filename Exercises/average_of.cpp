#include <iostream>
#include <vector>

auto average_of(std::vector<int> numbers) -> double
{
    double sum = 0;

    for (auto i = 0; i <= numbers.size() - 1;++i) {
        int  s_number = numbers[i];
        sum += s_number;

        }

    return sum/numbers.size();

}
int main() {
    auto vector = std::vector<int>{7,2,3,3,8};
    std::cout<< average_of(vector);
}
