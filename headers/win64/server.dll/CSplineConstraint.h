#pragma once

class CSplineConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x5B8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x558]; // offset 0x0
    Vector m_vAnchorOffsetRestore; // offset 0x558, size 0xC, align 4
    CHandle< CBaseEntity > m_hSplineEntity; // offset 0x564, size 0x4, align 4
    IPhysicsBody* m_pSplineBody; // offset 0x568, size 0x8, align 8 | MPhysPtr
    bool m_bEnableLateralConstraint; // offset 0x570, size 0x1, align 1
    bool m_bEnableVerticalConstraint; // offset 0x571, size 0x1, align 1
    bool m_bEnableAngularConstraint; // offset 0x572, size 0x1, align 1
    bool m_bEnableLimit; // offset 0x573, size 0x1, align 1
    bool m_bFireEventsOnPath; // offset 0x574, size 0x1, align 1
    char _pad_0575[0x3]; // offset 0x575
    float32 m_flLinearFrequency; // offset 0x578, size 0x4, align 4
    float32 m_flLinarDampingRatio; // offset 0x57C, size 0x4, align 4
    float32 m_flJointFriction; // offset 0x580, size 0x4, align 4
    float32 m_flTransitionTime; // offset 0x584, size 0x4, align 4
    char _pad_0588[0x10]; // offset 0x588
    VectorWS m_vPreSolveAnchorPos; // offset 0x598, size 0xC, align 4 | MNotSaved
    GameTime_t m_StartTransitionTime; // offset 0x5A4, size 0x4, align 255
    Vector m_vTangentSpaceAnchorAtTransitionStart; // offset 0x5A8, size 0xC, align 4
    char _pad_05B4[0x4]; // offset 0x5B4
};
