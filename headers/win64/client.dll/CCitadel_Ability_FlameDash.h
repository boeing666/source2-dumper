#pragma once

class CCitadel_Ability_FlameDash : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1B20, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    CCitadelAutoScaledTime m_flDashEndTime; // offset 0x16D8, size 0x18, align 255
    bool m_bIsSpeedBursting; // offset 0x16F0, size 0x1, align 1
    char _pad_16F1[0x42F]; // offset 0x16F1
};
