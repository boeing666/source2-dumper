#pragma once

class CDOTA_Item_EagleEye : public CDOTA_Item /*0x0*/  // sizeof 0x668, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x658]; // offset 0x0
    int32 m_iTempViewer; // offset 0x658, size 0x4, align 4
    int32 m_iTeam; // offset 0x65C, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x660, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x664, size 0x4, align 4
};
