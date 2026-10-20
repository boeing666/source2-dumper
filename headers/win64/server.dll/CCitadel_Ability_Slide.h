#pragma once

class CCitadel_Ability_Slide : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1568, align 0x8 [vtable] (server) {MAbilityDynamicValuesSuppressCacheWhileActive}
{
public:
    char _pad_0000[0x1500]; // offset 0x0
    CCitadelAutoScaledTime m_flGroundDashSlideTime; // offset 0x1500, size 0x18, align 255
    GameTime_t m_flSlowGetupStartTime; // offset 0x1518, size 0x4, align 255
    bool m_bShouldTriggerSlowGetup; // offset 0x151C, size 0x1, align 1
    bool m_bWantsSlide; // offset 0x151D, size 0x1, align 1
    bool m_bAirborneWhenDuckPressed; // offset 0x151E, size 0x1, align 1
    bool m_bIsSliding; // offset 0x151F, size 0x1, align 1
    bool m_bSlideIsSticky; // offset 0x1520, size 0x1, align 1
    char _pad_1521[0x3]; // offset 0x1521
    float32 m_flSpeedAdjust; // offset 0x1524, size 0x4, align 4
    GameTime_t m_flDuckPressedTime; // offset 0x1528, size 0x4, align 255
    GameTime_t m_flSlideChangeTime; // offset 0x152C, size 0x4, align 255
    GameTime_t m_flSlidingOnFlatStartTime; // offset 0x1530, size 0x4, align 255
    int32 m_nJumpsThisSlideSession; // offset 0x1534, size 0x4, align 4
    GameTime_t m_flOnGroundStartTime; // offset 0x1538, size 0x4, align 255
    GameTime_t m_flDashSlideStartTime; // offset 0x153C, size 0x4, align 255
    bool m_bStartedSlideViaProbeSlope; // offset 0x1540, size 0x1, align 1
    char _pad_1541[0x3]; // offset 0x1541
    GameTick_t m_nForcedAllowRestartSlideTick; // offset 0x1544, size 0x4, align 255
    HeroID_t m_unHeroID; // offset 0x1548, size 0x4, align 255
    ParticleIndex_t m_nSlideEffectIndex; // offset 0x154C, size 0x4, align 255
    char _pad_1550[0x18]; // offset 0x1550
};
