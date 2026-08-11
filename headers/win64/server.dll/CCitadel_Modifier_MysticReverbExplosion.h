#pragma once

class CCitadel_Modifier_MysticReverbExplosion : public CCitadelModifier /*0x0*/  // sizeof 0x1D8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0xD0]; // offset 0x0
    bool m_bNoDeath; // offset 0xD0, size 0x1, align 1
    bool m_bDamageInProgress; // offset 0xD1, size 0x1, align 1
    char _pad_00D2[0x2]; // offset 0xD2
    float32 m_flDamage; // offset 0xD4, size 0x4, align 4
    char _pad_00D8[0x100]; // offset 0xD8
};
