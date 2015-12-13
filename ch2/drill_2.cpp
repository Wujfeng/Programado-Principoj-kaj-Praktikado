#include <iostream> 
#include <cstring> 

int main()
{
    std::cout << "ਉਸ ਵਿਅਕਤੀ ਦਾ ਨਾਂ ਲਿੱਖੋ, ਜਿਸ ਨੂੰ ਤੁਸੀ ਚਿੱਠੀ ਪਾਉਣਾ ਚਾਹੁੰਦੇ ਹੋ: ";
    std::string first_name; 
    std::cin >> first_name; 
    std::cout << "ਪਿਆਰੇ  " << first_name << ",\n"; 
    std::cout << "\tਤੇਰੇ ਕੀ ਹਾਲ-ਚਾਲ ਹਨ? ਮੈਂ ਠੀਕ ਹਾਂ ਅਤੇ ਤੈਨੂੰ ਅਕਸਰ ਯਾਦ ਕਰਦਾ ਹਾਂ। "
              << "ਇਸ ਗਲ ਦੀ ਉਮੀਦ ਕਰਦਾ ਹਾਂ ਕਿ ਇਹ ਚਿੱਠੀ ਤੇਰੇ ਤਕ ਜ਼ਰੂਰ ਪਹੁੰਚੇਗੀ।\n";
    return 0;
}
