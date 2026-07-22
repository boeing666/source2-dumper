#pragma once

class CDOTA_ArcanaDataEntity_DrowRanger : public CDOTA_ArcanaDataEntity_Base /*0x0*/  // sizeof 0x108, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x30]; // offset 0x0
    int8[24] m_vecDrowRangerArcanaTargetPlayerID; // offset 0x30, size 0x18, align 1
    GameTime_t[24] m_vecDrowRangerArcanaDeathTime; // offset 0x48, size 0x60, align 4
    GameTime_t[24] m_vecDrowRangerArcanaKillTime; // offset 0xA8, size 0x60, align 4
};
