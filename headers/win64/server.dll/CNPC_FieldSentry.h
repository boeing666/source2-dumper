#pragma once

class CNPC_FieldSentry : public CNPC_SimpleAnimatingAI /*0x0*/  // sizeof 0xC60, align 0x10 [vtable] (server) {MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xC1C]; // offset 0x0
    float32 m_flAimPitch; // offset 0xC1C, size 0x4, align 4 | MNetworkEnable MNotSaved
    GameTime_t m_flNextAttackTime; // offset 0xC20, size 0x4, align 255 | MNotSaved
    float32 m_flAttackCone; // offset 0xC24, size 0x4, align 4
    float32 m_flAttackDelay; // offset 0xC28, size 0x4, align 4
    GameTime_t m_flLastAlertSound; // offset 0xC2C, size 0x4, align 255 | MNotSaved
    float32 m_flTrackingSpeed; // offset 0xC30, size 0x4, align 4
    float32 m_flDeployTime; // offset 0xC34, size 0x4, align 4
    char _pad_0C38[0x4]; // offset 0xC38
    float32 m_flLifeTime; // offset 0xC3C, size 0x4, align 4
    char _pad_0C40[0x2]; // offset 0xC40
    bool m_bHadEnemy; // offset 0xC42, size 0x1, align 1 | MNotSaved
    bool m_bLockedOn; // offset 0xC43, size 0x1, align 1
    char _pad_0C44[0x10]; // offset 0xC44
    float32 m_flAttackRange; // offset 0xC54, size 0x4, align 4 | MNetworkEnable MNotSaved
    char _pad_0C58[0x8]; // offset 0xC58
};
