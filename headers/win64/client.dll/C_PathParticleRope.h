#pragma once

class C_PathParticleRope : public C_BaseEntity /*0x0*/  // sizeof 0x700, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F8]; // offset 0x0
    bool m_bStartActive; // offset 0x5F8, size 0x1, align 1
    char _pad_05F9[0x3]; // offset 0x5F9
    float32 m_flMaxSimulationTime; // offset 0x5FC, size 0x4, align 4
    CUtlSymbolLarge m_iszEffectName; // offset 0x600, size 0x8, align 8
    CUtlVector< CUtlSymbolLarge > m_PathNodes_Name; // offset 0x608, size 0x18, align 8
    float32 m_flParticleSpacing; // offset 0x620, size 0x4, align 4
    float32 m_flSlack; // offset 0x624, size 0x4, align 4
    float32 m_flRadius; // offset 0x628, size 0x4, align 4
    Color m_ColorTint; // offset 0x62C, size 0x4, align 1
    int32 m_nEffectState; // offset 0x630, size 0x4, align 4
    char _pad_0634[0x4]; // offset 0x634
    CStrongHandle< InfoForResourceTypeIParticleSystemDefinition > m_iEffectIndex; // offset 0x638, size 0x8, align 8 | MNotSaved
    C_NetworkUtlVectorBase< Vector > m_PathNodes_Position; // offset 0x640, size 0x18, align 8
    C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentIn; // offset 0x658, size 0x18, align 8
    C_NetworkUtlVectorBase< Vector > m_PathNodes_TangentOut; // offset 0x670, size 0x18, align 8
    C_NetworkUtlVectorBase< Vector > m_PathNodes_Color; // offset 0x688, size 0x18, align 8
    C_NetworkUtlVectorBase< bool > m_PathNodes_PinEnabled; // offset 0x6A0, size 0x18, align 8
    C_NetworkUtlVectorBase< float32 > m_PathNodes_RadiusScale; // offset 0x6B8, size 0x18, align 8
    char _pad_06D0[0x30]; // offset 0x6D0
};
