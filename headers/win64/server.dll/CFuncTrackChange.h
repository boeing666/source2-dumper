#pragma once

class CFuncTrackChange : public CFuncPlatRot /*0x0*/  // sizeof 0x9C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x988]; // offset 0x0
    CHandle< CPathTrack > m_trackTop; // offset 0x988, size 0x4, align 4 | MSaveBehavior
    CHandle< CPathTrack > m_trackBottom; // offset 0x98C, size 0x4, align 4 | MSaveBehavior
    CHandle< CFuncTrackTrain > m_train; // offset 0x990, size 0x4, align 4 | MSaveBehavior
    char _pad_0994[0x4]; // offset 0x994
    CUtlSymbolLarge m_trackTopName; // offset 0x998, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trackBottomName; // offset 0x9A0, size 0x8, align 8 | MSaveBehavior
    CUtlSymbolLarge m_trainName; // offset 0x9A8, size 0x8, align 8 | MSaveBehavior
    TRAIN_CODE m_code; // offset 0x9B0, size 0x4, align 4
    int32 m_targetState; // offset 0x9B4, size 0x4, align 4
    int32 m_use; // offset 0x9B8, size 0x4, align 4
    char _pad_09BC[0x4]; // offset 0x9BC
};
