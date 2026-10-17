#pragma once

class C_DOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xE40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xD68]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0xD68, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0xD6C, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0xD78, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0xD79, size 0x1, align 1
    char _pad_0D7A[0x6]; // offset 0xD7A
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0xD80, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0xD98, size 0x1, align 1
    char _pad_0D99[0xA7]; // offset 0xD99
};
