#pragma once

class C_Inferno : public C_BaseModelEntity /*0x0*/  // sizeof 0x8630, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x1060]; // offset 0x0
    ParticleIndex_t m_nfxFireDamageEffect; // offset 0x1060, size 0x4, align 255
    char _pad_1064[0x4]; // offset 0x1064
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoPointsSnapshot; // offset 0x1068, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoFillerPointsSnapshot; // offset 0x1070, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoOutlinePointsSnapshot; // offset 0x1078, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoClimbingOutlinePointsSnapshot; // offset 0x1080, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoDecalsSnapshot; // offset 0x1088, size 0x8, align 8
    VectorWS[64] m_firePositions; // offset 0x1090, size 0x300, align 4
    VectorWS[64] m_fireParentPositions; // offset 0x1390, size 0x300, align 4
    bool[64] m_bFireIsBurning; // offset 0x1690, size 0x40, align 1
    Vector[64] m_BurnNormal; // offset 0x16D0, size 0x300, align 4
    int32 m_fireCount; // offset 0x19D0, size 0x4, align 4
    int32 m_nInfernoType; // offset 0x19D4, size 0x4, align 4
    float32 m_nFireLifetime; // offset 0x19D8, size 0x4, align 4
    bool m_bInPostEffectTime; // offset 0x19DC, size 0x1, align 1
    char _pad_19DD[0x3]; // offset 0x19DD
    int32 m_lastFireCount; // offset 0x19E0, size 0x4, align 4
    int32 m_nFireEffectTickBegin; // offset 0x19E4, size 0x4, align 4
    char _pad_19E8[0x6C08]; // offset 0x19E8
    int32 m_drawableCount; // offset 0x85F0, size 0x4, align 4
    bool m_blosCheck; // offset 0x85F4, size 0x1, align 1
    char _pad_85F5[0x3]; // offset 0x85F5
    int32 m_nlosperiod; // offset 0x85F8, size 0x4, align 4
    float32 m_maxFireHalfWidth; // offset 0x85FC, size 0x4, align 4
    float32 m_maxFireHeight; // offset 0x8600, size 0x4, align 4
    VectorWS m_minBounds; // offset 0x8604, size 0xC, align 4
    VectorWS m_maxBounds; // offset 0x8610, size 0xC, align 4
    float32 m_flLastGrassBurnThink; // offset 0x861C, size 0x4, align 4
    char _pad_8620[0x10]; // offset 0x8620
};
