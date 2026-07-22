#pragma once

class C_DOTA_ArcanaDataEntity : public C_BaseEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    CDOTA_ArcanaDataEntity_DrowRanger* m_pArcanaData_CDOTA_ArcanaDataEntity_DrowRanger; // offset 0x5F0, size 0x8, align 8
    CDOTA_ArcanaDataEntity_FacelessVoid* m_pArcanaData_CDOTA_ArcanaDataEntity_FacelessVoid; // offset 0x5F8, size 0x8, align 8
    CDOTA_ArcanaDataEntity_Razor* m_pArcanaData_CDOTA_ArcanaDataEntity_Razor; // offset 0x600, size 0x8, align 8
};
