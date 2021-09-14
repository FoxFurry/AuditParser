//
// Created by isaca on 9/14/2021.
//

#ifndef XMLPARSER_XMLCONFIG_H
#define XMLPARSER_XMLCONFIG_H

#include <string>
#include <vector>

struct XMLConfig{
    std::vector<char> ch_ignore;
    int scan_threshold;
};

#endif //XMLPARSER_XMLCONFIG_H