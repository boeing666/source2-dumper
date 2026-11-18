#pragma once

class CDOTA_Modifier_Item_CrellasCrozier_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1B10, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    float32 interval; // offset 0x1AF8, size 0x4, align 4
    float32 movespeed_steal_pct; // offset 0x1AFC, size 0x4, align 4
    float32 active_health_steal; // offset 0x1B00, size 0x4, align 4
    float32 active_radius; // offset 0x1B04, size 0x4, align 4
    float32 stack_duration; // offset 0x1B08, size 0x4, align 4
    char _pad_1B0C[0x4]; // offset 0x1B0C
};
