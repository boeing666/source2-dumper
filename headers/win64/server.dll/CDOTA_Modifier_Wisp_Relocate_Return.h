#pragma once

class CDOTA_Modifier_Wisp_Relocate_Return : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0x1AF8, size 0x4, align 4
    VectorWS m_vecReturnPosition; // offset 0x1AFC, size 0xC, align 4
    float32 return_time; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t m_nFXTimeRemaining; // offset 0x1B0C, size 0x4, align 255
};
