#pragma once

class CDampedValueUpdateItem  // sizeof 0x28, align 0x8 [trivial_dtor] (animgraphlib) {MGetKV3ClassDefaults}
{
public:
    CAnimInputDamping m_damping; // offset 0x0, size 0x18, align 8
    char _pad_0018[0x8]; // offset 0x18
    CAnimParamHandle m_hParamIn; // offset 0x20, size 0x2, align 1
    CAnimParamHandle m_hParamOut; // offset 0x22, size 0x2, align 1
    char _pad_0024[0x4]; // offset 0x24
};
