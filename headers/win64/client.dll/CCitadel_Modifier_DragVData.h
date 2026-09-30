#pragma once

class CCitadel_Modifier_DragVData : public CCitadel_Modifier_LinkVData /*0x0*/  // sizeof 0x870, align 0x8 [vtable] (client) {MGetKV3ClassDefaults}
{
public:
    char _pad_0000[0x840]; // offset 0x0
    EDragOffsetBasis m_eOffsetBasis; // offset 0x840, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0841[0x3]; // offset 0x841
    float32 m_flDragDistance; // offset 0x844, size 0x4, align 4
    float32 m_flForwardOffset; // offset 0x848, size 0x4, align 4
    float32 m_flVerticalOffset; // offset 0x84C, size 0x4, align 4
    float32 m_flHorizontalOffset; // offset 0x850, size 0x4, align 4
    EDragPullModel m_ePullModel; // offset 0x854, size 0x1, align 1 | MPropertyStartGroup
    char _pad_0855[0x3]; // offset 0x855
    float32 m_flForceDistScale; // offset 0x858, size 0x4, align 4
    float32 m_flDampingFactor; // offset 0x85C, size 0x4, align 4
    float32 m_flStuckDistance; // offset 0x860, size 0x4, align 4 | MPropertyDescription
    bool m_bChaseAtLeastSourceSpeed; // offset 0x864, size 0x1, align 1 | MPropertyDescription
    bool m_bBreakOnParentStunned; // offset 0x865, size 0x1, align 1 | MPropertyStartGroup MPropertyDescription
    bool m_bZDownOnly; // offset 0x866, size 0x1, align 1 | MPropertyDescription
    bool m_bLeaveGroundOnlyWhenPullingUp; // offset 0x867, size 0x1, align 1 | MPropertyDescription
    bool m_bApplyDragStateFlagsToEnemies; // offset 0x868, size 0x1, align 1 | MPropertyDescription
    bool m_bZeroVelocityOnEnd; // offset 0x869, size 0x1, align 1 | MPropertyDescription
    char _pad_086A[0x6]; // offset 0x86A
};
