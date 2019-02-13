#include <entt/entity/registry.hpp>
#include <gtest/gtest.h>

extern typename entt::registry<>::component_type a_module_int_type();
extern typename entt::registry<>::component_type a_module_char_type();
extern typename entt::registry<>::component_type another_module_int_type();
extern typename entt::registry<>::component_type another_module_char_type();

TEST(Lib, Shared) {
    ASSERT_EQ(entt::registry<>::type<int>(), entt::registry<>::type<const int>());
    ASSERT_EQ(entt::registry<>::type<char>(), entt::registry<>::type<const char>());

    ASSERT_EQ(entt::registry<>::type<int>(), a_module_int_type());
    ASSERT_EQ(entt::registry<>::type<char>(), a_module_char_type());
    ASSERT_EQ(entt::registry<>::type<const int>(), a_module_int_type());
    ASSERT_EQ(entt::registry<>::type<const char>(), a_module_char_type());

    ASSERT_EQ(entt::registry<>::type<const char>(), another_module_char_type());
    ASSERT_EQ(entt::registry<>::type<const int>(), another_module_int_type());
    ASSERT_EQ(entt::registry<>::type<char>(), another_module_char_type());
    ASSERT_EQ(entt::registry<>::type<int>(), another_module_int_type());
}
