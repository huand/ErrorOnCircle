#pragma once

#include <nlohmann/json.hpp>
#include <string>

namespace circlerr {

  struct params {
    params(const std::string& s);
    double radius;
    double linear_uncertainty;
    double linear_distance;
  };

  class CirclErr {
    double radius;
    double linear_uncertainty;
    double linear_distance;

  public:
    CirclErr(std::string name);

    // std::string greet(LanguageCode lang = LanguageCode::EN) const;
  };

}  // namespace circlerr
