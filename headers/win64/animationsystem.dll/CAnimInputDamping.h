#pragma once

class CAnimInputDamping  // sizeof 0x18, align 0x8 [vtable trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults MPropertyFriendlyName}
{
public:
    char _pad_0000[0x8]; // offset 0x0
    DampingSpeedFunction m_speedFunction; // offset 0x8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fSpeedScale; // offset 0xC, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_fFallingSpeedScale; // offset 0x10, size 0x4, align 4 | MPropertyFriendlyName
    char _pad_0014[0x4]; // offset 0x14
};
