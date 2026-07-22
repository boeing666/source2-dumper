#pragma once

class CDOTA_Modifier_Item_CrellasCrozier_Active : public CDOTA_Buff /*0x0*/  // sizeof 0x1A70, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    float32 interval; // offset 0x1A58, size 0x4, align 4
    float32 movespeed_steal_pct; // offset 0x1A5C, size 0x4, align 4
    float32 active_health_steal; // offset 0x1A60, size 0x4, align 4
    float32 active_radius; // offset 0x1A64, size 0x4, align 4
    float32 stack_duration; // offset 0x1A68, size 0x4, align 4
    char _pad_1A6C[0x4]; // offset 0x1A6C
};
