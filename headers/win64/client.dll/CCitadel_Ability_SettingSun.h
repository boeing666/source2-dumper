#pragma once

class CCitadel_Ability_SettingSun : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1868, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_TargetPreviews; // offset 0x16E0, size 0x18, align 8
    char _pad_16F8[0x168]; // offset 0x16F8
    bool m_bWasSelected; // offset 0x1860, size 0x1, align 1
    char _pad_1861[0x7]; // offset 0x1861
};
