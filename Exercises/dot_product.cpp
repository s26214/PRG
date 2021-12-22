#include <iostream>
#include <vector>


auto dot_product(std::vector<int> vec1,std::vector<int> vec2 )  -> int {
int dot_p =0;
    if (vec1.size() == vec2.size()) {
    for(int i = 0; i < vec1.size(); i++){
        dot_p += (vec1[i]*vec2[i]);

    }

}
else{
std::cout << "vectors are not the same size";

}
    return dot_p;

}
auto main() -> int
{
    auto vec1 = std::vector<int>{1,1,1};
    auto vec2 = std::vector<int>{1,1,1};
    std::cout<< dot_product(vec1,vec2);
    return 0;
}
