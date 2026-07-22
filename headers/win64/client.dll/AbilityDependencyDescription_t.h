#pragma once

struct AbilityDependencyDescription_t  // sizeof 0x18, align 0x8 (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x10]; // offset 0x0
    AbilityDependencyFlags m_eFlags; // offset 0x10, size 0x2, align 2
    char _pad_0012[0x6]; // offset 0x12
};
