#pragma once

class CDOTAOverworldPathColorRule  // sizeof 0x18, align 0x4 [trivial_dtor] (client) {MGetKV3ClassDefaults MVDataRoot}
{
public:
    EOverworldNodeFlags m_eNodeFlags; // offset 0x0, size 0x4, align 4
    Color m_cLockedColor; // offset 0x4, size 0x4, align 1
    Color m_cCompleteColor; // offset 0x8, size 0x4, align 1
    Color m_cActiveColor; // offset 0xC, size 0x4, align 1
    uint8 m_unLockedThickness; // offset 0x10, size 0x1, align 1
    uint8 m_unCompleteThickness; // offset 0x11, size 0x1, align 1
    uint8 m_unRoomConnectionThickness; // offset 0x12, size 0x1, align 1
    char _pad_0013[0x1]; // offset 0x13
    float32 m_flRoomConnectionBrightness; // offset 0x14, size 0x4, align 4
};
