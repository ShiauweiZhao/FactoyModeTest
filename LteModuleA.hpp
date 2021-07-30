//
// Created by xiaowei on 2021/7/30.
//

#ifndef UNTITLED_LTEMODULEA_HPP
#define UNTITLED_LTEMODULEA_HPP
#include "LteModule.hpp"

class LteModuleA : public LteModule{
public:
    uint8_t GetSignalStrngth() override;
    string GetSimCardIMEI() override;
    string GetSimCardICCID() override;
};


#endif //UNTITLED_LTEMODULEA_HPP
