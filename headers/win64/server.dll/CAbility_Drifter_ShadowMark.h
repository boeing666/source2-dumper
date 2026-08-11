#pragma once

class CAbility_Drifter_ShadowMark : public CCitadelBaseAbility /*0x0*/  // sizeof 0x11A0, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF70]; // offset 0x0
    Vector m_vLastValidTeleportPosition; // offset 0xF70, size 0xC, align 4
    CHandle< CBaseEntity > m_hTeleportTarget; // offset 0xF7C, size 0x4, align 4 | MNetworkEnable
    bool m_bTeleported; // offset 0xF80, size 0x1, align 1 | MNetworkEnable
    char _pad_0F81[0x3]; // offset 0xF81
    QAngle m_qPostTeleportAngles; // offset 0xF84, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_0F90[0x4]; // offset 0xF90
    GameTime_t m_flExpireTime; // offset 0xF94, size 0x4, align 255
    GameTime_t m_flTeleportedTime; // offset 0xF98, size 0x4, align 255
    char _pad_0F9C[0x204]; // offset 0xF9C
};
