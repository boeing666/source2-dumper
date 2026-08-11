#pragma once

class CDOTA_Modifier_Mirana_MoonlightShadow : public CDOTA_Modifier_PersistentInvisibility /*0x0*/  // sizeof 0x1A98, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A88]; // offset 0x0
    float32 duration; // offset 0x1A88, size 0x4, align 4
    int32 bonus_movement_speed; // offset 0x1A8C, size 0x4, align 4
    int32 evasion; // offset 0x1A90, size 0x4, align 4
    float32 bonus_outgoing_damage_pct; // offset 0x1A94, size 0x4, align 4
};
