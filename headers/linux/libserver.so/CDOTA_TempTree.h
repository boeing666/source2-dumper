#pragma once

class CDOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB70]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0xB70, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0xB74, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0xB80, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0xB81, size 0x1, align 1
    char _pad_0B82[0x6]; // offset 0xB82
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0xB88, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0xBA0, size 0x1, align 1
    bool[15] m_bForceVisible; // offset 0xBA1, size 0xF, align 1
    char _pad_0BB0[0x18]; // offset 0xBB0
};
