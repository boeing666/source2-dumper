#pragma once

class CSmartGoal_Door : public INavSmartGoal /*0x0*/  // sizeof 0x50, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x10]; // offset 0x0
    CHandle< CBaseEntity > m_hDoor; // offset 0x10, size 0x4, align 4
    CHandle< CBaseEntity > m_hPathCornerGoalPostDoor; // offset 0x14, size 0x4, align 4
    CModifierHandleTyped< CCitadelModifier > m_hModifierInteractionIKLock; // offset 0x18, size 0x18, align 8
    VectorWS m_vGoalPostDoor; // offset 0x30, size 0xC, align 4
    MoveType_t m_PrevMoveType; // offset 0x3C, size 0x1, align 1
    char _pad_003D[0x3]; // offset 0x3D
    float32 m_flDoorSpeed; // offset 0x40, size 0x4, align 4
    bool m_bUseAnimatedInteraction; // offset 0x44, size 0x1, align 1
    bool m_bOpenAway; // offset 0x45, size 0x1, align 1
    char _pad_0046[0x2]; // offset 0x46
    int32 m_nState; // offset 0x48, size 0x4, align 4
    bool m_bInterrupted; // offset 0x4C, size 0x1, align 1
    char _pad_004D[0x3]; // offset 0x4D
};
