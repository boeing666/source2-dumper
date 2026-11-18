#pragma once

class CDOTA_Modifier_Item_Essence_Distiller_Thinker : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 latch_range; // offset 0x1AF8, size 0x4, align 4
    int32 latch_vision; // offset 0x1AFC, size 0x4, align 4
    float32 linger_after_latch_duration; // offset 0x1B00, size 0x4, align 4
    ParticleIndex_t nFXIndex; // offset 0x1B04, size 0x4, align 255
};
