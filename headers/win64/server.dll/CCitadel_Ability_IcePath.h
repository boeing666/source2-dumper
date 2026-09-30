#pragma once

class CCitadel_Ability_IcePath : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1720, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x1600]; // offset 0x0
    VectorWS m_vInitialPosition; // offset 0x1600, size 0xC, align 4
    char _pad_160C[0x4]; // offset 0x160C
    CIcePathShardGenerator m_cShardGenerator; // offset 0x1610, size 0xE8, align 255
    bool m_bIcePathing; // offset 0x16F8, size 0x1, align 1
    char _pad_16F9[0x3]; // offset 0x16F9
    QAngle m_qLastAngles; // offset 0x16FC, size 0xC, align 4
    Vector m_vLastVelocity; // offset 0x1708, size 0xC, align 4
    bool m_bFirstMovementTick; // offset 0x1714, size 0x1, align 1
    char _pad_1715[0x3]; // offset 0x1715
    GameTime_t m_tLingerMovementControlUntilTime; // offset 0x1718, size 0x4, align 255
    char _pad_171C[0x4]; // offset 0x171C
};
