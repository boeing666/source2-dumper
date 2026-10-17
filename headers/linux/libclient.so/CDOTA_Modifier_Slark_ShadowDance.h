#pragma once

class CDOTA_Modifier_Slark_ShadowDance : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1AC0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AB4]; // offset 0x0
    CHandle< C_BaseEntity > m_hVisibleEntity; // offset 0x1AB4, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1AB8, size 0x4, align 255
    int32 unlink_vision; // offset 0x1ABC, size 0x4, align 4
};
