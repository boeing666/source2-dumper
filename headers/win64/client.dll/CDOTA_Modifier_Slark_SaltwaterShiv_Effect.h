#pragma once

class CDOTA_Modifier_Slark_SaltwaterShiv_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB8, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    int32 health_rest_steal; // offset 0x1AA8, size 0x4, align 4
    int32 base_health_rest_steal; // offset 0x1AAC, size 0x4, align 4
    int32 ms_steal; // offset 0x1AB0, size 0x4, align 4
    float32 regen_steal; // offset 0x1AB4, size 0x4, align 4
};
