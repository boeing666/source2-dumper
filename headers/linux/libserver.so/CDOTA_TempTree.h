#pragma once

class CDOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xAE8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA90]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0xA90, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0xA94, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0xAA0, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0xAA1, size 0x1, align 1
    char _pad_0AA2[0x6]; // offset 0xAA2
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0xAA8, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0xAC0, size 0x1, align 1
    bool[15] m_bForceVisible; // offset 0xAC1, size 0xF, align 1
    char _pad_0AD0[0x18]; // offset 0xAD0
};
