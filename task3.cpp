// error3_missing_header.cpp
// Notice: #include <iostream> is missing!

int main() {
    std::cout << "Testing missing header file\n"; // Error: compiler doesn't know what cout is
    
    return 0;
}