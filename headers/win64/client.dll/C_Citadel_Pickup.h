#pragma once

class C_Citadel_Pickup : public CBaseAnimGraph /*0x0*/  // sizeof 0xDE0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xCA8]; // offset 0x0
    bool m_bActive; // offset 0xCA8, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    bool m_bInteractive; // offset 0xCA9, size 0x1, align 1 | MNetworkEnable MNetworkChangeCallback
    char _pad_0CAA[0x2]; // offset 0xCAA
    Vector m_vVacuumStartPos; // offset 0xCAC, size 0xC, align 4 | MNetworkEnable
    Vector m_vInitialVacuumVel; // offset 0xCB8, size 0xC, align 4 | MNetworkEnable
    CHandle< C_BaseEntity > m_hVacuumTarget; // offset 0xCC4, size 0x4, align 4 | MNetworkEnable MNetworkChangeCallback
    char _pad_0CC8[0x100]; // offset 0xCC8
    GameTime_t m_flVacuumStartTime; // offset 0xDC8, size 0x4, align 255
    VectorWS m_vVacuumPos; // offset 0xDCC, size 0xC, align 4
    float32 m_flLastFrameTime; // offset 0xDD8, size 0x4, align 4
    bool m_bVacuumFinished; // offset 0xDDC, size 0x1, align 1
    char _pad_0DDD[0x3]; // offset 0xDDD
};
