#pragma once

class CCitadel_Modifier_MysticReverbExplosion : public CCitadelModifier /*0x0*/  // sizeof 0x2A8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x140]; // offset 0x0
    bool m_bNoDeath; // offset 0x140, size 0x1, align 1
    bool m_bDamageInProgress; // offset 0x141, size 0x1, align 1
    char _pad_0142[0x2]; // offset 0x142
    float32 m_flDamage; // offset 0x144, size 0x4, align 4
    char _pad_0148[0x160]; // offset 0x148
};
