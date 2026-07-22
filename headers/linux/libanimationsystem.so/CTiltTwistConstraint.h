#pragma once

class CTiltTwistConstraint : public CBaseConstraint /*0x0*/  // sizeof 0x90, align 0x10 [vtable] (modellib) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x60]; // offset 0x0
    int32 m_nTargetAxis; // offset 0x60, size 0x4, align 4
    int32 m_nSlaveAxis; // offset 0x64, size 0x4, align 4
    char _pad_0068[0x28]; // offset 0x68
};
