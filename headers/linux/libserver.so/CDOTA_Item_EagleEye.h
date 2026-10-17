#pragma once

class CDOTA_Item_EagleEye : public CDOTA_Item /*0x0*/  // sizeof 0x948, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    int32 m_iTempViewer; // offset 0x934, size 0x4, align 4
    int32 m_iTeam; // offset 0x938, size 0x4, align 4
    int32 m_nFXIndex; // offset 0x93C, size 0x4, align 4
    CHandle< CBaseEntity > m_hThinker; // offset 0x940, size 0x4, align 4
    char _pad_0944[0x4]; // offset 0x944
};
