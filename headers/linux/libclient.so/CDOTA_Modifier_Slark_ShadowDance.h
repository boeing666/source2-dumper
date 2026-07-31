#pragma once

class CDOTA_Modifier_Slark_ShadowDance : public CDOTA_Modifier_Invisible /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A84]; // offset 0x0
    CHandle< C_BaseEntity > m_hVisibleEntity; // offset 0x1A84, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1A88, size 0x4, align 255
    int32 unlink_vision; // offset 0x1A8C, size 0x4, align 4
};
