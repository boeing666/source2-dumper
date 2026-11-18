#pragma once

class CDOTA_Modifier_Brewmaster_CinderBrew : public CDOTA_Buff /*0x0*/  // sizeof 0x1B08, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 movement_slow; // offset 0x1AF8, size 0x4, align 4
    bool m_bIgniteActive; // offset 0x1AFC, size 0x1, align 1
    char _pad_1AFD[0x3]; // offset 0x1AFD
    float32 m_flDamagePerTick; // offset 0x1B00, size 0x4, align 4
    char _pad_1B04[0x4]; // offset 0x1B04
};
