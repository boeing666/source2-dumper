#pragma once

class CSplineConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x8A0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x838]; // offset 0x0
    Vector m_vAnchorOffsetRestore; // offset 0x838, size 0xC, align 4
    CHandle< CBaseEntity > m_hSplineEntity; // offset 0x844, size 0x4, align 4
    IPhysicsBody* m_pSplineBody; // offset 0x848, size 0x8, align 8 | MPhysPtr
    bool m_bEnableLateralConstraint; // offset 0x850, size 0x1, align 1
    bool m_bEnableVerticalConstraint; // offset 0x851, size 0x1, align 1
    bool m_bEnableAngularConstraint; // offset 0x852, size 0x1, align 1
    bool m_bEnableLimit; // offset 0x853, size 0x1, align 1
    bool m_bFireEventsOnPath; // offset 0x854, size 0x1, align 1
    char _pad_0855[0x3]; // offset 0x855
    float32 m_flLinearFrequency; // offset 0x858, size 0x4, align 4
    float32 m_flLinarDampingRatio; // offset 0x85C, size 0x4, align 4
    float32 m_flJointFriction; // offset 0x860, size 0x4, align 4
    float32 m_flTransitionTime; // offset 0x864, size 0x4, align 4
    char _pad_0868[0x18]; // offset 0x868
    VectorWS m_vPreSolveAnchorPos; // offset 0x880, size 0xC, align 4 | MNotSaved
    GameTime_t m_StartTransitionTime; // offset 0x88C, size 0x4, align 255
    Vector m_vTangentSpaceAnchorAtTransitionStart; // offset 0x890, size 0xC, align 4
    char _pad_089C[0x4]; // offset 0x89C
};
