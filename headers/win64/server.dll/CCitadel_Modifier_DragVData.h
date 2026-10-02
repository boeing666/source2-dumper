#pragma once

class CCitadel_Modifier_DragVData : public CCitadel_Modifier_LinkVData /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x870]; // offset 0x0
    EDragOffsetBasis m_eOffsetBasis; // offset 0x870, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0871[0x3]; // offset 0x871
    float32 m_flDragDistance; // offset 0x874, size 0x4, align 4
    float32 m_flForwardOffset; // offset 0x878, size 0x4, align 4
    float32 m_flVerticalOffset; // offset 0x87C, size 0x4, align 4
    float32 m_flHorizontalOffset; // offset 0x880, size 0x4, align 4
    EDragPullModel m_ePullModel; // offset 0x884, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0885[0x3]; // offset 0x885
    float32 m_flForceDistScale; // offset 0x888, size 0x4, align 4
    float32 m_flDampingFactor; // offset 0x88C, size 0x4, align 4
    float32 m_flStuckDistance; // offset 0x890, size 0x4, align 4 | MPropertyDescription
    bool m_bChaseAtLeastSourceSpeed; // offset 0x894, size 0x1, align 1 | MPropertyDescription
    bool m_bBreakOnParentStunned; // offset 0x895, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bZDownOnly; // offset 0x896, size 0x1, align 1 | MPropertyDescription
    bool m_bLeaveGroundOnlyWhenPullingUp; // offset 0x897, size 0x1, align 1 | MPropertyDescription
    bool m_bApplyDragStateFlagsToEnemies; // offset 0x898, size 0x1, align 1 | MPropertyDescription
    bool m_bZeroVelocityOnEnd; // offset 0x899, size 0x1, align 1 | MPropertyDescription
    char _pad_089A[0x6]; // offset 0x89A
};
