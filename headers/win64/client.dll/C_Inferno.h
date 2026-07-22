#pragma once

class C_Inferno : public C_BaseModelEntity /*0x0*/  // sizeof 0x85C0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0xFF0]; // offset 0x0
    ParticleIndex_t m_nfxFireDamageEffect; // offset 0xFF0, size 0x4, align 255
    char _pad_0FF4[0x4]; // offset 0xFF4
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoPointsSnapshot; // offset 0xFF8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoFillerPointsSnapshot; // offset 0x1000, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoOutlinePointsSnapshot; // offset 0x1008, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoClimbingOutlinePointsSnapshot; // offset 0x1010, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoDecalsSnapshot; // offset 0x1018, size 0x8, align 8
    VectorWS[64] m_firePositions; // offset 0x1020, size 0x300, align 4
    VectorWS[64] m_fireParentPositions; // offset 0x1320, size 0x300, align 4
    bool[64] m_bFireIsBurning; // offset 0x1620, size 0x40, align 1
    Vector[64] m_BurnNormal; // offset 0x1660, size 0x300, align 4
    int32 m_fireCount; // offset 0x1960, size 0x4, align 4
    int32 m_nInfernoType; // offset 0x1964, size 0x4, align 4
    float32 m_nFireLifetime; // offset 0x1968, size 0x4, align 4
    bool m_bInPostEffectTime; // offset 0x196C, size 0x1, align 1
    char _pad_196D[0x3]; // offset 0x196D
    int32 m_lastFireCount; // offset 0x1970, size 0x4, align 4
    int32 m_nFireEffectTickBegin; // offset 0x1974, size 0x4, align 4
    char _pad_1978[0x6C08]; // offset 0x1978
    int32 m_drawableCount; // offset 0x8580, size 0x4, align 4
    bool m_blosCheck; // offset 0x8584, size 0x1, align 1
    char _pad_8585[0x3]; // offset 0x8585
    int32 m_nlosperiod; // offset 0x8588, size 0x4, align 4
    float32 m_maxFireHalfWidth; // offset 0x858C, size 0x4, align 4
    float32 m_maxFireHeight; // offset 0x8590, size 0x4, align 4
    VectorWS m_minBounds; // offset 0x8594, size 0xC, align 4
    VectorWS m_maxBounds; // offset 0x85A0, size 0xC, align 4
    float32 m_flLastGrassBurnThink; // offset 0x85AC, size 0x4, align 4
    char _pad_85B0[0x10]; // offset 0x85B0
};
