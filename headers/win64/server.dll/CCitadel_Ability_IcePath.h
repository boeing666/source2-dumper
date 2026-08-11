#pragma once

class CCitadel_Ability_IcePath : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1190, align 0x8 [vtable] (server) {MNetworkVarNames MNetworkVarNames MNetworkVarNames MNetworkVarNames}
{
public:
    char _pad_0000[0x1070]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0x1070, size 0xC, align 4
    char _pad_107C[0x4]; // offset 0x107C
    CIcePathShardGenerator m_cShardGenerator; // offset 0x1080, size 0xE8, align 255
    bool m_bIcePathing; // offset 0x1168, size 0x1, align 1 | MNetworkEnable MNetworkUserGroup
    char _pad_1169[0x3]; // offset 0x1169
    QAngle m_qLastAngles; // offset 0x116C, size 0xC, align 4 | MNetworkEnable
    Vector m_vLastVelocity; // offset 0x1178, size 0xC, align 4 | MNetworkEnable
    bool m_bFirstMovementTick; // offset 0x1184, size 0x1, align 1 | MNetworkEnable
    char _pad_1185[0x3]; // offset 0x1185
    GameTime_t m_tLingerMovementControlUntilTime; // offset 0x1188, size 0x4, align 255
    char _pad_118C[0x4]; // offset 0x118C
};
