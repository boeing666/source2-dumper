#pragma once

class CDOTA_BaseNPC_Creep : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1D38, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1D0C]; // offset 0x0
    CDOTA_CreepKillInfo m_KillInfo; // offset 0x1D0C, size 0x20, align 255
    DOTA_LANE m_Lane; // offset 0x1D2C, size 0x4, align 4
    bool m_bPushback; // offset 0x1D30, size 0x1, align 1
    char _pad_1D31[0x3]; // offset 0x1D31
    float32 m_flAim; // offset 0x1D34, size 0x4, align 4
};
