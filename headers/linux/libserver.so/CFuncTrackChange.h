#pragma once

class CFuncTrackChange : public CFuncPlatRot /*0x0*/  // sizeof 0xB48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xB10]; // offset 0x0
    CHandle< CPathTrack > m_trackTop; // offset 0xB10, size 0x4, align 4 | MSaveBehavior
    CHandle< CPathTrack > m_trackBottom; // offset 0xB14, size 0x4, align 4 | MSaveBehavior
    CHandle< CFuncTrackTrain > m_train; // offset 0xB18, size 0x4, align 4 | MSaveBehavior
    char _pad_0B1C[0x4]; // offset 0xB1C
    CUtlSymbolLarge m_trackTopName; // offset 0xB20, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trackBottomName; // offset 0xB28, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trainName; // offset 0xB30, size 0x8, align 8 | MSaveBehavior
    TRAIN_CODE m_code; // offset 0xB38, size 0x4, align 4
    int32 m_targetState; // offset 0xB3C, size 0x4, align 4
    int32 m_use; // offset 0xB40, size 0x4, align 4
    char _pad_0B44[0x4]; // offset 0xB44
};
