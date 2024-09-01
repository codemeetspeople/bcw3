#include <iostream>

void append(std::string data) {
    data.push_back('!');
}

void append_by_link(std::string& data) {
    data.push_back('!');
}

void append_by_pointer(std::string* data) {
    data->push_back('!');
}

void ro_function(const std::string& data) {
    std::cout << data << std::endl;
}

int main() {
    std::string* pointer;
    std::string str = "Hello";
    
    append(str);
    append_by_link(str);
    append_by_pointer(&str);

    pointer = &str;
    
    return 0;
}
