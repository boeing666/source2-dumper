#pragma once

class CFuncTrackChange : public CFuncPlatRot /*0x0*/  // sizeof 0xC98, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xC60]; // offset 0x0
    CHandle< CPathTrack > m_trackTop; // offset 0xC60, size 0x4, align 4 | MSaveBehavior
    CHandle< CPathTrack > m_trackBottom; // offset 0xC64, size 0x4, align 4 | MSaveBehavior
    CHandle< CFuncTrackTrain > m_train; // offset 0xC68, size 0x4, align 4 | MSaveBehavior
    char _pad_0C6C[0x4]; // offset 0xC6C
    CUtlSymbolLarge m_trackTopName; // offset 0xC70, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trackBottomName; // offset 0xC78, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trainName; // offset 0xC80, size 0x8, align 8 | MSaveBehavior
    TRAIN_CODE m_code; // offset 0xC88, size 0x4, align 4
    int32 m_targetState; // offset 0xC8C, size 0x4, align 4
    int32 m_use; // offset 0xC90, size 0x4, align 4
    char _pad_0C94[0x4]; // offset 0xC94
};
