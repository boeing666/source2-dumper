#pragma once

class CCitadel_Ability_FissureWall : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1A08, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E8]; // offset 0x0
    CUtlVector< ParticleIndex_t > m_vecWallPreviewParticles; // offset 0x16E8, size 0x18, align 8
    char _pad_1700[0x2C0]; // offset 0x1700
    VectorWS m_vecPosition; // offset 0x19C0, size 0xC, align 4
    VectorWS m_vecTravellingPosition; // offset 0x19CC, size 0xC, align 4
    VectorWS m_vecInitialPosition; // offset 0x19D8, size 0xC, align 4
    GameTime_t m_CastTime; // offset 0x19E4, size 0x4, align 255
    Vector m_vecDirection; // offset 0x19E8, size 0xC, align 4
    Vector m_vecLeft; // offset 0x19F4, size 0xC, align 4
    float32 m_Length; // offset 0x1A00, size 0x4, align 4
    bool m_bTraveling; // offset 0x1A04, size 0x1, align 1
    bool m_bPreview; // offset 0x1A05, size 0x1, align 1
    char _pad_1A06[0x2]; // offset 0x1A06
};
