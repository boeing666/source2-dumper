#pragma once

class CSeqScaleSet  // sizeof 0x50, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_sName; // offset 0x0, size 0x10, align 8
    bool m_bRootOffset; // offset 0x10, size 0x1, align 1
    char _pad_0011[0x3]; // offset 0x11
    Vector m_vRootOffset; // offset 0x14, size 0xC, align 4
    CUtlVector< int16 > m_nLocalBoneArray; // offset 0x20, size 0x18, align 8
    CUtlVector< float32 > m_flBoneScaleArray; // offset 0x38, size 0x18, align 8
};
