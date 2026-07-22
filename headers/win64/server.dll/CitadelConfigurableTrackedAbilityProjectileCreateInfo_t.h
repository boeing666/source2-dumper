#pragma once

struct CitadelConfigurableTrackedAbilityProjectileCreateInfo_t : public CitadelAbilityProjectileCreateInfo_t /*0x0*/  // sizeof 0xF8, align 0xFF (server)
{
    char _pad_0000[0x60]; // offset 0x0
    CCitadelProjectileTrackingParams m_TrackingParams; // offset 0x60, size 0x90, align 8
    CHandle< CBaseEntity > m_hTrackedTarget; // offset 0xF0, size 0x4, align 4
    char _pad_00F4[0x4]; // offset 0xF4
};
