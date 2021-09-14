//
// Created by isaca on 9/14/2021.
//

#include "../include/XMLParser.h"

void XMLParser::read_file(const std::string &path) {
    std::ifstream input(path);

    if (!input.good()) {
        return;
    }

    std::stringstream buffer;
    buffer << input.rdbuf();

    input.close();

    source = buffer.str();
}

XMLParser::XMLParser(const std::string &path) {
    read_file(path);
}



