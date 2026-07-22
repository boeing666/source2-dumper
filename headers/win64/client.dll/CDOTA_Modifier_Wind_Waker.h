#pragma once

class CDOTA_Modifier_Wind_Waker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hBlocker; // offset 0x1A58, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x1A5C, size 0x4, align 255
};
