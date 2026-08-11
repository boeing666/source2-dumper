#pragma once

class CDOTA_ArcanaDataEntity_FacelessVoid : public CDOTA_ArcanaDataEntity_Base /*0x0*/  // sizeof 0x48, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x3C]; // offset 0x0
    int32 m_nNumPoints; // offset 0x3C, size 0x4, align 4
    GameTime_t m_flShowPopupTime; // offset 0x40, size 0x4, align 255
    char _pad_0044[0x4]; // offset 0x44
};
