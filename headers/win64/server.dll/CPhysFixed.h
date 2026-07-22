#pragma once

class CPhysFixed : public CPhysConstraint /*0x0*/  // sizeof 0x528, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    float32 m_flLinearFrequency; // offset 0x500, size 0x4, align 4
    float32 m_flLinearDampingRatio; // offset 0x504, size 0x4, align 4
    float32 m_flAngularFrequency; // offset 0x508, size 0x4, align 4
    float32 m_flAngularDampingRatio; // offset 0x50C, size 0x4, align 4
    bool m_bEnableLinearConstraint; // offset 0x510, size 0x1, align 1
    bool m_bEnableAngularConstraint; // offset 0x511, size 0x1, align 1
    char _pad_0512[0x6]; // offset 0x512
    CUtlSymbolLarge m_sBoneName1; // offset 0x518, size 0x8, align 8
    CUtlSymbolLarge m_sBoneName2; // offset 0x520, size 0x8, align 8
};
