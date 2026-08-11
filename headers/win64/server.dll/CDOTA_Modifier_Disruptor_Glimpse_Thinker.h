#pragma once

class CDOTA_Modifier_Disruptor_Glimpse_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    VectorWS m_vStartLoc; // offset 0x1A78, size 0xC, align 4
    CHandle< CBaseEntity > m_hEntity; // offset 0x1A84, size 0x4, align 4
    float32 m_flDistance; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x14]; // offset 0x1A8C
};
