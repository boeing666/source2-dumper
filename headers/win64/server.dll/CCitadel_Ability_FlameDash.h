#pragma once

class CCitadel_Ability_FlameDash : public CCitadelBaseAbility /*0x0*/  // sizeof 0x12B0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0xF70, size 0x18, align 8
    CCitadelAutoScaledTime m_flDashEndTime; // offset 0xF88, size 0x18, align 255 | MNetworkEnable
    bool m_bIsSpeedBursting; // offset 0xFA0, size 0x1, align 1 | MNetworkEnable
    char _pad_0FA1[0x30F]; // offset 0xFA1
};
