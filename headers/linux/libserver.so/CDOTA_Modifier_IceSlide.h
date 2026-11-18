#pragma once

class CDOTA_Modifier_IceSlide : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    GameTime_t m_fLastUpdateTime; // offset 0x1AF8, size 0x4, align 255
    Vector m_vVelocity; // offset 0x1AFC, size 0xC, align 4
};
