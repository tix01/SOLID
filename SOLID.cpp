
//SRP-Single Responsibility Princip
class FileManager {
public:
    void readFromFile(const std::string& filename) { }
    void writeToFile(const std::string& filename, const std::string& content) {}
};

class TextParser {
public:
    void parseText(const std::string& text) {}
};

//OCP-Open/Closed Principle
class Shape {
public:
    virtual double calculateArea() const = 0;
};

class Circle : public Shape {
public:
    double calculateArea() const override {}
};

class Rectangle : public Shape {
public:
    double calculateArea() const override {}
};

//LSP-Liskov Substitution Principle
class Bird {
public:
    virtual void fly() {}
};

class Sparrow : public Bird {
public:
    void fly() override {}
};

class Ostrich : public Bird {
public:
    void fly() override {}
};

//ISP-Interface Segregation Principle
class Printer {
public:
    virtual void print() = 0;
};

class Scanner {
public:
    virtual void scan() = 0;
};

class AllInOneDevice : public Printer, public Scanner {
public:
    void print() override {}
    void scan() override {}
};


//DIP - Dependency Inversion Principle

class Engine {
public:
    virtual void start() = 0;
};

class GasolineEngine : public Engine {
public:
    void start() override {}
};

class ElectricEngine : public Engine {
public:
    void start() override {}
};

class Car {
private:
    Engine* engine;

public:
    Car(Engine* e) : engine(e) {}
    void startCar() {
        engine->start();
    }
};


int main(){
    
    return 0;
}