#pragma once

class CDOTA_Modifier_Kez_Katana_Bleed : public CDOTA_Buff /*0x0*/  // sizeof 0x1B00, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AF8]; // offset 0x0
    int32 m_nDamagePerTick; // offset 0x1AF8, size 0x4, align 4
    ParticleIndex_t m_nBleedFXIndex; // offset 0x1AFC, size 0x4, align 255
};
