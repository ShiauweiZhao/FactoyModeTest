//
// Created by xiaowei on 2021/7/30.
//

#ifndef UNTITLED_LTEMODULEMANAGEMENT_HPP
#define UNTITLED_LTEMODULEMANAGEMENT_HPP

#include "LteModule.hpp"
#include "LteModuleA.hpp"
#include "LteModuleB.hpp"
#include <memory>
class LteModuleManagement {

public:
    virtual ~LteModuleManagement();
    LteModuleManagement();
    virtual std::shared_ptr<LteModule> FactoryMethod() const = 0;

    std::string SomeOperation() const {
        // Call the factory method to create a Product object.
        std::shared_ptr<LteModule> product = this->FactoryMethod();
        // Now, use the product.
        std::string result = "Creator: The same creator's code has just worked with " + product->GetSimCardICCID();
        return result;
    }
};

class LteModuleAManagement : public LteModuleManagement {

public:
    LteModuleAManagement();
    std::shared_ptr<LteModule> FactoryMethod() const override ;

};
class LteModuleBManagement : public LteModuleManagement {

public:
    LteModuleBManagement();
    std::shared_ptr<LteModule> FactoryMethod() const override ;

}; 

#endif //UNTITLED_LTEMODULEMANAGEMENT_HPP
