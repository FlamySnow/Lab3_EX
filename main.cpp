#include <iostream>
#include "SetDynamic/DynSet.h"

int main() {
    int small_capacity, average_capacity, big_capacity, red_capacity, green_capacity, light_capacity, crest_capacity;
    Set small, average, big, red, green, light, crest;
    std::cout << "Hello! It is a shelter for various parrots. We have:" << std::endl;
    std::cout << "cockatiels" << std::endl;
    std::cout << "lovebirds" << std::endl;
    std::cout << "budgerigars" << std::endl;
    std::cout << "rose-breasted cockatoos" << std::endl;
    std::cout << "rose-ringed parakeets" << std::endl;
    std::cout << "white cockatoos" << std::endl;
    std::cout << "jaco" << std::endl;
    std::cout << "aras" << std::endl;
    std::cout << "sun parakeets." << std::endl;
    std::cout << "But we don't know who is who ): And to find out it, we need to input, what birds have what properties." << std::endl;
    std::cout << "Each parrot has unique number, so let's start:" << std::endl;
    std::cout << "How many small parrots? Enter answer here: ";
    if (!Get_num(small_capacity))
        return -1;
    std::cout << "Enter numbers of small birds: " << std::endl;
    small.set(small_capacity);

    std::cout << std::endl << "How many average parrots? Enter answer here: ";
    if (!Get_num(average_capacity))
        return -1;
    std::cout << std::endl << "Enter numbers of average birds: ";
    average.set(average_capacity);
    std::cout << std::endl << "How many big birds? Enter answer here: ";
    if (!Get_num(big_capacity))
        return -1;
    std::cout << std::endl << "Enter numbers of big birds: ";
    big.set(big_capacity);
    std::cout << std::endl << "How many red birds? ";
    if (!Get_num(red_capacity))
        return -1;
    std::cout << std::endl << "You know what to do: ";
    red.set(red_capacity);
    std::cout << std::endl << "How many green birds? ";
    if (!Get_num(green_capacity))
        return -1;
    green.set(green_capacity);
    std::cout << std::endl << "How many light coloured birds? ";
    if (!Get_num(light_capacity))
        return -1;
    light.set(light_capacity);
    std::cout << std::endl << "How many birds with crests? ";
    if (!Get_num(crest_capacity))
        return -1;
    crest.set(crest_capacity);
    std::cout << std::endl;
    Set cockatiel = small & light & crest;
    Set lovebird = red & small & green;
    Set budgerigar = small & green - lovebird;
    Set rose_breasted_cockatoo = average & red & crest;
    Set rose_ringed = average & green;
    Set sun = average & light;
    Set white_cockatoo = big & light & crest;
    Set jaco = big & light - white_cockatoo;
    Set ara = big & red;
    Set all = small | big | average | red | light | green | crest;
    Set named = cockatiel | lovebird | budgerigar | rose_ringed | rose_breasted_cockatoo | sun | white_cockatoo | jaco | ara;
    Set noname = all - named;
    std::cout << "Results of our hard work:" << std::endl;
    std::cout << "Cockatiels: ";
    cockatiel.show();
    std::cout << std::endl << "Lovebirds: ";
    lovebird.show();
    std::cout << std::endl << "Budgerigars: ";
    budgerigar.show();
    std::cout << std::endl << "Rose-breasted cockatoos: ";
    rose_breasted_cockatoo.show();
    std::cout << std::endl << "Rose-ringed parakeets: ";
    rose_ringed.show();
    std::cout << std::endl << "Sun parakeets: ";
    sun.show();
    std::cout << std::endl << "White cockatoos: ";
    white_cockatoo.show();
    std::cout << std::endl << "Jaco: ";
    jaco.show();
    std::cout << std::endl << "Aras: ";
    ara.show();
    std::cout << std::endl << "Undefined birds (maybe new to us): ";
    noname.show();
    return 0;
}