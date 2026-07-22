#pragma once

class CChangeLevel : public CBaseTrigger /*0x0*/  // sizeof 0xBF8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC8]; // offset 0x0
    CUtlString m_sMapName; // offset 0xBC8, size 0x8, align 8
    CUtlString m_sLandmarkName; // offset 0xBD0, size 0x8, align 8
    CEntityIOOutput m_OnChangeLevel; // offset 0xBD8, size 0x18, align 255
    bool m_bTouched; // offset 0xBF0, size 0x1, align 1
    bool m_bNoTouch; // offset 0xBF1, size 0x1, align 1
    bool m_bNewChapter; // offset 0xBF2, size 0x1, align 1
    bool m_bOnChangeLevelFired; // offset 0xBF3, size 0x1, align 1 | MNotSaved
    char _pad_0BF4[0x4]; // offset 0xBF4
};
