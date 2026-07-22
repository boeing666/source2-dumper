#pragma once

class CSeqPoseSetting  // sizeof 0x40, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_sPoseParameter; // offset 0x0, size 0x10, align 8
    CBufferString m_sAttachment; // offset 0x10, size 0x10, align 8
    CBufferString m_sReferenceSequence; // offset 0x20, size 0x10, align 8
    float32 m_flValue; // offset 0x30, size 0x4, align 4
    bool m_bX; // offset 0x34, size 0x1, align 1
    bool m_bY; // offset 0x35, size 0x1, align 1
    bool m_bZ; // offset 0x36, size 0x1, align 1
    char _pad_0037[0x1]; // offset 0x37
    int32 m_eType; // offset 0x38, size 0x4, align 4
    char _pad_003C[0x4]; // offset 0x3C
};
