#pragma once

class CDOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xC30, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBD8]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0xBD8, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0xBDC, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0xBE8, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0xBE9, size 0x1, align 1
    char _pad_0BEA[0x6]; // offset 0xBEA
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0xBF0, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0xC08, size 0x1, align 1
    bool[15] m_bForceVisible; // offset 0xC09, size 0xF, align 1
    char _pad_0C18[0x18]; // offset 0xC18
};
