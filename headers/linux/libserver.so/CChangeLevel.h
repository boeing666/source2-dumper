#pragma once

class CChangeLevel : public CBaseTrigger /*0x0*/  // sizeof 0xBF0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xBC0]; // offset 0x0
    CUtlString m_sMapName; // offset 0xBC0, size 0x8, align 8
    CUtlString m_sLandmarkName; // offset 0xBC8, size 0x8, align 8
    CEntityIOOutput m_OnChangeLevel; // offset 0xBD0, size 0x18, align 255
    bool m_bTouched; // offset 0xBE8, size 0x1, align 1
    bool m_bNoTouch; // offset 0xBE9, size 0x1, align 1
    bool m_bNewChapter; // offset 0xBEA, size 0x1, align 1
    bool m_bOnChangeLevelFired; // offset 0xBEB, size 0x1, align 1 | MNotSaved
    char _pad_0BEC[0x4]; // offset 0xBEC
};
