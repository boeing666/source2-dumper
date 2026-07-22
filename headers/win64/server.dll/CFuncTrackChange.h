#pragma once

class CFuncTrackChange : public CFuncPlatRot /*0x0*/  // sizeof 0x888, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x848]; // offset 0x0
    CPathTrack* m_trackTop; // offset 0x848, size 0x8, align 8 | MClassPtr
    CPathTrack* m_trackBottom; // offset 0x850, size 0x8, align 8 | MClassPtr
    CFuncTrackTrain* m_train; // offset 0x858, size 0x8, align 8 | MClassPtr
    CUtlSymbolLarge m_trackTopName; // offset 0x860, size 0x8, align 8
    CUtlSymbolLarge m_trackBottomName; // offset 0x868, size 0x8, align 8
    CUtlSymbolLarge m_trainName; // offset 0x870, size 0x8, align 8
    TRAIN_CODE m_code; // offset 0x878, size 0x4, align 4
    int32 m_targetState; // offset 0x87C, size 0x4, align 4
    int32 m_use; // offset 0x880, size 0x4, align 4
    char _pad_0884[0x4]; // offset 0x884
};
