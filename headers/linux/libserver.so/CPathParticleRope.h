#pragma once

class CPathParticleRope : public CBaseEntity /*0x0*/  // sizeof 0x860, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x780]; // offset 0x0
    bool m_bStartActive; // offset 0x780, size 0x1, align 1
    char _pad_0781[0x3]; // offset 0x781
    float32 m_flMaxSimulationTime; // offset 0x784, size 0x4, align 4
    CUtlSymbolLarge m_iszEffectName; // offset 0x788, size 0x8, align 8
    CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // offset 0x790, size 0x18, align 8
    float32 m_flParticleSpacing; // offset 0x7A8, size 0x4, align 4
    float32 m_flSlack; // offset 0x7AC, size 0x4, align 4
    float32 m_flRadius; // offset 0x7B0, size 0x4, align 4
    Color m_ColorTint; // offset 0x7B4, size 0x4, align 1
    int32 m_nEffectState; // offset 0x7B8, size 0x4, align 4
    char _pad_07BC[0x4]; // offset 0x7BC
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x7C0, size 0x8, align 8 | MNotSaved
    CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // offset 0x7C8, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // offset 0x7E0, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // offset 0x7F8, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // offset 0x810, size 0x18, align 8
    CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // offset 0x828, size 0x18, align 8
    CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // offset 0x840, size 0x18, align 8
    char _pad_0858[0x8]; // offset 0x858
};
