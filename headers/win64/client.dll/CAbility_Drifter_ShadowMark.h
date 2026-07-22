#pragma once

class CAbility_Drifter_ShadowMark : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x13F8, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11D8]; // offset 0x0
    CHandle< C_BaseEntity > m_hTeleportTarget; // offset 0x11D8, size 0x4, align 4 | MNetworkEnable
    bool m_bTeleported; // offset 0x11DC, size 0x1, align 1 | MNetworkEnable
    char _pad_11DD[0x3]; // offset 0x11DD
    QAngle m_qPostTeleportAngles; // offset 0x11E0, size 0xC, align 4 | MNetworkEnable MNetworkEncoder MNetworkChangeCallback
    char _pad_11EC[0x4]; // offset 0x11EC
    GameTime_t m_flExpireTime; // offset 0x11F0, size 0x4, align 255
    GameTime_t m_flTeleportedTime; // offset 0x11F4, size 0x4, align 255
    char _pad_11F8[0x200]; // offset 0x11F8
};
