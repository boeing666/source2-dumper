#pragma once

class CModifier_Fencer_Ultimate_Target : public CCitadelModifier /*0x0*/  // sizeof 0x480, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bDamageDone; // offset 0xD0, size 0x1, align 1
    char _pad_00D1[0x3]; // offset 0xD1
    float32 m_flDamageTime; // offset 0xD4, size 0x4, align 4
    char _pad_00D8[0x380]; // offset 0xD8
    Vector m_vDashDirection; // offset 0x458, size 0xC, align 4
    char _pad_0464[0x1C]; // offset 0x464
};
