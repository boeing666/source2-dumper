#pragma once

class C_DOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD50, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC78]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0xC78, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0xC7C, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0xC88, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0xC89, size 0x1, align 1
    char _pad_0C8A[0x6]; // offset 0xC8A
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0xC90, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0xCA8, size 0x1, align 1
    char _pad_0CA9[0xA7]; // offset 0xCA9
};
