#pragma once

class CCitadel_Ability_Nano_Pounce_Instant : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1748, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x16D8]; // offset 0x0
    bool m_bActive; // offset 0x16D8, size 0x1, align 1 | MNetworkEnable
    char _pad_16D9[0x3]; // offset 0x16D9
    CHandle< C_BaseEntity > m_hCurrentTarget; // offset 0x16DC, size 0x4, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hLastCastTarget; // offset 0x16E0, size 0x4, align 4 | MNetworkEnable
    Vector m_vStartPosition; // offset 0x16E4, size 0xC, align 4 | MNetworkEnable
    Vector m_vDeparturePosition; // offset 0x16F0, size 0xC, align 4 | MNetworkEnable
    char _pad_16FC[0x4]; // offset 0x16FC
    CCitadelAutoScaledTime m_flDepartureTime; // offset 0x1700, size 0x18, align 255 | MNetworkEnable
    CCitadelAutoScaledTime m_flArrivalTime; // offset 0x1718, size 0x18, align 255 | MNetworkEnable
    Vector m_vLastKnownSafePos; // offset 0x1730, size 0xC, align 4
    bool m_bStartedPhase01; // offset 0x173C, size 0x1, align 1
    bool m_bStartedPhase02; // offset 0x173D, size 0x1, align 1
    bool m_bIsFirstCastCompleted; // offset 0x173E, size 0x1, align 1 | MNetworkEnable
    char _pad_173F[0x1]; // offset 0x173F
    GameTime_t m_tDoubleCastWindow; // offset 0x1740, size 0x4, align 255 | MNetworkEnable
    char _pad_1744[0x4]; // offset 0x1744
};
