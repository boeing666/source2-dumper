#pragma once

class CDOTA_Modifier_Wind_Waker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B20, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hBlocker; // offset 0x1AF8, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x1AFC, size 0x4, align 255
    VectorWS m_vStartPos; // offset 0x1B00, size 0xC, align 4
    float32 m_flCurTime; // offset 0x1B0C, size 0x4, align 4
    float32 m_flHeightT; // offset 0x1B10, size 0x4, align 4
    VectorWS m_vMoveToPos; // offset 0x1B14, size 0xC, align 4
};
