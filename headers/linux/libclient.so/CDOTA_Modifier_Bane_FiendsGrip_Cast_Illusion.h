#pragma once

class CDOTA_Modifier_Bane_FiendsGrip_Cast_Illusion : public CDOTA_Buff /*0x0*/  // sizeof 0x1A80, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    int32 fiend_grip_mana_drain; // offset 0x1A78, size 0x4, align 4
    float32 fiend_grip_tick_interval; // offset 0x1A7C, size 0x4, align 4
};
