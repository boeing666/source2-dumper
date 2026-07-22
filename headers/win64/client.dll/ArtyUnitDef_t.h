#pragma once

struct ArtyUnitDef_t : public ArtyGameObjectDef_t /*0x0*/  // sizeof 0xC0, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
    char _pad_0000[0xB0]; // offset 0x0
    bool m_bRotateReloadBar; // offset 0xB0, size 0x1, align 1
    char _pad_00B1[0x3]; // offset 0xB1
    float32 m_flMaxMana; // offset 0xB4, size 0x4, align 4
    float32 m_flMovementSpeed; // offset 0xB8, size 0x4, align 4
    char _pad_00BC[0x4]; // offset 0xBC
};
