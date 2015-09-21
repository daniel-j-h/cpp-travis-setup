#include <iostream>
#include <iterator>
#include <string>
#include <vector>
#include <algorithm>

int main(int argc, char** argv) {
  std::vector<std::string> args{argv, argv + argc};
  std::copy(std::begin(args), std::end(args), std::ostream_iterator<std::string>(std::cout, "\n"));
}
