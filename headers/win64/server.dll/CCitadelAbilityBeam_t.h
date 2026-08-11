#pragma once

struct CCitadelAbilityBeam_t  // sizeof 0xFC0, align 0xFF [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
    char _pad_0000[0x8]; // offset 0x0
    GameTime_t m_nActivateTime; // offset 0x8, size 0x4, align 255 | MNetworkEnable
    QAngle m_angBeamAngles; // offset 0xC, size 0xC, align 4 | MNetworkEnable
    VectorWS m_vBeamAimPos; // offset 0x18, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkPriority
    CHandle< CBaseEntity > m_hShooter; // offset 0x24, size 0x4, align 4
    CHandle< CCitadelPlayerPawn > m_hPlayerShooter; // offset 0x28, size 0x4, align 4
    char _pad_002C[0xF8C]; // offset 0x2C
    bool m_bEnforceLOSToShootPosition; // offset 0xFB8, size 0x1, align 1
    char _pad_0FB9[0x7]; // offset 0xFB9
};
