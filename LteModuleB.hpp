//
// Created by xiaowei on 2021/7/30.
//

#ifndef UNTITLED_LTEMOUDLEB_HPP
#define UNTITLED_LTEMOUDLEB_HPP

#include "LteModule.hpp"
class LteMoudleB :public LteModule {
public:
 uint8_t GetSignalStrngth() override;
 string GetSimCardIMEI() override;
 string GetSimCardICCID() override;
};


#endif //UNTITLED_LTEMOUDLEB_HPP
