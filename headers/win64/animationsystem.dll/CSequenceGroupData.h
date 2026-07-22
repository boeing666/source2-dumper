#pragma once

class CSequenceGroupData  // sizeof 0x138, align 0x8 [vtable] (animationsystem) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CBufferString m_sName; // offset 0x10, size 0x10, align 8
    uint32 m_nFlags; // offset 0x20, size 0x4, align 4
    char _pad_0024[0x4]; // offset 0x24
    CUtlVector< CBufferString > m_localSequenceNameArray; // offset 0x28, size 0x18, align 8
    CUtlVector< CSeqS1SeqDesc > m_localS1SeqDescArray; // offset 0x40, size 0x18, align 8
    CUtlVector< CSeqS1SeqDesc > m_localMultiSeqDescArray; // offset 0x58, size 0x18, align 8
    CUtlVector< CSeqSynthAnimDesc > m_localSynthAnimDescArray; // offset 0x70, size 0x18, align 8
    CUtlVector< CSeqCmdSeqDesc > m_localCmdSeqDescArray; // offset 0x88, size 0x18, align 8
    CUtlVector< CSeqBoneMaskList > m_localBoneMaskArray; // offset 0xA0, size 0x18, align 8
    CUtlVector< CSeqScaleSet > m_localScaleSetArray; // offset 0xB8, size 0x18, align 8
    CUtlVector< CBufferString > m_localBoneNameArray; // offset 0xD0, size 0x18, align 8
    CBufferString m_localNodeName; // offset 0xE8, size 0x10, align 8
    CUtlVector< CSeqPoseParamDesc > m_localPoseParamArray; // offset 0xF8, size 0x18, align 8
    KeyValues3 m_keyValues; // offset 0x110, size 0x10, align 8
    CUtlVector< CSeqIKLock > m_localIKAutoplayLockArray; // offset 0x120, size 0x18, align 8
};
