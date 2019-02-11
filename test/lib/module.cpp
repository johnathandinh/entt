#include <entt/entity/registry.hpp>

typename entt::registry<>::component_type int_type() {
    (void)entt::registry<>::type<double>();
    (void)entt::registry<>::type<float>();
    return entt::registry<>::type<int>();
}

typename entt::registry<>::component_type char_type() {
    (void)entt::registry<>::type<double>();
    (void)entt::registry<>::type<float>();
    return entt::registry<>::type<char>();
}
