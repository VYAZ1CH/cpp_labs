#include <iostream>
#include <string>
#include <vector>
#include "Count.hpp"

int countOccurrences(const std::string& str, const std::string& target) {
    int count = 0;
    std::string::size_type pos = 0;

    // Èùåì âñå âõîæäåíèÿ target â str
    while ((pos = str.find(target, pos)) != std::string::npos) {
        ++count;
        pos += target.length(); // Ïåðåõîäèì ê ñëåäóþùåìó ñèìâîëó ïîñëå íàéäåííîãî âõîæäåíèÿ
    }

    return count;
}
