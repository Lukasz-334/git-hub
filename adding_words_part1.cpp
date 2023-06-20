#include <map>
#include <string>

class Arith {
   public:
    Arith(std::string str = "") : number_{str} {}

    std::string add(const std::string& str) {
        auto sum = data[number_] + data[str];
        std::string solve;
        for (const auto& [k, v] : data) {
            if (v == sum) {
                solve = k;
            }
        }
        return solve;
    }

   private:
    std::map<std::string, int> data = {
        {"zero", 0},     {"one", 1},        {"two", 2},       {"three", 3},
        {"four", 4},     {"five", 5},       {"six", 6},       {"seven", 7},
        {"eight", 8},    {"nine", 9},       {"ten", 10},      {"eleven", 11},
        {"twelve", 12},  {"thirteen", 13},  {"fourteen", 14}, {"fifteen", 15},
        {"sixteen", 16}, {"seventeen", 17}, {"eighteen", 18}, {"nineteen", 19},
        {"twenty", 20}};

    std::string number_;
};
