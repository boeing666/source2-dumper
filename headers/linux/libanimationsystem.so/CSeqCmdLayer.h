#pragma once

class CSeqCmdLayer  // sizeof 0x18, align 0x4 [trivial_dtor] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    int16 m_cmd; // offset 0x0, size 0x2, align 2
    int16 m_nLocalReference; // offset 0x2, size 0x2, align 2
    int16 m_nLocalBonemask; // offset 0x4, size 0x2, align 2
    int16 m_nDstResult; // offset 0x6, size 0x2, align 2
    int16 m_nSrcResult; // offset 0x8, size 0x2, align 2
    bool m_bSpline; // offset 0xA, size 0x1, align 1
    char _pad_000B[0x1]; // offset 0xB
    float32 m_flVar1; // offset 0xC, size 0x4, align 4
    float32 m_flVar2; // offset 0x10, size 0x4, align 4
    int16 m_nLineNumber; // offset 0x14, size 0x2, align 2
    char _pad_0016[0x2]; // offset 0x16
};
