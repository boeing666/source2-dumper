#pragma once

class CCitadel_Ability_Mantle : public CCitadelBaseAbility /*0x0*/  // sizeof 0x1530, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x14A0]; // offset 0x0
    float32 m_flVertOffset; // offset 0x14A0, size 0x4, align 4
    float32 m_flHorizGap; // offset 0x14A4, size 0x4, align 4
    VectorWS m_vStartPos; // offset 0x14A8, size 0xC, align 4
    VectorWS m_vTargetPos; // offset 0x14B4, size 0xC, align 4
    QAngle m_angFacing; // offset 0x14C0, size 0xC, align 4
    int32 m_nMantleTypeIndex; // offset 0x14CC, size 0x4, align 4
    GameTime_t m_flStartTime; // offset 0x14D0, size 0x4, align 255
    GameTime_t m_flAutoMantlePushStartTime; // offset 0x14D4, size 0x4, align 255
    GameTime_t m_flAutoMantleLastPushTime; // offset 0x14D8, size 0x4, align 255
    VectorWS m_vAutoMantleLastPushPos; // offset 0x14DC, size 0xC, align 4
    char _pad_14E8[0x48]; // offset 0x14E8
};
