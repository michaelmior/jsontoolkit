#include <sourcemeta/jsontoolkit/json.h>

#include <cstdlib>  // EXIT_SUCCESS
#include <iostream> // std::cout

auto main() -> int {
  const sourcemeta::jsontoolkit::JSON document{
      sourcemeta::jsontoolkit::from("Hello World")};
  sourcemeta::jsontoolkit::stringify(document, std::cout);
  std::cout << std::endl;
  return EXIT_SUCCESS;
}
