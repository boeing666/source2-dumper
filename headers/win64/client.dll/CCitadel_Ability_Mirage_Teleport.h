#pragma once

class CCitadel_Ability_Mirage_Teleport : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x13A0, align 0x8 [vtable] (client) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x11F0]; // offset 0x0
    CHandle< C_BaseEntity > m_hTarget; // offset 0x11F0, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_tTeleportCompletedTime; // offset 0x11F4, size 0x4, align 255 | MNetworkEnable
    VectorWS m_vTargetPosition; // offset 0x11F8, size 0xC, align 4 | MNetworkEnable
    QAngle m_vTargetAngles; // offset 0x1204, size 0xC, align 4 | MNetworkEnable
    char _pad_1210[0x190]; // offset 0x1210
};
