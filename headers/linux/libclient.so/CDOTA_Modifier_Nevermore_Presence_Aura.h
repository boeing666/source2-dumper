#pragma once

class CDOTA_Modifier_Nevermore_Presence_Aura : public CDOTA_Buff /*0x0*/  // sizeof 0x1A88, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    float32 presence_radius; // offset 0x1A78, size 0x4, align 4
    float32 kill_buff_duration; // offset 0x1A7C, size 0x4, align 4
    GameTime_t m_fLastStackChange; // offset 0x1A80, size 0x4, align 255
    char _pad_1A84[0x4]; // offset 0x1A84
};
