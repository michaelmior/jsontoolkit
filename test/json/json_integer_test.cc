#include <gtest/gtest.h>
#include <sourcemeta/jsontoolkit/json.h>

TEST(JSON_integer, positive) {
  const sourcemeta::jsontoolkit::JSON document{10};
  EXPECT_TRUE(document.is_integer());
  EXPECT_EQ(document.to_integer(), 10);
}

TEST(JSON_integer, type) {
  const sourcemeta::jsontoolkit::JSON document{5};
  EXPECT_EQ(document.type(), sourcemeta::jsontoolkit::JSON::Type::Integer);
}

TEST(JSON_integer, negative) {
  const sourcemeta::jsontoolkit::JSON document{-10};
  EXPECT_TRUE(document.is_integer());
  EXPECT_EQ(document.to_integer(), -10);
}

TEST(JSON_integer, zero) {
  const sourcemeta::jsontoolkit::JSON document{0};
  EXPECT_TRUE(document.is_integer());
  EXPECT_EQ(document.to_integer(), 0);
}