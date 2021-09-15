#include <iostream>
#include "include/AuditParser.h"

int main() {
    std::string path = "./assets/test_1.audit";

    AuditParser parser(path);

    parser.parse();

    return 0;
}
