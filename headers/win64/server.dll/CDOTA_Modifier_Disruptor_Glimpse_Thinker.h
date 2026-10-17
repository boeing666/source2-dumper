#pragma once

class CDOTA_Modifier_Disruptor_Glimpse_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AD0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    VectorWS m_vStartLoc; // offset 0x1AA8, size 0xC, align 4
    CHandle< CBaseEntity > m_hEntity; // offset 0x1AB4, size 0x4, align 4
    float32 m_flDistance; // offset 0x1AB8, size 0x4, align 4
    char _pad_1ABC[0x14]; // offset 0x1ABC
};
