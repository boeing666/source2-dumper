#pragma once

class CCitadel_Ability_Tengu_StoneForm : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1BE0, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x1BC8]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1BC8, size 0x4, align 255
    GameTime_t m_flLandedTime; // offset 0x1BCC, size 0x4, align 255
    bool m_bLanded; // offset 0x1BD0, size 0x1, align 1
    bool m_bFalling; // offset 0x1BD1, size 0x1, align 1
    bool m_bInStoneForm; // offset 0x1BD2, size 0x1, align 1
    char _pad_1BD3[0x1]; // offset 0x1BD3
    float32 m_flStartHeight; // offset 0x1BD4, size 0x4, align 4
    ParticleIndex_t m_nStoneFormEffect; // offset 0x1BD8, size 0x4, align 255
    char _pad_1BDC[0x4]; // offset 0x1BDC
};
