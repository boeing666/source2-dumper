#pragma once

class CChangeLevel : public CBaseTrigger /*0x0*/  // sizeof 0xCD8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    CUtlString m_sMapName; // offset 0xCA8, size 0x8, align 8
    CUtlString m_sLandmarkName; // offset 0xCB0, size 0x8, align 8
    CEntityIOOutput m_OnChangeLevel; // offset 0xCB8, size 0x18, align 255
    bool m_bTouched; // offset 0xCD0, size 0x1, align 1
    bool m_bNoTouch; // offset 0xCD1, size 0x1, align 1
    bool m_bNewChapter; // offset 0xCD2, size 0x1, align 1
    bool m_bOnChangeLevelFired; // offset 0xCD3, size 0x1, align 1 | MNotSaved
    char _pad_0CD4[0x4]; // offset 0xCD4
};
