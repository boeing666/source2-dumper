#pragma once

class C_DOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xD18, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xC40]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0xC40, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0xC44, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0xC50, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0xC51, size 0x1, align 1
    char _pad_0C52[0x6]; // offset 0xC52
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0xC58, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0xC70, size 0x1, align 1
    char _pad_0C71[0xA7]; // offset 0xC71
};
