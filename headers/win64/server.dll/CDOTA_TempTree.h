#pragma once

class CDOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x958, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x900]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0x900, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0x904, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0x910, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0x911, size 0x1, align 1
    char _pad_0912[0x6]; // offset 0x912
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0x918, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0x930, size 0x1, align 1
    bool[15] m_bForceVisible; // offset 0x931, size 0xF, align 1
    char _pad_0940[0x18]; // offset 0x940
};
