#pragma once

#define GETTER_SETTER(type, name) \
    const type& get##name() const { return name; } \
    void set##name(const type& value) { name = value; }
