//
// Created by xiaowei on 2021/7/30.
//

#ifndef UNTITLED_LTEMODULEB_HPP
#define UNTITLED_LTEMODULEB_HPP

#include "LteModule.hpp"
class LteModuleB :public LteModule {
public:
 uint8_t GetSignalStrngth() override;
 string GetSimCardIMEI() override;
 string GetSimCardICCID() override;
};


#endif //UNTITLED_LTEMODULEB_HPP
