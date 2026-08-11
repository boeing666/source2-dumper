#pragma once

class CDOTA_Modifier_Invoker_Tornado : public CDOTA_Modifier_Cyclone /*0x0*/  // sizeof 0x1AA0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A90]; // offset 0x0
    float32 m_flLandDamage; // offset 0x1A90, size 0x4, align 4
    float32 spell_lifesteal; // offset 0x1A94, size 0x4, align 4
    float32 spell_amp; // offset 0x1A98, size 0x4, align 4
    char _pad_1A9C[0x4]; // offset 0x1A9C
};
