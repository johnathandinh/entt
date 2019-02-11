#include <entt/entity/registry.hpp>
#include <gtest/gtest.h>

extern typename entt::registry<>::component_type int_type();
extern typename entt::registry<>::component_type char_type();

TEST(Lib, Shared) {
    ASSERT_EQ(entt::registry<>::type<int>(), entt::registry<>::type<const int>());
    ASSERT_EQ(entt::registry<>::type<char>(), entt::registry<>::type<const char>());

    ASSERT_EQ(entt::registry<>::type<int>(), int_type());
    ASSERT_EQ(entt::registry<>::type<const int>(), int_type());

    ASSERT_EQ(entt::registry<>::type<char>(), char_type());
    ASSERT_EQ(entt::registry<>::type<const char>(), char_type());
}
