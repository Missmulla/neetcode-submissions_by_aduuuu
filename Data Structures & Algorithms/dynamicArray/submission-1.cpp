class DynamicArray {
private:
int* arr;
int size;
int capacity;
public:

    DynamicArray(int capacity) : capacity(capacity), size(0) {
        arr = new int[capacity];
    }

    int get(int i) {
        if(i < 0 || i >= size){
            throw out_of_range("Index out of bounds");
        }
        return arr[i];
    }

    void set(int i, int n) {
        if(i < 0 || i >= size){
            throw out_of_range("Index out of bounds");
        }
        arr[i] = n;
    }

    void pushback(int n) {
        if(size == capacity){
            resize();
        }
        arr[size++] = n;
    }

    int popback() {
        if(size == 0){
            throw out_of_range("Array is empty");
        }
        return arr[--size];
    }

    void resize() {
        capacity *= 2;
        int* newarr = new int[capacity];

        for(int i = 0; i < size; ++i){
            newarr[i] = arr[i];
        }

        delete[] arr;
        arr = newarr;
    }

    int getSize() {
        return size;
    }

    int getCapacity() {
        return capacity;
    }

    ~DynamicArray(){
        delete[] arr;
    }
};
