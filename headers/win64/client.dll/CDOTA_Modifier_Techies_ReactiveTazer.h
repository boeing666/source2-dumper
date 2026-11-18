#pragma once

class CDOTA_Modifier_Techies_ReactiveTazer : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1B0C]; // offset 0x0
    int32 bonus_ms; // offset 0x1B0C, size 0x4, align 4
    float32 disarm_duration; // offset 0x1B10, size 0x4, align 4
    float32 explosion_radius; // offset 0x1B14, size 0x4, align 4
    float32 damage; // offset 0x1B18, size 0x4, align 4
    char _pad_1B1C[0x4]; // offset 0x1B1C
};
