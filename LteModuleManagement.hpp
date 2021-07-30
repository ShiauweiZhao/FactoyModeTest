//
// Created by xiaowei on 2021/7/30.
//

#ifndef UNTITLED_LTEMODULEMANAGEMENT_HPP
#define UNTITLED_LTEMODULEMANAGEMENT_HPP

#include <string>
#include <iostream>
using namespace  std;
class LteModuleManagement {
public:
    virtual ~LteModuleManagement();
    virtual uint8_t GetSignalStrngth();
    virtual string GetSimCardIMEI();
    virtual string GetSimCardICCID();

private:
};


#endif //UNTITLED_LTEMODULEMANAGEMENT_HPP
