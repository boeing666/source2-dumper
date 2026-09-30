#pragma once

class CCitadel_Ability_SettingSun : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1860, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_TargetPreviews; // offset 0x16D8, size 0x18, align 8
    char _pad_16F0[0x168]; // offset 0x16F0
    bool m_bWasSelected; // offset 0x1858, size 0x1, align 1
    char _pad_1859[0x7]; // offset 0x1859
};
