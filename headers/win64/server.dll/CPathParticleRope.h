#pragma once

class CPathParticleRope : public CBaseEntity /*0x0*/  // sizeof 0x588, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    bool m_bStartActive; // offset 0x4A8, size 0x1, align 1
    char _pad_04A9[0x3]; // offset 0x4A9
    float32 m_flMaxSimulationTime; // offset 0x4AC, size 0x4, align 4
    CUtlSymbolLarge m_iszEffectName; // offset 0x4B0, size 0x8, align 8
    CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // offset 0x4B8, size 0x18, align 8
    float32 m_flParticleSpacing; // offset 0x4D0, size 0x4, align 4 | MNetworkEnable
    float32 m_flSlack; // offset 0x4D4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    float32 m_flRadius; // offset 0x4D8, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    Color m_ColorTint; // offset 0x4DC, size 0x4, align 1 | MNetworkEnable MNetworkChangeCallback
    int32 m_nEffectState; // offset 0x4E0, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_04E4[0x4]; // offset 0x4E4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x4E8, size 0x8, align 8 | MNetworkEnable MNotSaved
    CNetworkUtlVectorBase< Vector > m_PathNodes_Position; // offset 0x4F0, size 0x18, align 8 | MNetworkEnable
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // offset 0x508, size 0x18, align 8 | MNetworkEnable
    CNetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // offset 0x520, size 0x18, align 8 | MNetworkEnable
    CNetworkUtlVectorBase< Vector > m_PathNodes_Color; // offset 0x538, size 0x18, align 8 | MNetworkEnable
    CNetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // offset 0x550, size 0x18, align 8 | MNetworkEnable MNetworkChangeCallback
    CNetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // offset 0x568, size 0x18, align 8 | MNetworkEnable
    char _pad_0580[0x8]; // offset 0x580
};
