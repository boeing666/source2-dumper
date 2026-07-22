#pragma once

class CGenericConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x608, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x510]; // offset 0x0
    bool m_bPlaceAnchorsAtConstraintTransform; // offset 0x510, size 0x1, align 1
    char _pad_0511[0x3]; // offset 0x511
    JointMotion_t m_nLinearMotionX; // offset 0x514, size 0x4, align 4
    JointMotion_t m_nLinearMotionY; // offset 0x518, size 0x4, align 4
    JointMotion_t m_nLinearMotionZ; // offset 0x51C, size 0x4, align 4
    float32 m_flLinearFrequencyX; // offset 0x520, size 0x4, align 4
    float32 m_flLinearFrequencyY; // offset 0x524, size 0x4, align 4
    float32 m_flLinearFrequencyZ; // offset 0x528, size 0x4, align 4
    float32 m_flLinearDampingRatioX; // offset 0x52C, size 0x4, align 4
    float32 m_flLinearDampingRatioY; // offset 0x530, size 0x4, align 4
    float32 m_flLinearDampingRatioZ; // offset 0x534, size 0x4, align 4
    float32 m_flMaxLinearImpulseX; // offset 0x538, size 0x4, align 4
    float32 m_flMaxLinearImpulseY; // offset 0x53C, size 0x4, align 4
    float32 m_flMaxLinearImpulseZ; // offset 0x540, size 0x4, align 4
    float32 m_flBreakAfterTimeX; // offset 0x544, size 0x4, align 4
    float32 m_flBreakAfterTimeY; // offset 0x548, size 0x4, align 4
    float32 m_flBreakAfterTimeZ; // offset 0x54C, size 0x4, align 4
    GameTime_t m_flBreakAfterTimeStartTimeX; // offset 0x550, size 0x4, align 255
    GameTime_t m_flBreakAfterTimeStartTimeY; // offset 0x554, size 0x4, align 255
    GameTime_t m_flBreakAfterTimeStartTimeZ; // offset 0x558, size 0x4, align 255
    float32 m_flBreakAfterTimeThresholdX; // offset 0x55C, size 0x4, align 4
    float32 m_flBreakAfterTimeThresholdY; // offset 0x560, size 0x4, align 4
    float32 m_flBreakAfterTimeThresholdZ; // offset 0x564, size 0x4, align 4
    float32 m_flNotifyForceX; // offset 0x568, size 0x4, align 4
    float32 m_flNotifyForceY; // offset 0x56C, size 0x4, align 4
    float32 m_flNotifyForceZ; // offset 0x570, size 0x4, align 4
    float32 m_flNotifyForceMinTimeX; // offset 0x574, size 0x4, align 4
    float32 m_flNotifyForceMinTimeY; // offset 0x578, size 0x4, align 4
    float32 m_flNotifyForceMinTimeZ; // offset 0x57C, size 0x4, align 4
    GameTime_t m_flNotifyForceLastTimeX; // offset 0x580, size 0x4, align 255
    GameTime_t m_flNotifyForceLastTimeY; // offset 0x584, size 0x4, align 255
    GameTime_t m_flNotifyForceLastTimeZ; // offset 0x588, size 0x4, align 255
    bool m_bAxisNotifiedX; // offset 0x58C, size 0x1, align 1
    bool m_bAxisNotifiedY; // offset 0x58D, size 0x1, align 1
    bool m_bAxisNotifiedZ; // offset 0x58E, size 0x1, align 1
    char _pad_058F[0x1]; // offset 0x58F
    JointMotion_t m_nAngularMotionX; // offset 0x590, size 0x4, align 4
    JointMotion_t m_nAngularMotionY; // offset 0x594, size 0x4, align 4
    JointMotion_t m_nAngularMotionZ; // offset 0x598, size 0x4, align 4
    float32 m_flAngularFrequencyX; // offset 0x59C, size 0x4, align 4
    float32 m_flAngularFrequencyY; // offset 0x5A0, size 0x4, align 4
    float32 m_flAngularFrequencyZ; // offset 0x5A4, size 0x4, align 4
    float32 m_flAngularDampingRatioX; // offset 0x5A8, size 0x4, align 4
    float32 m_flAngularDampingRatioY; // offset 0x5AC, size 0x4, align 4
    float32 m_flAngularDampingRatioZ; // offset 0x5B0, size 0x4, align 4
    float32 m_flMaxAngularImpulseX; // offset 0x5B4, size 0x4, align 4
    float32 m_flMaxAngularImpulseY; // offset 0x5B8, size 0x4, align 4
    float32 m_flMaxAngularImpulseZ; // offset 0x5BC, size 0x4, align 4
    CEntityIOOutput m_NotifyForceReachedX; // offset 0x5C0, size 0x18, align 255
    CEntityIOOutput m_NotifyForceReachedY; // offset 0x5D8, size 0x18, align 255
    CEntityIOOutput m_NotifyForceReachedZ; // offset 0x5F0, size 0x18, align 255
};
