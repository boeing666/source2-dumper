#pragma once

class CPlayer_ObserverServices : public CPlayerPawnComponent /*0x0*/  // sizeof 0x60, align 0xFF [vtable] (client) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x48]; // offset 0x0
    uint8 m_iObserverMode; // offset 0x48, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0049[0x3]; // offset 0x49
    CHandle< C_BaseEntity > m_hObserverTarget; // offset 0x4C, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    ObserverMode_t m_iObserverLastMode; // offset 0x50, size 0x4, align 4
    bool m_bForcedObserverMode; // offset 0x54, size 0x1, align 1
    char _pad_0055[0x3]; // offset 0x55
    float32 m_flObserverChaseDistance; // offset 0x58, size 0x4, align 4 | MNotSaved
    GameTime_t m_flObserverChaseDistanceCalcTime; // offset 0x5C, size 0x4, align 255 | MNotSaved
};
