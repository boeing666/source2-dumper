#pragma once

class CChangeLevel : public CBaseTrigger /*0x0*/  // sizeof 0xA60, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xA30]; // offset 0x0
    CUtlString m_sMapName; // offset 0xA30, size 0x8, align 8
    CUtlString m_sLandmarkName; // offset 0xA38, size 0x8, align 8
    CEntityIOOutput m_OnChangeLevel; // offset 0xA40, size 0x18, align 255
    bool m_bTouched; // offset 0xA58, size 0x1, align 1
    bool m_bNoTouch; // offset 0xA59, size 0x1, align 1
    bool m_bNewChapter; // offset 0xA5A, size 0x1, align 1
    bool m_bOnChangeLevelFired; // offset 0xA5B, size 0x1, align 1 | MNotSaved
    char _pad_0A5C[0x4]; // offset 0xA5C
};
