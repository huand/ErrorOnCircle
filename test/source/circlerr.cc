#include <circlerr/circlerr.h>
#include <circlerr/version.h>
#include <doctest/doctest.h>

#include <string>

TEST_CASE("Load Parameters") {
  circlerr::params p("test/circleparams.json");
  CHECK(p.linear_distance == 200);
  CHECK(p.linear_uncertainty == 5);
  CHECK(p.radius == 150);
}

TEST_CASE("CirclErr version") {
  static_assert(std::string_view(CIRCLERR_VERSION) == std::string_view("1.0"));
  CHECK(std::string(CIRCLERR_VERSION) == std::string("1.0"));
}