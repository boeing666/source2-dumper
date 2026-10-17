#pragma once

class CDOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0x8F8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8A0]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0x8A0, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0x8A4, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0x8B0, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0x8B1, size 0x1, align 1
    char _pad_08B2[0x6]; // offset 0x8B2
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0x8B8, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0x8D0, size 0x1, align 1
    bool[15] m_bForceVisible; // offset 0x8D1, size 0xF, align 1
    char _pad_08E0[0x18]; // offset 0x8E0
};
