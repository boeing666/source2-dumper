#pragma once

class CHitboxComponent : public CEntityComponent /*0x0*/  // sizeof 0x18, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x14]; // offset 0x0
    float32 m_flBoundsExpandRadius; // offset 0x14, size 0x4, align 4
};
