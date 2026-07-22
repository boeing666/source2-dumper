#pragma once

class CDOTA_Modifier_Earthshaker_Spirit_Cairn : public CDOTA_Buff /*0x0*/  // sizeof 0x1A60, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CHandle< C_BaseEntity > m_hThinker; // offset 0x1A58, size 0x4, align 4
    ParticleIndex_t m_nFissureEffectIndex; // offset 0x1A5C, size 0x4, align 255
};
