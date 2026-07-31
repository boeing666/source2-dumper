#pragma once

class CDOTA_Modifier_Wisp_Relocate_Return : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A78, size 0x4, align 4
    VectorWS m_vecReturnPosition; // offset 0x1A7C, size 0xC, align 4
    float32 return_time; // offset 0x1A88, size 0x4, align 4
    ParticleIndex_t m_nFXTimeRemaining; // offset 0x1A8C, size 0x4, align 255
};
