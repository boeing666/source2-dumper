#pragma once

class CDOTA_ArcanaDataEntity_Tidehunter : public CDOTA_ArcanaDataEntity_Base /*0x0*/  // sizeof 0x40, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    int32 m_nRavagesCounted; // offset 0x30, size 0x4, align 4
    int32 m_nRavagesMax; // offset 0x34, size 0x4, align 4
    int32 m_nFishCounted; // offset 0x38, size 0x4, align 4
    int32 m_nFishMax; // offset 0x3C, size 0x4, align 4
};
