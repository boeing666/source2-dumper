#pragma once

class CDOTA_Modifier_Slark_ShadowDance : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1B08]; // offset 0x0
    CHandle< CBaseEntity > m_hVisibleEntity; // offset 0x1B08, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B0C, size 0x4, align 255
    int32 unlink_vision; // offset 0x1B10, size 0x4, align 4
    char _pad_1B14[0x4]; // offset 0x1B14
};
