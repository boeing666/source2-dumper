#pragma once

class CDOTA_Modifier_Wisp_Relocate_Return : public CDOTA_Buff /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AA8, size 0x4, align 4
    VectorWS m_vecReturnPosition; // offset 0x1AAC, size 0xC, align 4
    float32 return_time; // offset 0x1AB8, size 0x4, align 4
    ParticleIndex_t m_nFXTimeRemaining; // offset 0x1ABC, size 0x4, align 255
};
