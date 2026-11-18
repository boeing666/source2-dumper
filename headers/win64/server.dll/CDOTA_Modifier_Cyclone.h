#pragma once

class CDOTA_Modifier_Cyclone : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    GameTime_t m_flStartTime; // offset 0x1AF8, size 0x4, align 255
    VectorWS m_vStartPos; // offset 0x1AFC, size 0xC, align 4
    float32 m_flCurTime; // offset 0x1B08, size 0x4, align 4
    float32 m_flHeightT; // offset 0x1B0C, size 0x4, align 4
};
