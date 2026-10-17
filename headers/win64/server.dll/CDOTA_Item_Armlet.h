#pragma once

class CDOTA_Item_Armlet : public CDOTA_Item /*0x0*/  // sizeof 0x670, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x660]; // offset 0x0
    float32 toggle_cooldown; // offset 0x660, size 0x4, align 4
    GameTime_t m_flLastActivateTime; // offset 0x664, size 0x4, align 255
    GameTime_t m_flLastDeactivateTime; // offset 0x668, size 0x4, align 255
    char _pad_066C[0x4]; // offset 0x66C
};
