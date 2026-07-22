#pragma once

class CDOTA_BaseNPC_Creep : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x18D0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x18A0]; // offset 0x0
    CDOTA_CreepKillInfo m_KillInfo; // offset 0x18A0, size 0x20, align 255
    DOTA_LANE m_Lane; // offset 0x18C0, size 0x4, align 4
    bool m_bPushback; // offset 0x18C4, size 0x1, align 1
    char _pad_18C5[0x3]; // offset 0x18C5
    float32 m_flAim; // offset 0x18C8, size 0x4, align 4
    char _pad_18CC[0x4]; // offset 0x18CC
};
