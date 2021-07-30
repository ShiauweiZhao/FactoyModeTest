//
// Created by xiaowei on 2021/7/30.
//

#ifndef UNTITLED_LTEMODULECREATOR_HPP
#define UNTITLED_LTEMODULECREATOR_HPP
#include "LteModule.hpp"

class LteModuleCreator {

public:
    virtual ~LteModuleCreator();
    virtual LteModule* FactoryMethod() const =0;

};


#endif //UNTITLED_LTEMODULECREATOR_HPP
