#include <circlerr/circlerr.h>

#include <fstream>
namespace circlerr {

  params::params(const std::string& s) {
    std::ifstream i(s);
    nlohmann::json j;
    i >> j;
    this->radius = j["radius"];
    this->linear_uncertainty = j["linear_uncertainty"];
    this->linear_distance = j["linear_distance"];
  }
}  // namespace circlerr