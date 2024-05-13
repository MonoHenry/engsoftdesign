class AbstractClass {

public:
    void TemplateMethod() const {
        this->BaseOperation1();
        this->RequiredOperations1();
        this->BaseOperation2();
        this->Hook1();
        this->RequiredOperation2();
        this->BaseOperation3();
        this->Hook2();
    }
protected:
    void BaseOperation1() const {
        std::cout << "Working 1\n";
    }
    void BaseOperation2() const {
        std::cout << "Working 2\n";
    }
    void BaseOperation3() const {
        std::cout << "Working 3\n";
    }
    virtual void RequiredOperations1() const = 0;
    virtual void RequiredOperation2() const = 0;
    virtual void Hook1() const {}
    virtual void Hook2() const {}
};

class ConcreteClass1 : public AbstractClass {
protected:
    void RequiredOperations1() const override {
        std::cout << "I don't like to work\n";
    }
    void RequiredOperation2() const override {
        std::cout << "I also don't like it\n";
    }
};

class ConcreteClass2 : public AbstractClass {
protected:
    void RequiredOperations1() const override {
        std::cout << "Big fan\n";
    }
    void RequiredOperation2() const override {
        std::cout << "of\n";
    }
    void Hook1() const override {
        std::cout << "Nujabes\n";
    }
};


