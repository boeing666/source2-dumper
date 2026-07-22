#pragma once

class CPhysFixed : public CPhysConstraint /*0x0*/  // sizeof 0x800, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7D8]; // offset 0x0
    float32 m_flLinearFrequency; // offset 0x7D8, size 0x4, align 4
    float32 m_flLinearDampingRatio; // offset 0x7DC, size 0x4, align 4
    float32 m_flAngularFrequency; // offset 0x7E0, size 0x4, align 4
    float32 m_flAngularDampingRatio; // offset 0x7E4, size 0x4, align 4
    bool m_bEnableLinearConstraint; // offset 0x7E8, size 0x1, align 1
    bool m_bEnableAngularConstraint; // offset 0x7E9, size 0x1, align 1
    char _pad_07EA[0x6]; // offset 0x7EA
    CUtlSymbolLarge m_sBoneName1; // offset 0x7F0, size 0x8, align 8
    CUtlSymbolLarge m_sBoneName2; // offset 0x7F8, size 0x8, align 8
};
