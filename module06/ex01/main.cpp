#include <iostream>

struct Data {
    int value;
};

class Serializer {
public:
    static uintptr_t serialize(Data* ptr) {
        return reinterpret_cast<uintptr_t>(ptr);
    }

    static Data* deserialize(uintptr_t raw) {
        return reinterpret_cast<Data*>(raw);
    }
};

int main() {
    Data data;
    data.value = 50;

    uintptr_t serializedValue = Serializer::serialize(&data);
    Data* deserializedPtr = Serializer::deserialize(serializedValue);
    std::cout << "Deserialized pointer is equal to original pointer: " << (deserializedPtr == &data) << std::endl;

    return 0;
}
