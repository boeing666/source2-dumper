#pragma once

class CCitadel_Ability_Slide : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1290, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1230]; // offset 0x0
    CCitadelAutoScaledTime m_flGroundDashSlideTime; // offset 0x1230, size 0x18, align 255 | MNetworkEnable
    GameTime_t m_flSlowGetupStartTime; // offset 0x1248, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bShouldTriggerSlowGetup; // offset 0x124C, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bWantsSlide; // offset 0x124D, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bAirborneWhenDuckPressed; // offset 0x124E, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    bool m_bIsSliding; // offset 0x124F, size 0x1, align 1 | MNetworkEnable
    bool m_bSlideIsSticky; // offset 0x1250, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1251[0x3]; // offset 0x1251
    float32 m_flSpeedAdjust; // offset 0x1254, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDuckPressedTime; // offset 0x1258, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flSlideChangeTime; // offset 0x125C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flSlidingOnFlatStartTime; // offset 0x1260, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    int32 m_nJumpsThisSlideSession; // offset 0x1264, size 0x4, align 4 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flOnGroundStartTime; // offset 0x1268, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    GameTime_t m_flDashSlideStartTime; // offset 0x126C, size 0x4, align 255 | MNetworkEnable MNetworkUserGroup
    bool m_bStartedSlideViaProbeSlope; // offset 0x1270, size 0x1, align 1
    char _pad_1271[0x3]; // offset 0x1271
    ParticleIndex_t m_nSlideEffectIndex; // offset 0x1274, size 0x4, align 255
    char _pad_1278[0x18]; // offset 0x1278
};
