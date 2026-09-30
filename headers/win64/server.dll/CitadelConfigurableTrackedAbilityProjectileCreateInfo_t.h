#pragma once

struct CitadelConfigurableTrackedAbilityProjectileCreateInfo_t : public CitadelAbilityProjectileCreateInfo_t /*0x0*/  // sizeof 0x1C8, align 0xFF (server)
{
    char _pad_0000[0x130]; // offset 0x0
    CCitadelProjectileTrackingParams m_TrackingParams; // offset 0x130, size 0x90, align 8
    CHandle< CBaseEntity > m_hTrackedTarget; // offset 0x1C0, size 0x4, align 4
    char _pad_01C4[0x4]; // offset 0x1C4
};
