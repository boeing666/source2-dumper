#pragma once

class CDOTA_BaseNPC_Creep : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x1A58, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1A28]; // offset 0x0
    CDOTA_CreepKillInfo m_KillInfo; // offset 0x1A28, size 0x20, align 255
    DOTA_LANE m_Lane; // offset 0x1A48, size 0x4, align 4
    bool m_bPushback; // offset 0x1A4C, size 0x1, align 1
    char _pad_1A4D[0x3]; // offset 0x1A4D
    float32 m_flAim; // offset 0x1A50, size 0x4, align 4
    char _pad_1A54[0x4]; // offset 0x1A54
};
