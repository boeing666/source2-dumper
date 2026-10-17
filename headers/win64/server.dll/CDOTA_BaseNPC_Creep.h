#pragma once

class CDOTA_BaseNPC_Creep : public CDOTA_BaseNPC_Additive /*0x0*/  // sizeof 0x19C8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1998]; // offset 0x0
    CDOTA_CreepKillInfo m_KillInfo; // offset 0x1998, size 0x20, align 255
    DOTA_LANE m_Lane; // offset 0x19B8, size 0x4, align 4
    bool m_bPushback; // offset 0x19BC, size 0x1, align 1
    char _pad_19BD[0x3]; // offset 0x19BD
    float32 m_flAim; // offset 0x19C0, size 0x4, align 4
    char _pad_19C4[0x4]; // offset 0x19C4
};
