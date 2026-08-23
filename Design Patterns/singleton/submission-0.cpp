class Singleton {
private:

    Singleton() {}

    static Singleton* instance;
    string s;

public:

    static Singleton *getInstance() {
        if(instance == nullptr){
            instance = new Singleton();
        }
        return instance;
    }

    string getValue() {
            return s;
    }

    void setValue(string &value) {

        if(s.empty()){
            s = value;
        }
    }
};
Singleton* Singleton::instance = nullptr;
