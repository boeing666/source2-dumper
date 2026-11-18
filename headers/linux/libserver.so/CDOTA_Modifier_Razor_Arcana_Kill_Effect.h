#pragma once

class CDOTA_Modifier_Razor_Arcana_Kill_Effect : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    ParticleIndex_t m_nCasterFXIndex; // offset 0x1AF8, size 0x4, align 255
    char _pad_1AFC[0x4]; // offset 0x1AFC
};
