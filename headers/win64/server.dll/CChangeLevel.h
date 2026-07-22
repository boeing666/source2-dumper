#pragma once

class CChangeLevel : public CBaseTrigger /*0x0*/  // sizeof 0x920, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x8F0]; // offset 0x0
    CUtlString m_sMapName; // offset 0x8F0, size 0x8, align 8
    CUtlString m_sLandmarkName; // offset 0x8F8, size 0x8, align 8
    CEntityIOOutput m_OnChangeLevel; // offset 0x900, size 0x18, align 255
    bool m_bTouched; // offset 0x918, size 0x1, align 1
    bool m_bNoTouch; // offset 0x919, size 0x1, align 1
    bool m_bNewChapter; // offset 0x91A, size 0x1, align 1
    bool m_bOnChangeLevelFired; // offset 0x91B, size 0x1, align 1 | MNotSaved
    char _pad_091C[0x4]; // offset 0x91C
};
