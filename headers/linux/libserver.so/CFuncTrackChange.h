#pragma once

class CFuncTrackChange : public CFuncPlatRot /*0x0*/  // sizeof 0xC28, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBF0]; // offset 0x0
    CHandle< CPathTrack > m_trackTop; // offset 0xBF0, size 0x4, align 4 | MSaveBehavior
    CHandle< CPathTrack > m_trackBottom; // offset 0xBF4, size 0x4, align 4 | MSaveBehavior
    CHandle< CFuncTrackTrain > m_train; // offset 0xBF8, size 0x4, align 4 | MSaveBehavior
    char _pad_0BFC[0x4]; // offset 0xBFC
    CUtlSymbolLarge m_trackTopName; // offset 0xC00, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trackBottomName; // offset 0xC08, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trainName; // offset 0xC10, size 0x8, align 8 | MSaveBehavior
    TRAIN_CODE m_code; // offset 0xC18, size 0x4, align 4
    int32 m_targetState; // offset 0xC1C, size 0x4, align 4
    int32 m_use; // offset 0xC20, size 0x4, align 4
    char _pad_0C24[0x4]; // offset 0xC24
};
