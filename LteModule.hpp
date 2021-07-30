//
// Created by xiaowei on 2021/7/30.
//

#ifndef UNTITLED_LTEMODULE_HPP
#define UNTITLED_LTEMODULE_HPP

#include <string>
#include <iostream>
using namespace  std;
class LteModule {
public:
    virtual ~LteModule();
    virtual uint8_t GetSignalStrngth() =0;
    virtual string GetSimCardIMEI()=0;
    virtual string GetSimCardICCID()=0;

private:
};


#endif //UNTITLED_LTEMODULE_HPP
