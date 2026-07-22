#pragma once

class CSeqSynthAnimDesc  // sizeof 0x40, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_sName; // offset 0x0, size 0x10, align 8
    CSeqSeqDescFlag m_flags; // offset 0x10, size 0xB, align 1
    char _pad_001B[0x1]; // offset 0x1B
    CSeqTransition m_transition; // offset 0x1C, size 0x8, align 4
    int16 m_nLocalBaseReference; // offset 0x24, size 0x2, align 2
    int16 m_nLocalBoneMask; // offset 0x26, size 0x2, align 2
    CUtlVector< CAnimActivity > m_activityArray; // offset 0x28, size 0x18, align 8
};
