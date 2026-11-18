#pragma once

class CDOTA_Modifier_Earthshaker_Spirit_Cairn : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    CHandle< CBaseEntity > m_hThinker; // offset 0x1AF8, size 0x4, align 4
    ParticleIndex_t m_nFissureEffectIndex; // offset 0x1AFC, size 0x4, align 255
    int32 m_nViewerID; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
