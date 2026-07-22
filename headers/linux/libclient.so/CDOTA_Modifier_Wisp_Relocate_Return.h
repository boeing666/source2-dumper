#pragma once

class CDOTA_Modifier_Wisp_Relocate_Return : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x1A58, size 0x4, align 4
    VectorWS m_vecReturnPosition; // offset 0x1A5C, size 0xC, align 4
    float32 return_time; // offset 0x1A68, size 0x4, align 4
    ParticleIndex_t m_nFXTimeRemaining; // offset 0x1A6C, size 0x4, align 255
};
