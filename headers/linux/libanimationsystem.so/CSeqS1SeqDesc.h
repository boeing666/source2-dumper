#pragma once

class CSeqS1SeqDesc  // sizeof 0x120, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_sName; // offset 0x0, size 0x10, align 8
    CSeqSeqDescFlag m_flags; // offset 0x10, size 0xB, align 1
    char _pad_001B[0x5]; // offset 0x1B
    CSeqMultiFetch m_fetch; // offset 0x20, size 0x70, align 8
    int32 m_nLocalWeightlist; // offset 0x90, size 0x4, align 4
    char _pad_0094[0x4]; // offset 0x94
    CUtlVector< CSeqAutoLayer > m_autoLayerArray; // offset 0x98, size 0x18, align 8
    CUtlVector< CSeqIKLock > m_IKLockArray; // offset 0xB0, size 0x18, align 8
    CSeqTransition m_transition; // offset 0xC8, size 0x8, align 4
    KeyValues3 m_SequenceKeys; // offset 0xD0, size 0x10, align 8
    CBufferString m_LegacyKeyValueText; // offset 0xE0, size 0x10, align 8 | MKV3TransferName
    CUtlVector< CAnimActivity > m_activityArray; // offset 0xF0, size 0x18, align 8
    CUtlVector< CFootMotion > m_footMotion; // offset 0x108, size 0x18, align 8
};
