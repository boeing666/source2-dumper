#pragma once

class C_DOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xCB8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xBE0]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0xBE0, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0xBE4, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0xBF0, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0xBF1, size 0x1, align 1
    char _pad_0BF2[0x6]; // offset 0xBF2
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0xBF8, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0xC10, size 0x1, align 1
    char _pad_0C11[0xA7]; // offset 0xC11
};
