#pragma once

class CFuncTrackChange : public CFuncPlatRot /*0x0*/  // sizeof 0x878, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x840]; // offset 0x0
    CHandle< CPathTrack > m_trackTop; // offset 0x840, size 0x4, align 4 | MSaveBehavior
    CHandle< CPathTrack > m_trackBottom; // offset 0x844, size 0x4, align 4 | MSaveBehavior
    CHandle< CFuncTrackTrain > m_train; // offset 0x848, size 0x4, align 4 | MSaveBehavior
    char _pad_084C[0x4]; // offset 0x84C
    CUtlSymbolLarge m_trackTopName; // offset 0x850, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trackBottomName; // offset 0x858, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trainName; // offset 0x860, size 0x8, align 8 | MSaveBehavior
    TRAIN_CODE m_code; // offset 0x868, size 0x4, align 4
    int32 m_targetState; // offset 0x86C, size 0x4, align 4
    int32 m_use; // offset 0x870, size 0x4, align 4
    char _pad_0874[0x4]; // offset 0x874
};
