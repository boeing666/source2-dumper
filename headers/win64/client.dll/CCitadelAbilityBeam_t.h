#pragma once

struct CCitadelAbilityBeam_t  // sizeof 0x10D0, align 0xFF [vtable] (client) {MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    GameTime_t m_nActivateTime; // offset 0x8, size 0x4, align 255 | MNetworkEnable
    char _pad_000C[0x4]; // offset 0xC
    QAngle m_angBeamAngles; // offset 0x10, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_001C[0x84]; // offset 0x1C
    VectorWS m_vBeamAimPos; // offset 0xA0, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_00AC[0x84]; // offset 0xAC
    bool m_bNeedsBeamReset; // offset 0x130, size 0x1, align 1
    char _pad_0131[0x3]; // offset 0x131
    CHandle< C_BaseEntity > m_hShooter; // offset 0x134, size 0x4, align 4
    CHandle< C_CitadelPlayerPawn > m_hPlayerShooter; // offset 0x138, size 0x4, align 4
    char _pad_013C[0xF8C]; // offset 0x13C
    bool m_bEnforceLOSToShootPosition; // offset 0x10C8, size 0x1, align 1
    char _pad_10C9[0x7]; // offset 0x10C9
};
