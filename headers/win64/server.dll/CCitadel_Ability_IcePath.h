#pragma once

class CCitadel_Ability_IcePath : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1728, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1608]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0x1608, size 0xC, align 4
    char _pad_1614[0x4]; // offset 0x1614
    CIcePathShardGenerator m_cShardGenerator; // offset 0x1618, size 0xE8, align 255
    bool m_bIcePathing; // offset 0x1700, size 0x1, align 1
    char _pad_1701[0x3]; // offset 0x1701
    QAngle m_qLastAngles; // offset 0x1704, size 0xC, align 4
    Vector m_vLastVelocity; // offset 0x1710, size 0xC, align 4
    bool m_bFirstMovementTick; // offset 0x171C, size 0x1, align 1
    char _pad_171D[0x3]; // offset 0x171D
    GameTime_t m_tLingerMovementControlUntilTime; // offset 0x1720, size 0x4, align 255
    char _pad_1724[0x4]; // offset 0x1724
};
