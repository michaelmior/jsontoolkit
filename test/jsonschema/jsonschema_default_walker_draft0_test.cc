#include <gtest/gtest.h>
#include <sourcemeta/jsontoolkit/jsonschema.h>

static const std::map<std::string, bool> VOCABULARIES_DRAFT0{
    {"http://json-schema.org/draft-00/schema#", true}};

static const std::map<std::string, bool> VOCABULARIES_DRAFT0_HYPERSCHEMA{
    {"http://json-schema.org/draft-00/hyper-schema#", true}};

TEST(JSONSchema_default_walker_draft0, schema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("$schema", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, id) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("id", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, ref) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("$ref", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, items) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("items", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::ValueOrElements);
}

TEST(JSONSchema_default_walker_draft0, properties) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("properties", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::Members);
}

TEST(JSONSchema_default_walker_draft0, additionalProperties) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("additionalProperties", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::Value);
}

TEST(JSONSchema_default_walker_draft0, type) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("type", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::Elements);
}

TEST(JSONSchema_default_walker_draft0, enum) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("enum", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, maximum) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("maximum", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, minimum) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("minimum", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, maximumCanEqual) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("maximumCanEqual", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, minimumCanEqual) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("minimumCanEqual", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, maxLength) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("maxLength", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, minLength) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("minLength", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, pattern) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("pattern", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, maxItems) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("maxItems", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, minItems) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("minItems", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, requires) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("requires", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::Value);
}

TEST(JSONSchema_default_walker_draft0, format) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("format", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, title) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("title", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, description) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("description", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, default) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("default", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, disallow) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("disallow", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, extends) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("extends", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::ValueOrElements);
}

TEST(JSONSchema_default_walker_draft0, contentEncoding) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("contentEncoding", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, optional) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("optional", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, maxDecimal) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("maxDecimal", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_links) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("links", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_fragmentResolution) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("fragmentResolution",
                                            VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_root) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("root", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_readonly) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("readonly", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_pathStart) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("pathStart", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_mediaType) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("mediaType", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_alternate) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("alternate", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_href) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("href", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_rel) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("rel", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_method) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("method", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_enctype) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("enctype", VOCABULARIES_DRAFT0_HYPERSCHEMA)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_links_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("links", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0,
     hyperschema_fragmentResolution_without_hyperchema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{
      default_schema_walker("fragmentResolution", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_root_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("root", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0,
     hyperschema_readonly_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("readonly", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0,
     hyperschema_pathStart_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("pathStart", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0,
     hyperschema_mediaType_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("mediaType", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0,
     hyperschema_alternate_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("alternate", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_href_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("href", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_rel_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("rel", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0, hyperschema_method_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("method", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}

TEST(JSONSchema_default_walker_draft0,
     hyperschema_enctype_without_hyperschema) {
  using namespace sourcemeta::jsontoolkit;
  const auto strategy{default_schema_walker("enctype", VOCABULARIES_DRAFT0)};
  EXPECT_EQ(strategy, SchemaWalkerStrategy::None);
}