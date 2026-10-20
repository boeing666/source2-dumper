#pragma once

class CCitadel_Ability_FlameDash : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1908, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x14A8]; // offset 0x0
    CUtlVector< CHandle< CBaseEntity > > m_vecHitEntities; // offset 0x14A8, size 0x18, align 8
    CCitadelAutoScaledTime m_flDashEndTime; // offset 0x14C0, size 0x18, align 255
    bool m_bIsSpeedBursting; // offset 0x14D8, size 0x1, align 1
    char _pad_14D9[0x42F]; // offset 0x14D9
};
