#pragma once

class C_OP_LockPoints : public CParticleFunctionOperator /*0x0*/  // sizeof 0x1F0, align 0x8 [vtable] (particles) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x1D8]; // offset 0x0
    int32 m_nMinCol; // offset 0x1D8, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxCol; // offset 0x1DC, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMinRow; // offset 0x1E0, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nMaxRow; // offset 0x1E4, size 0x4, align 4 | MPropertyFriendlyName
    int32 m_nControlPoint; // offset 0x1E8, size 0x4, align 4 | MPropertyFriendlyName
    float32 m_flBlendValue; // offset 0x1EC, size 0x4, align 4 | MPropertyFriendlyName
};
