#pragma once

class CDOTA_Modifier_EmberSpirit_FireRemnant_RemnantTracker : public CDOTA_Buff /*0x0*/  // sizeof 0x1A90, align 0xFF [vtable] (client)
{
public:
    char _pad_0000[0x1A58]; // offset 0x0
    CUtlVector< CHandle< C_BaseEntity > > m_vActiveRemnants; // offset 0x1A58, size 0x18, align 8
    CUtlVector< CHandle< C_BaseEntity > > m_vTrackingDelayedRemnants; // offset 0x1A70, size 0x18, align 8
    float32 shard_charge_radius; // offset 0x1A88, size 0x4, align 4
    char _pad_1A8C[0x4]; // offset 0x1A8C
};
