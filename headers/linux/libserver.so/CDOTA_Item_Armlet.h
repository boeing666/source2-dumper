#pragma once

class CDOTA_Item_Armlet : public CDOTA_Item /*0x0*/  // sizeof 0x940, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x934]; // offset 0x0
    float32 toggle_cooldown; // offset 0x934, size 0x4, align 4
    GameTime_t m_flLastActivateTime; // offset 0x938, size 0x4, align 255
    GameTime_t m_flLastDeactivateTime; // offset 0x93C, size 0x4, align 255
};
