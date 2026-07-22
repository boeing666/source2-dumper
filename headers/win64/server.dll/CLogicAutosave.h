#pragma once

class CLogicAutosave : public CLogicalEntity /*0x0*/  // sizeof 0x4A8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    bool m_bForceNewLevelUnit; // offset 0x498, size 0x1, align 1
    char _pad_0499[0x3]; // offset 0x499
    int32 m_minHitPoints; // offset 0x49C, size 0x4, align 4
    int32 m_minHitPointsToCommit; // offset 0x4A0, size 0x4, align 4
    char _pad_04A4[0x4]; // offset 0x4A4
};
