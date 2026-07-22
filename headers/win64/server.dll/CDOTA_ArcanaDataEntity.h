#pragma once

class CDOTA_ArcanaDataEntity : public CBaseEntity /*0x0*/  // sizeof 0x4B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x498]; // offset 0x0
    CDOTA_ArcanaDataEntity_DrowRanger* m_pArcanaData_CDOTA_ArcanaDataEntity_DrowRanger; // offset 0x498, size 0x8, align 8
    CDOTA_ArcanaDataEntity_FacelessVoid* m_pArcanaData_CDOTA_ArcanaDataEntity_FacelessVoid; // offset 0x4A0, size 0x8, align 8
    CDOTA_ArcanaDataEntity_Razor* m_pArcanaData_CDOTA_ArcanaDataEntity_Razor; // offset 0x4A8, size 0x8, align 8
};
