#pragma once

class CSplineConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x5B0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x550]; // offset 0x0
    Vector m_vAnchorOffsetRestore; // offset 0x550, size 0xC, align 4
    CHandle< CBaseEntity > m_hSplineEntity; // offset 0x55C, size 0x4, align 4
    IPhysicsBody* m_pSplineBody; // offset 0x560, size 0x8, align 8 | MPhysPtr
    bool m_bEnableLateralConstraint; // offset 0x568, size 0x1, align 1
    bool m_bEnableVerticalConstraint; // offset 0x569, size 0x1, align 1
    bool m_bEnableAngularConstraint; // offset 0x56A, size 0x1, align 1
    bool m_bEnableLimit; // offset 0x56B, size 0x1, align 1
    bool m_bFireEventsOnPath; // offset 0x56C, size 0x1, align 1
    char _pad_056D[0x3]; // offset 0x56D
    float32 m_flLinearFrequency; // offset 0x570, size 0x4, align 4
    float32 m_flLinarDampingRatio; // offset 0x574, size 0x4, align 4
    float32 m_flJointFriction; // offset 0x578, size 0x4, align 4
    float32 m_flTransitionTime; // offset 0x57C, size 0x4, align 4
    char _pad_0580[0x10]; // offset 0x580
    VectorWS m_vPreSolveAnchorPos; // offset 0x590, size 0xC, align 4 | MNotSaved
    GameTime_t m_StartTransitionTime; // offset 0x59C, size 0x4, align 255
    Vector m_vTangentSpaceAnchorAtTransitionStart; // offset 0x5A0, size 0xC, align 4
    char _pad_05AC[0x4]; // offset 0x5AC
};
