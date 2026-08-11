#pragma once

class CCitadel_Ability_Mirage_Teleport : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1138, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0xF88]; // offset 0x0
    CHandle< CBaseEntity > m_hTarget; // offset 0xF88, size 0x4, align 4 | MNetworkEnable
    GameTime_t m_tTeleportCompletedTime; // offset 0xF8C, size 0x4, align 255 | MNetworkEnable
    VectorWS m_vTargetPosition; // offset 0xF90, size 0xC, align 4 | MNetworkEnable
    QAngle m_vTargetAngles; // offset 0xF9C, size 0xC, align 4 | MNetworkEnable
    char _pad_0FA8[0x190]; // offset 0xFA8
};
