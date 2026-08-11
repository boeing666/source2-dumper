#pragma once

class CDOTA_Modifier_Invoker_Tornado_Twister : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 twister_radius; // offset 0x1A78, size 0x4, align 4
    int32 twister_damage; // offset 0x1A7C, size 0x4, align 4
    float32 twister_tick_rate; // offset 0x1A80, size 0x4, align 4
    char _pad_1A84[0x14]; // offset 0x1A84
    int32 m_nTickCounter; // offset 0x1A98, size 0x4, align 4
    Vector m_vDirection; // offset 0x1A9C, size 0xC, align 4
    VectorWS m_vSpawnPosition; // offset 0x1AA8, size 0xC, align 4
    char _pad_1AB4[0x4]; // offset 0x1AB4
};
