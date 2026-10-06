#pragma once

class CCitadel_Modifier_MysticReverbExplosion : public CCitadelModifier /*0x0*/  // sizeof 0x2B0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x148]; // offset 0x0
    bool m_bNoDeath; // offset 0x148, size 0x1, align 1
    bool m_bDamageInProgress; // offset 0x149, size 0x1, align 1
    char _pad_014A[0x2]; // offset 0x14A
    float32 m_flDamage; // offset 0x14C, size 0x4, align 4
    char _pad_0150[0x160]; // offset 0x150
};
