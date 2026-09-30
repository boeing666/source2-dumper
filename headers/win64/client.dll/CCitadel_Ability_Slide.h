#pragma once

class CCitadel_Ability_Slide : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1798, align 0x8 [vtable] (client) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x1730]; // offset 0x0
    CCitadelAutoScaledTime m_flGroundDashSlideTime; // offset 0x1730, size 0x18, align 255
    GameTime_t m_flSlowGetupStartTime; // offset 0x1748, size 0x4, align 255
    bool m_bShouldTriggerSlowGetup; // offset 0x174C, size 0x1, align 1
    bool m_bWantsSlide; // offset 0x174D, size 0x1, align 1
    bool m_bAirborneWhenDuckPressed; // offset 0x174E, size 0x1, align 1
    bool m_bIsSliding; // offset 0x174F, size 0x1, align 1
    bool m_bSlideIsSticky; // offset 0x1750, size 0x1, align 1
    char _pad_1751[0x3]; // offset 0x1751
    float32 m_flSpeedAdjust; // offset 0x1754, size 0x4, align 4
    GameTime_t m_flDuckPressedTime; // offset 0x1758, size 0x4, align 255
    GameTime_t m_flSlideChangeTime; // offset 0x175C, size 0x4, align 255
    GameTime_t m_flSlidingOnFlatStartTime; // offset 0x1760, size 0x4, align 255
    int32 m_nJumpsThisSlideSession; // offset 0x1764, size 0x4, align 4
    GameTime_t m_flOnGroundStartTime; // offset 0x1768, size 0x4, align 255
    GameTime_t m_flDashSlideStartTime; // offset 0x176C, size 0x4, align 255
    bool m_bStartedSlideViaProbeSlope; // offset 0x1770, size 0x1, align 1
    char _pad_1771[0x3]; // offset 0x1771
    GameTick_t m_nForcedAllowRestartSlideTick; // offset 0x1774, size 0x4, align 255
    HeroID_t m_unHeroID; // offset 0x1778, size 0x4, align 255
    ParticleIndex_t m_nSlideEffectIndex; // offset 0x177C, size 0x4, align 255
    char _pad_1780[0x18]; // offset 0x1780
};
