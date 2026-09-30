#pragma once

class CCitadel_Ability_FlameDash : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1900, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x14A0, size 0x18, align 8
    CCitadelAutoScaledTime m_flDashEndTime; // offset 0x14B8, size 0x18, align 255
    bool m_bIsSpeedBursting; // offset 0x14D0, size 0x1, align 1
    char _pad_14D1[0x42F]; // offset 0x14D1
};
