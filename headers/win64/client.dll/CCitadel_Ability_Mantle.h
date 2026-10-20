#pragma once

class CCitadel_Ability_Mantle : public C_CitadelBaseAbility /*0x0*/  // sizeof 0x1770, align 0x8 [vtable] (client)
{
public:
    char _pad_0000[0x16E0]; // offset 0x0
    float32 m_flVertOffset; // offset 0x16E0, size 0x4, align 4
    float32 m_flHorizGap; // offset 0x16E4, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x16E8, size 0xC, align 4
    VectorWS m_vTargetPos; // offset 0x16F4, size 0xC, align 4
    QAngle m_angFacing; // offset 0x1700, size 0xC, align 4
    int32 m_nMantleTypeIndex; // offset 0x170C, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x1710, size 0x4, align 255
    GameTime_t m_flAutoMantlePushStartTime; // offset 0x1714, size 0x4, align 255
    GameTime_t m_flAutoMantleLastPushTime; // offset 0x1718, size 0x4, align 255
    VectorWS m_vAutoMantleLastPushPos; // offset 0x171C, size 0xC, align 4
    char _pad_1728[0x48]; // offset 0x1728
};
