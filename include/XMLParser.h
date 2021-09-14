//
// Created by isaca on 9/14/2021.
//

#include <string>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>
#include <map>

class XMLParser {
private:
    std::string source;

    std::map<std::string, std::vector<std::string>> tree;

    void read_file(const std::string &path);
public:
    XMLParser(const std::string &path);
    ~XMLParser();

    void parse();

};
