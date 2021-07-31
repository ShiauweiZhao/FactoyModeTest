//
// Created by xiaowei on 2021/7/30.
//

#include "LteModuleManagement.hpp"

std::shared_ptr<LteModule> LteModuleAManagement::FactoryMethod() const {

    return std::shared_ptr<LteModule>( new LteModuleA());


}

std::shared_ptr<LteModule> LteModuleBManagement::FactoryMethod() const {

    return std::shared_ptr<LteModule>( new LteModuleB());


}
LteModuleManagement::~LteModuleManagement()  {


}
LteModuleAManagement::LteModuleAManagement() {

}
LteModuleBManagement::LteModuleBManagement() {

}
LteModuleManagement::LteModuleManagement() {

}