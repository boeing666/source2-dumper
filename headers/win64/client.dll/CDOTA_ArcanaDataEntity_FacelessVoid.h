#pragma once

class CDOTA_ArcanaDataEntity_FacelessVoid : public CDOTA_ArcanaDataEntity_Base /*0x0*/  // sizeof 0x38, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    int32 m_nNumPoints; // offset 0x30, size 0x4, align 4
    GameTime_t m_flShowPopupTime; // offset 0x34, size 0x4, align 255
};
