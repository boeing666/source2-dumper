#pragma once

class CDOTA_Modifier_StoneOfRecall_Channel : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hStone; // offset 0x1AF8, size 0x4, align 4
    ParticleIndex_t m_nFXDestination; // offset 0x1AFC, size 0x4, align 255
    ParticleIndex_t m_nFXOrigin; // offset 0x1B00, size 0x4, align 255
    ParticleIndex_t m_nFXCaster; // offset 0x1B04, size 0x4, align 255
};
