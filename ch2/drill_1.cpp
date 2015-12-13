#include <iostream> 
#include <cstring> 

int main()
{
    std::cout << "ਉਸ ਵਿਅਕਤੀ ਦਾ ਨਾਂ ਲਿੱਖੋ, ਜਿਸ ਨੂੰ ਤੁਸੀ ਚਿੱਠੀ ਪਾਉਣਾ ਚਾਹੁੰਦੇ ਹੋ: ";
    std::string first_name; 
    std::cin >> first_name; 
    std::cout << "ਪਿਆਰੇ  " << first_name << ",\n"; 
    return 0;
}
