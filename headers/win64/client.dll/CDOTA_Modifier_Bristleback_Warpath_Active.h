#pragma once

class CDOTA_Modifier_Bristleback_Warpath_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    float32 active_view_angle_restriction; // offset 0x1AA8, size 0x4, align 4
    ParticleIndex_t m_nScreenFXIndex; // offset 0x1AAC, size 0x4, align 255
};
