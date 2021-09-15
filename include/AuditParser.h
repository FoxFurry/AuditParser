//
// Created by isaca on 9/14/2021.
//

#include "AuditConfig.h"
#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>

class AuditParser {
private:
    std::string source;
    std::map<std::string, std::vector<std::string>> tree;

    XMLConfig config;

    void read_file(const std::string &path);
public:
    AuditParser(const std::string &path);
    ~AuditParser();

    void parse();
};
