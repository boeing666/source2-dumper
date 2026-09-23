#pragma once

class C_Inferno : public C_BaseModelEntity /*0x0*/  // sizeof 0x86A0, align 0x10 [vtable] (client)
{
public:
    char _pad_0000[0x10D8]; // offset 0x0
    ParticleIndex_t m_nfxFireDamageEffect; // offset 0x10D8, size 0x4, align 255
    char _pad_10DC[0x4]; // offset 0x10DC
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoPointsSnapshot; // offset 0x10E0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoFillerPointsSnapshot; // offset 0x10E8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoOutlinePointsSnapshot; // offset 0x10F0, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoClimbingOutlinePointsSnapshot; // offset 0x10F8, size 0x8, align 8
    CStrongHandle< InfoForResourceTypeIParticleSnapshot > m_hInfernoDecalsSnapshot; // offset 0x1100, size 0x8, align 8
    VectorWS[64] m_firePositions; // offset 0x1108, size 0x300, align 4
    VectorWS[64] m_fireParentPositions; // offset 0x1408, size 0x300, align 4
    bool[64] m_bFireIsBurning; // offset 0x1708, size 0x40, align 1
    Vector[64] m_BurnNormal; // offset 0x1748, size 0x300, align 4
    int32 m_fireCount; // offset 0x1A48, size 0x4, align 4
    int32 m_nInfernoType; // offset 0x1A4C, size 0x4, align 4
    float32 m_nFireLifetime; // offset 0x1A50, size 0x4, align 4
    bool m_bInPostEffectTime; // offset 0x1A54, size 0x1, align 1
    char _pad_1A55[0x3]; // offset 0x1A55
    int32 m_lastFireCount; // offset 0x1A58, size 0x4, align 4
    int32 m_nFireEffectTickBegin; // offset 0x1A5C, size 0x4, align 4
    char _pad_1A60[0x6C00]; // offset 0x1A60
    int32 m_drawableCount; // offset 0x8660, size 0x4, align 4
    bool m_blosCheck; // offset 0x8664, size 0x1, align 1
    char _pad_8665[0x3]; // offset 0x8665
    int32 m_nlosperiod; // offset 0x8668, size 0x4, align 4
    float32 m_maxFireHalfWidth; // offset 0x866C, size 0x4, align 4
    float32 m_maxFireHeight; // offset 0x8670, size 0x4, align 4
    VectorWS m_minBounds; // offset 0x8674, size 0xC, align 4
    VectorWS m_maxBounds; // offset 0x8680, size 0xC, align 4
    float32 m_flLastGrassBurnThink; // offset 0x868C, size 0x4, align 4
    char _pad_8690[0x10]; // offset 0x8690
};
