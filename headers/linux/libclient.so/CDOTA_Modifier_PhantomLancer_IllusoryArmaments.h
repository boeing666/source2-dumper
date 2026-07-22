#pragma once

class CDOTA_Modifier_PhantomLancer_IllusoryArmaments : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A5C]; // offset 0x0
    float32 outgoing_floor; // offset 0x1A5C, size 0x4, align 4
    float32 duration; // offset 0x1A60, size 0x4, align 4
    GameTime_t m_flExpireTime; // offset 0x1A64, size 0x4, align 255
};
