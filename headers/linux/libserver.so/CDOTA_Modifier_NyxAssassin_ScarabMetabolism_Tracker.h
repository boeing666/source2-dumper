#pragma once

class CDOTA_Modifier_NyxAssassin_ScarabMetabolism_Tracker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 out_of_combat_time; // offset 0x1AF8, size 0x4, align 4
    int32 breaks_on_damage; // offset 0x1AFC, size 0x4, align 4
    GameTime_t m_flLastCombatTime; // offset 0x1B00, size 0x4, align 255
    char _pad_1B04[0x4]; // offset 0x1B04
};
