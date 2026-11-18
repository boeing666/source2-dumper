#pragma once

class CDOTA_Modifier_Invoker_Tornado_Twister : public CDOTA_Buff /*0x0*/  // sizeof 0x1B38, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 twister_radius; // offset 0x1AF8, size 0x4, align 4
    int32 twister_damage; // offset 0x1AFC, size 0x4, align 4
    float32 twister_tick_rate; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x14]; // offset 0x1B04
    int32 m_nTickCounter; // offset 0x1B18, size 0x4, align 4
    Vector m_vDirection; // offset 0x1B1C, size 0xC, align 4
    VectorWS m_vSpawnPosition; // offset 0x1B28, size 0xC, align 4
    char _pad_1B34[0x4]; // offset 0x1B34
};
