#include <entt/entity/registry.hpp>

#ifndef LIB_EXPORT
#if defined _WIN32 || defined __CYGWIN__
#define LIB_EXPORT __declspec(dllexport)
#elif defined __GNUC__
#define LIB_EXPORT __attribute__((visibility("default")))
#else
#define LIB_EXPORT
#endif
#endif

LIB_EXPORT typename entt::registry<>::component_type another_module_int_type() {
    (void)entt::registry<>::type<char>();
    (void)entt::registry<>::type<const int>();
    (void)entt::registry<>::type<double>();
    (void)entt::registry<>::type<const char>();
    (void)entt::registry<>::type<float>();
    return entt::registry<>::type<int>();
}

LIB_EXPORT typename entt::registry<>::component_type another_module_char_type() {
    (void)entt::registry<>::type<int>();
    (void)entt::registry<>::type<const char>();
    (void)entt::registry<>::type<float>();
    (void)entt::registry<>::type<const int>();
    (void)entt::registry<>::type<double>();
    return entt::registry<>::type<char>();
}
