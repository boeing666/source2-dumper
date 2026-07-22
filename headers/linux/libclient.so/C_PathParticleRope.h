#pragma once

class C_PathParticleRope : public C_BaseEntity /*0x0*/  // sizeof 0x890, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x788]; // offset 0x0
    bool m_bStartActive; // offset 0x788, size 0x1, align 1
    char _pad_0789[0x3]; // offset 0x789
    float32 m_flMaxSimulationTime; // offset 0x78C, size 0x4, align 4
    CUtlSymbolLarge m_iszEffectName; // offset 0x790, size 0x8, align 8
    CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // offset 0x798, size 0x18, align 8
    float32 m_flParticleSpacing; // offset 0x7B0, size 0x4, align 4
    float32 m_flSlack; // offset 0x7B4, size 0x4, align 4
    float32 m_flRadius; // offset 0x7B8, size 0x4, align 4
    Color m_ColorTint; // offset 0x7BC, size 0x4, align 1
    int32 m_nEffectState; // offset 0x7C0, size 0x4, align 4
    char _pad_07C4[0x4]; // offset 0x7C4
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x7C8, size 0x8, align 8 | MNotSaved
    C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // offset 0x7D0, size 0x18, align 8
    C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // offset 0x7E8, size 0x18, align 8
    C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // offset 0x800, size 0x18, align 8
    C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // offset 0x818, size 0x18, align 8
    C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // offset 0x830, size 0x18, align 8
    C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // offset 0x848, size 0x18, align 8
    char _pad_0860[0x30]; // offset 0x860
};
