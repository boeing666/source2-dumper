#pragma once

class CDOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x818, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7C0]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0x7C0, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0x7C4, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0x7D0, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0x7D1, size 0x1, align 1
    char _pad_07D2[0x6]; // offset 0x7D2
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0x7D8, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0x7F0, size 0x1, align 1
    bool[15] m_bForceVisible; // offset 0x7F1, size 0xF, align 1
    char _pad_0800[0x18]; // offset 0x800
};
