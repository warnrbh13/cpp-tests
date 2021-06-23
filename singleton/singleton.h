#include <iostream>

class Singleton {

    Singleton(){

    }
    std::string name_;
public:
    static Singleton& GetInstance() {
        static Singleton instance_;
        return instance_;
    }
    void SetName (const std::string& name) {
        this->name_ = name;
    }

    std::string GetName () {
        std::cout << "Name is" << name_ << std::endl;
        return this->name_;
    }
    
};