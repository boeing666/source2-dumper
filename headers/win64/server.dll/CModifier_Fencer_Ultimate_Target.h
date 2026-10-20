#pragma once

class CModifier_Fencer_Ultimate_Target : public CCitadelModifier /*0x0*/  // sizeof 0x650, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x150]; // offset 0x0
    bool m_bDamageDone; // offset 0x150, size 0x1, align 1
    char _pad_0151[0x3]; // offset 0x151
    float32 m_flDamageTime; // offset 0x154, size 0x4, align 4
    char _pad_0158[0x4D0]; // offset 0x158
    Vector m_vDashDirection; // offset 0x628, size 0xC, align 4
    char _pad_0634[0x1C]; // offset 0x634
};
