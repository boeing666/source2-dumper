#pragma once

class CPathParticleRope : public CBaseEntity /*0x0*/  // sizeof 0x590, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4B0]; // offset 0x0
    bool m_bStartActive; // offset 0x4B0, size 0x1, align 1
    char _pad_04B1[0x3]; // offset 0x4B1
    float32 m_flMaxSimulationTime; // offset 0x4B4, size 0x4, align 4
    CUtlSymbolLarge m_iszEffectName; // offset 0x4B8, size 0x8, align 8
    CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // offset 0x4C0, size 0x18, align 8
    float32 m_flParticleSpacing; // offset 0x4D8, size 0x4, align 4
    float32 m_flSlack; // offset 0x4DC, size 0x4, align 4
    float32 m_flRadius; // offset 0x4E0, size 0x4, align 4
    Color m_ColorTint; // offset 0x4E4, size 0x4, align 1
    int32 m_nEffectState; // offset 0x4E8, size 0x4, align 4
    char _pad_04EC[0x4]; // offset 0x4EC
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x4F0, size 0x8, align 8 | MNotSaved
    CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // offset 0x4F8, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // offset 0x510, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // offset 0x528, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // offset 0x540, size 0x18, align 8
    CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // offset 0x558, size 0x18, align 8
    CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // offset 0x570, size 0x18, align 8
    char _pad_0588[0x8]; // offset 0x588
};
