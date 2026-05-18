#include <stdio.h>

struct Phone {
    char trademark[20];
    char model[20];
    char color[10];
    int memory;
};

void describePhone(struct Phone phone) {
    printf("TM: %s\n", phone.trademark);
    printf("Model: %s\n", phone.model);
    printf("Color: %s\n", phone.color);
    printf("Memory: %d\n", phone.memory);
}

void describePhonePointer(struct Phone* phone) {
    printf("TM: %s\n", phone->trademark);
    printf("Model: %s\n", phone->model);
    printf("Color: %s\n", phone->color);
    printf("Memory: %d\n", phone->memory);
}

void changeMemoryPointer(struct Phone* phone) {
    phone->memory = 1024;
}

void changeMemory(struct Phone phone) {
    phone.memory = 1024;
}

int main() {
    struct Phone iphone = {"Apple", "iPhone", "orange", 512};
    struct Phone samsung = {"Samsung", "Galaxy", "white", 512};

    changeMemory(iphone);
    changeMemoryPointer(&samsung);
    
    describePhone(iphone);
    describePhonePointer(&samsung);

    return 0;
}
