//
// Created by xiaowei on 2021/7/30.
//

#include "LteModuleManagement.hpp"

LteModule * LteModuleAManagement::FactoryMethod() const {

    return new LteModuleA();


}

LteModule * LteModuleBManagement::FactoryMethod() const {

    return new LteModuleB();


}
LteModuleManagement::~LteModuleManagement()  {


}
LteModuleAManagement::LteModuleAManagement() {

}
LteModuleBManagement::LteModuleBManagement() {

}
LteModuleManagement::LteModuleManagement() {

}