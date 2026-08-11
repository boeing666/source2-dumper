#pragma once

class CDOTA_Modifier_StormSpirit_Galvanized : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 perma_mp_per_kill; // offset 0x1A78, size 0x4, align 4
    float32 mp_per_kill; // offset 0x1A7C, size 0x4, align 4
    float32 aoe; // offset 0x1A80, size 0x4, align 4
    int32 charges_per_death; // offset 0x1A84, size 0x4, align 4
    int32 m_nCounter; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
