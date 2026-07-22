#pragma once

class CPathParticleRope : public CBaseEntity /*0x0*/  // sizeof 0x580, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A0]; // offset 0x0
    bool m_bStartActive; // offset 0x4A0, size 0x1, align 1
    char _pad_04A1[0x3]; // offset 0x4A1
    float32 m_flMaxSimulationTime; // offset 0x4A4, size 0x4, align 4
    CUtlSymbolLarge m_iszEffectName; // offset 0x4A8, size 0x8, align 8
    CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // offset 0x4B0, size 0x18, align 8
    float32 m_flParticleSpacing; // offset 0x4C8, size 0x4, align 4
    float32 m_flSlack; // offset 0x4CC, size 0x4, align 4
    float32 m_flRadius; // offset 0x4D0, size 0x4, align 4
    Color m_ColorTint; // offset 0x4D4, size 0x4, align 1
    int32 m_nEffectState; // offset 0x4D8, size 0x4, align 4
    char _pad_04DC[0x4]; // offset 0x4DC
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x4E0, size 0x8, align 8 | MNotSaved
    CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // offset 0x4E8, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // offset 0x500, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // offset 0x518, size 0x18, align 8
    CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // offset 0x530, size 0x18, align 8
    CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // offset 0x548, size 0x18, align 8
    CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // offset 0x560, size 0x18, align 8
    char _pad_0578[0x8]; // offset 0x578
};
