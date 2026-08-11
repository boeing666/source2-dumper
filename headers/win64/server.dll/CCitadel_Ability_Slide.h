#pragma once

class CCitadel_Ability_Slide : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1028, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xFC8]; // offset 0x0
    CCitadelAutoScaledTime m_flGroundDashSlideTime; // offset 0xFC8, size 0x18, align 255 | MNetworkEnable
    GameTime_t m_flSlowGetupStartTime; // offset 0xFE0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bShouldTriggerSlowGetup; // offset 0xFE4, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bWantsSlide; // offset 0xFE5, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bAirborneWhenDuckPressed; // offset 0xFE6, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bIsSliding; // offset 0xFE7, size 0x1, align 1 | MNetworkEnable
    bool m_bSlideIsSticky; // offset 0xFE8, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_0FE9[0x3]; // offset 0xFE9
    float32 m_flSpeedAdjust; // offset 0xFEC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDuckPressedTime; // offset 0xFF0, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flSlideChangeTime; // offset 0xFF4, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flSlidingOnFlatStartTime; // offset 0xFF8, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nJumpsThisSlideSession; // offset 0xFFC, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flOnGroundStartTime; // offset 0x1000, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDashSlideStartTime; // offset 0x1004, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bStartedSlideViaProbeSlope; // offset 0x1008, size 0x1, align 1
    char _pad_1009[0x3]; // offset 0x1009
    ParticleIndex_t m_nSlideEffectIndex; // offset 0x100C, size 0x4, align 255
    char _pad_1010[0x18]; // offset 0x1010
};
