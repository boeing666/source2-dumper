#pragma once

class CFuncTrackChange : public CFuncPlatRot /*0x0*/  // sizeof 0x960, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x928]; // offset 0x0
    CHandle< CPathTrack > m_trackTop; // offset 0x928, size 0x4, align 4 | MSaveBehavior
    CHandle< CPathTrack > m_trackBottom; // offset 0x92C, size 0x4, align 4 | MSaveBehavior
    CHandle< CFuncTrackTrain > m_train; // offset 0x930, size 0x4, align 4 | MSaveBehavior
    char _pad_0934[0x4]; // offset 0x934
    CUtlSymbolLarge m_trackTopName; // offset 0x938, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trackBottomName; // offset 0x940, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trainName; // offset 0x948, size 0x8, align 8 | MSaveBehavior
    TRAIN_CODE m_code; // offset 0x950, size 0x4, align 4
    int32 m_targetState; // offset 0x954, size 0x4, align 4
    int32 m_use; // offset 0x958, size 0x4, align 4
    char _pad_095C[0x4]; // offset 0x95C
};
