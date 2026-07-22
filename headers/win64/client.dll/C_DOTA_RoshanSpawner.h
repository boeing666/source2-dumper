#pragma once

class C_DOTA_RoshanSpawner : public C_PointEntity /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x5F0]; // offset 0x0
    int32 m_iLastKillerTeam; // offset 0x5F0, size 0x4, align 4
    int32 m_iKillCount; // offset 0x5F4, size 0x4, align 4
    Vector m_vRoshanAltLocation; // offset 0x5F8, size 0xC, align 4
    CHandle< C_BaseEntity > m_hRoshan; // offset 0x604, size 0x4, align 4
};
