#pragma once

class CSplineConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x5C0, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x560]; // offset 0x0
    Vector m_vAnchorOffsetRestore; // offset 0x560, size 0xC, align 4
    CHandle< CBaseEntity > m_hSplineEntity; // offset 0x56C, size 0x4, align 4
    IPhysicsBody* m_pSplineBody; // offset 0x570, size 0x8, align 8 | MPhysPtr
    bool m_bEnableLateralConstraint; // offset 0x578, size 0x1, align 1
    bool m_bEnableVerticalConstraint; // offset 0x579, size 0x1, align 1
    bool m_bEnableAngularConstraint; // offset 0x57A, size 0x1, align 1
    bool m_bEnableLimit; // offset 0x57B, size 0x1, align 1
    bool m_bFireEventsOnPath; // offset 0x57C, size 0x1, align 1
    char _pad_057D[0x3]; // offset 0x57D
    float32 m_flLinearFrequency; // offset 0x580, size 0x4, align 4
    float32 m_flLinarDampingRatio; // offset 0x584, size 0x4, align 4
    float32 m_flJointFriction; // offset 0x588, size 0x4, align 4
    float32 m_flTransitionTime; // offset 0x58C, size 0x4, align 4
    char _pad_0590[0x10]; // offset 0x590
    VectorWS m_vPreSolveAnchorPos; // offset 0x5A0, size 0xC, align 4 | MNotSaved
    GameTime_t m_StartTransitionTime; // offset 0x5AC, size 0x4, align 255
    Vector m_vTangentSpaceAnchorAtTransitionStart; // offset 0x5B0, size 0xC, align 4
    char _pad_05BC[0x4]; // offset 0x5BC
};
