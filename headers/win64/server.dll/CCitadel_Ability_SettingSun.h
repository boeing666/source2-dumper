#pragma once

class CCitadel_Ability_SettingSun : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1420, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    bool m_bProjectileActive; // offset 0xF70, size 0x1, align 1
    char _pad_0F71[0x387]; // offset 0xF71
    CUtlVector< ParticleIndex_t > m_TargetPreviews; // offset 0x12F8, size 0x18, align 8
    char _pad_1310[0x108]; // offset 0x1310
    bool m_bWasSelected; // offset 0x1418, size 0x1, align 1
    char _pad_1419[0x7]; // offset 0x1419
};
