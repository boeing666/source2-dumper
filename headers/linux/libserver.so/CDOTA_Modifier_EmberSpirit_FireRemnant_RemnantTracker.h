#pragma once

class CDOTA_Modifier_EmberSpirit_FireRemnant_RemnantTracker : public CDOTA_Buff /*0x0*/  // sizeof 0x1AB0, align 0xFF [vtable] (server)
{
public:
    char _pad_0000[0x1A78]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vActiveRemnants; // offset 0x1A78, size 0x18, align 8
    CUtlVector< CHandle< CBaseEntity > > m_vTrackingDelayedRemnants; // offset 0x1A90, size 0x18, align 8
    float32 shard_charge_radius; // offset 0x1AA8, size 0x4, align 4
    char _pad_1AAC[0x4]; // offset 0x1AAC
};
