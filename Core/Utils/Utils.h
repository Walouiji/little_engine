#ifndef Utils_h
#define Utils_h

#include <string>
#include <vector>

class Utils {
public:
    // Splits a string by the given delimiter and returns a vector of substrings
    static std::vector<std::string> splitString(const std::string& str, char
    delimiter);
    // Trims whitespace from both ends of the string
    static std::string trimString(const std::string& str);
    // Converts a string to uppercase
    static std::string toUpperCase(const std::string& str);
    // Converts a string to lowercase
    static std::string toLowerCase(const std::string& str);
};
#endif