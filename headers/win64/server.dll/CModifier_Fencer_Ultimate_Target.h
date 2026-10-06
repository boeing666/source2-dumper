#pragma once

class CModifier_Fencer_Ultimate_Target : public CCitadelModifier /*0x0*/  // sizeof 0x648, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x148]; // offset 0x0
    bool m_bDamageDone; // offset 0x148, size 0x1, align 1
    char _pad_0149[0x3]; // offset 0x149
    float32 m_flDamageTime; // offset 0x14C, size 0x4, align 4
    char _pad_0150[0x4D0]; // offset 0x150
    Vector m_vDashDirection; // offset 0x620, size 0xC, align 4
    char _pad_062C[0x1C]; // offset 0x62C
};
