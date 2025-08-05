#include <string>

namespace log_line {
std::string message(std::string line) {
    int pos = line.find(":");
    return line.substr(pos + 2);
}

std::string log_level(std::string line) {
    // return the log level
    int pos = line.find("]");
    return line.substr(1, pos-1);
}

std::string reformat(std::string line) {
    // return the reformatted message
    std::string message = log_line::message(line);
    std::string level = log_line::log_level(line);

    return message + " (" + level + ")";
}
}  // namespace log_line
