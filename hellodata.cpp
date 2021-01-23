#include "hellodata.h"

#include <string>
#include <vector>

std::vector<std::string> getData() {
    static const std::vector<std::string> data = {"Mary", "had", "a", "little", "lamb"};
    return data;
}
