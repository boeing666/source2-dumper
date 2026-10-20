#pragma once

class CCitadel_Ability_SettingSun : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1B08, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    bool m_bProjectileActive; // offset 0x14A8, size 0x1, align 1
    char _pad_14A9[0x4D7]; // offset 0x14A9
    CUtlVector< ParticleIndex_t > m_TargetPreviews; // offset 0x1980, size 0x18, align 8
    char _pad_1998[0x168]; // offset 0x1998
    bool m_bWasSelected; // offset 0x1B00, size 0x1, align 1
    char _pad_1B01[0x7]; // offset 0x1B01
};
