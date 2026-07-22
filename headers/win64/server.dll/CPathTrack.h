#pragma once

class CPathTrack : public CPointEntity /*0x0*/  // sizeof 0x4E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x4A8]; // offset 0x0
    CHandle< CPathTrack > m_pnext; // offset 0x4A8, size 0x4, align 4
    CHandle< CPathTrack > m_pprevious; // offset 0x4AC, size 0x4, align 4
    CHandle< CPathTrack > m_paltpath; // offset 0x4B0, size 0x4, align 4
    float32 m_flSpeed; // offset 0x4B4, size 0x4, align 4
    float32 m_flRadius; // offset 0x4B8, size 0x4, align 4
    float32 m_length; // offset 0x4BC, size 0x4, align 4
    CUtlSymbolLarge m_altName; // offset 0x4C0, size 0x8, align 8
    int32 m_nIterVal; // offset 0x4C8, size 0x4, align 4 | MNotSaved
    TrackOrientationType_t m_eOrientationType; // offset 0x4CC, size 0x4, align 4
    CEntityIOOutput m_OnPass; // offset 0x4D0, size 0x18, align 255
};
