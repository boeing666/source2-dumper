#pragma once

class CCitadel_Ability_SettingSun : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1300, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_TargetPreviews; // offset 0x11D8, size 0x18, align 8
    char _pad_11F0[0x108]; // offset 0x11F0
    bool m_bWasSelected; // offset 0x12F8, size 0x1, align 1
    char _pad_12F9[0x7]; // offset 0x12F9
};
