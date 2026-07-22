#pragma once

struct MantleType_t  // sizeof 0x30, align 0x8 [vtable trivial_dtor] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0x8]; // offset 0x0
    float32 m_flMinHeight; // offset 0x8, size 0x4, align 4 | MPropertyDescription
    float32 m_flAnimHeight; // offset 0xC, size 0x4, align 4 | MPropertyDescription
    float32 m_flMaxHeight; // offset 0x10, size 0x4, align 4 | MPropertyDescription
    float32 m_flVerticalTime; // offset 0x14, size 0x4, align 4 | MPropertyDescription
    float32 m_flHorizontalTime; // offset 0x18, size 0x4, align 4 | MPropertyDescription
    EMantleType m_eMantleType; // offset 0x1C, size 0x4, align 4
    char _pad_0020[0x8]; // offset 0x20
    float32 m_flSlideExitBoostOnGround; // offset 0x28, size 0x4, align 4 | MPropertyDescription
    char _pad_002C[0x4]; // offset 0x2C
};
