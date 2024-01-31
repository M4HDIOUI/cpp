#include "Array.hpp"

// int main()
// {

//     {
//         Array<std::string> arr(3);
//         std::cout << "Array size :" << arr.size() << std::endl;
//         for (size_t i = 0; i < arr.size(); i++)
//             std::cout << arr[i] << ' ';
//         std::cout << std::endl;
//         arr[0] = "hello";
//         arr[1] = "world";
//         arr[2] = "!";
//         for (size_t i = 0; i < arr.size(); i++)
//             std::cout << arr[i] << ' ';
//         Array<std::string> arr1 = arr;
//         std::cout << std::endl;
//         for (size_t i = 0; i < arr1.size(); i++)
//             std::cout << arr1[i] << ' ';
//         std::cout << std::endl;
//         try {
//             std::cout << arr[5];
//         }
//         catch(std::exception &e){
//             std::cerr << e.what() << std::endl;
//         }
//     }
// }