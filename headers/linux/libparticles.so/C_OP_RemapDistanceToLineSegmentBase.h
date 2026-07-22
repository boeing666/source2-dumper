#pragma once

class C_OP_RemapDistanceToLineSegmentBase : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1E8, align 0xFF [vtable abstract] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D0]; // offset 0x0
    int32 m_nCP0; // offset 0x1D0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nCP1; // offset 0x1D4, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMinInputValue; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flMaxInputValue; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    bool m_bInfiniteLine; // offset 0x1E0, size 0x1, align 1 | MPropertyFriendlyName
    char _pad_01E1[0x7]; // offset 0x1E1
};
