#pragma once

class C_Inferno : public C_BaseModelEntity /*0x0*/  // sizeof 0x8540, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xF78]; // offset 0x0
    ParticleIndex_t m_nfxFireDamageEffect; // offset 0xF78, size 0x4, align 255
    char _pad_0F7C[0x4]; // offset 0xF7C
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoPointsSnapshot; // offset 0xF80, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoFillerPointsSnapshot; // offset 0xF88, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoOutlinePointsSnapshot; // offset 0xF90, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoClimbingOutlinePointsSnapshot; // offset 0xF98, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoDecalsSnapshot; // offset 0xFA0, size 0x8, align 8
    VectorWS[64] m_firePositions; // offset 0xFA8, size 0x300, align 4
    VectorWS[64] m_fireParentPositions; // offset 0x12A8, size 0x300, align 4
    bool[64] m_bFireIsBurning; // offset 0x15A8, size 0x40, align 1
    Vector[64] m_BurnNormal; // offset 0x15E8, size 0x300, align 4
    int32 m_fireCount; // offset 0x18E8, size 0x4, align 4
    int32 m_nInfernoType; // offset 0x18EC, size 0x4, align 4
    float32 m_nFireLifetime; // offset 0x18F0, size 0x4, align 4
    bool m_bInPostEffectTime; // offset 0x18F4, size 0x1, align 1
    char _pad_18F5[0x3]; // offset 0x18F5
    int32 m_lastFireCount; // offset 0x18F8, size 0x4, align 4
    int32 m_nFireEffectTickBegin; // offset 0x18FC, size 0x4, align 4
    char _pad_1900[0x6C00]; // offset 0x1900
    int32 m_drawableCount; // offset 0x8500, size 0x4, align 4
    bool m_blosCheck; // offset 0x8504, size 0x1, align 1
    char _pad_8505[0x3]; // offset 0x8505
    int32 m_nlosperiod; // offset 0x8508, size 0x4, align 4
    float32 m_maxFireHalfWidth; // offset 0x850C, size 0x4, align 4
    float32 m_maxFireHeight; // offset 0x8510, size 0x4, align 4
    VectorWS m_minBounds; // offset 0x8514, size 0xC, align 4
    VectorWS m_maxBounds; // offset 0x8520, size 0xC, align 4
    float32 m_flLastGrassBurnThink; // offset 0x852C, size 0x4, align 4
    char _pad_8530[0x10]; // offset 0x8530
};
