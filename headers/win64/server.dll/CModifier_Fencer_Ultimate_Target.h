#pragma once

class CModifier_Fencer_Ultimate_Target : public CCitadelModifier /*0x0*/  // sizeof 0x640, align 0xFF [vtable] (server) {MModifierDynamicValuesSuppressCache}
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bDamageDone; // offset 0x140, size 0x1, align 1
    char _pad_0141[0x3]; // offset 0x141
    float32 m_flDamageTime; // offset 0x144, size 0x4, align 4
    char _pad_0148[0x4D0]; // offset 0x148
    Vector m_vDashDirection; // offset 0x618, size 0xC, align 4
    char _pad_0624[0x1C]; // offset 0x624
};
