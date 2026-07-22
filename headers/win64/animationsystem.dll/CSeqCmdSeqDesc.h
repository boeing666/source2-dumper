#pragma once

class CSeqCmdSeqDesc  // sizeof 0x90, align 0x8 (animationsystem) {MGetKV3ClassDefaults}
{
public:
    CBufferString m_sName; // offset 0x0, size 0x10, align 8
    CSeqSeqDescFlag m_flags; // offset 0x10, size 0xB, align 1
    char _pad_001B[0x1]; // offset 0x1B
    CSeqTransition m_transition; // offset 0x1C, size 0x8, align 4
    int16 m_nFrameRangeSequence; // offset 0x24, size 0x2, align 2
    int16 m_nFrameCount; // offset 0x26, size 0x2, align 2
    float32 m_flFPS; // offset 0x28, size 0x4, align 4
    int16 m_nSubCycles; // offset 0x2C, size 0x2, align 2
    int16 m_numLocalResults; // offset 0x2E, size 0x2, align 2
    CUtlVector< CSeqCmdLayer > m_cmdLayerArray; // offset 0x30, size 0x18, align 8
    CUtlVector< CAnimEventDefinition > m_eventArray; // offset 0x48, size 0x18, align 8
    CUtlVector< CAnimActivity > m_activityArray; // offset 0x60, size 0x18, align 8
    CUtlVector< CSeqPoseSetting > m_poseSettingArray; // offset 0x78, size 0x18, align 8
};
