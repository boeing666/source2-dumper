#pragma once

class CDOTA_Modifier_Techies_ReactiveTazer : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A8C]; // offset 0x0
    int32 bonus_ms; // offset 0x1A8C, size 0x4, align 4
    float32 disarm_duration; // offset 0x1A90, size 0x4, align 4
    float32 explosion_radius; // offset 0x1A94, size 0x4, align 4
    float32 damage; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
