#pragma once

class CDOTA_Modifier_EmberSpirit_FireRemnant_RemnantTracker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AE0, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1AA8]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vActiveRemnants; // offset 0x1AA8, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vTrackingDelayedRemnants; // offset 0x1AC0, size 0x18, align 8
    float32 shard_charge_radius; // offset 0x1AD8, size 0x4, align 4
    char _pad_1ADC[0x4]; // offset 0x1ADC
};
