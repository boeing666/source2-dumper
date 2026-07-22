#pragma once

class CDOTA_Modifier_IceSlide : public CDOTA_Buff /*0x0*/  // sizeof 0x1A68, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    GameTime_t m_fLastUpdateTime; // offset 0x1A58, size 0x4, align 255
    Vector m_vVelocity; // offset 0x1A5C, size 0xC, align 4
};
