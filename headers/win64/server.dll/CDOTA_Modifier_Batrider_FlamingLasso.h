#pragma once

class CDOTA_Modifier_Batrider_FlamingLasso : public CDOTA_Buff /*0x0*/  // sizeof 0x1B18, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 tick_rate; // offset 0x1AF8, size 0x4, align 4
    int32 drag_distance; // offset 0x1AFC, size 0x4, align 4
    int32 break_distance; // offset 0x1B00, size 0x4, align 4
    ParticleIndex_t m_nFXIndex; // offset 0x1B04, size 0x4, align 255
    VectorWS vPreviousLocation; // offset 0x1B08, size 0xC, align 4
    CHandle< CDOTA_BaseNPC > m_hAnchor; // offset 0x1B14, size 0x4, align 4
};
