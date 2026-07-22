#pragma once

class C_DOTA_TempTree : public CBaseAnimatingActivity /*0x0*/  // sizeof 0xBC8, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0xAF0]; // offset 0x0
    GameTime_t m_fExpireTime; // offset 0xAF0, size 0x4, align 255
    VectorWS m_vecTreeCircleCenter; // offset 0xAF4, size 0xC, align 4
    bool m_bCanApplyTreeCostume; // offset 0xB00, size 0x1, align 1
    bool m_bIsMangoTree; // offset 0xB01, size 0x1, align 1
    char _pad_0B02[0x6]; // offset 0xB02
    CUtlVector< ParticleIndex_t > m_ParticleList; // offset 0xB08, size 0x18, align 8
    bool m_bIsPartOfFowSystem; // offset 0xB20, size 0x1, align 1
    char _pad_0B21[0xA7]; // offset 0xB21
};
