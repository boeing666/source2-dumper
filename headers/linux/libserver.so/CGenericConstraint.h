#pragma once

class CGenericConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x8E8, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x7F0]; // offset 0x0
    bool m_bPlaceAnchorsAtConstraintTransform; // offset 0x7F0, size 0x1, align 1
    char _pad_07F1[0x3]; // offset 0x7F1
    JointMotion_t m_nLinearMotionX; // offset 0x7F4, size 0x4, align 4
    JointMotion_t m_nLinearMotionY; // offset 0x7F8, size 0x4, align 4
    JointMotion_t m_nLinearMotionZ; // offset 0x7FC, size 0x4, align 4
    float32 m_flLinearFrequencyX; // offset 0x800, size 0x4, align 4
    float32 m_flLinearFrequencyY; // offset 0x804, size 0x4, align 4
    float32 m_flLinearFrequencyZ; // offset 0x808, size 0x4, align 4
    float32 m_flLinearDampingRatioX; // offset 0x80C, size 0x4, align 4
    float32 m_flLinearDampingRatioY; // offset 0x810, size 0x4, align 4
    float32 m_flLinearDampingRatioZ; // offset 0x814, size 0x4, align 4
    float32 m_flMaxLinearImpulseX; // offset 0x818, size 0x4, align 4
    float32 m_flMaxLinearImpulseY; // offset 0x81C, size 0x4, align 4
    float32 m_flMaxLinearImpulseZ; // offset 0x820, size 0x4, align 4
    float32 m_flBreakAfterTimeX; // offset 0x824, size 0x4, align 4
    float32 m_flBreakAfterTimeY; // offset 0x828, size 0x4, align 4
    float32 m_flBreakAfterTimeZ; // offset 0x82C, size 0x4, align 4
    GameTime_t m_flBreakAfterTimeStartTimeX; // offset 0x830, size 0x4, align 255
    GameTime_t m_flBreakAfterTimeStartTimeY; // offset 0x834, size 0x4, align 255
    GameTime_t m_flBreakAfterTimeStartTimeZ; // offset 0x838, size 0x4, align 255
    float32 m_flBreakAfterTimeThresholdX; // offset 0x83C, size 0x4, align 4
    float32 m_flBreakAfterTimeThresholdY; // offset 0x840, size 0x4, align 4
    float32 m_flBreakAfterTimeThresholdZ; // offset 0x844, size 0x4, align 4
    float32 m_flNotifyForceX; // offset 0x848, size 0x4, align 4
    float32 m_flNotifyForceY; // offset 0x84C, size 0x4, align 4
    float32 m_flNotifyForceZ; // offset 0x850, size 0x4, align 4
    float32 m_flNotifyForceMinTimeX; // offset 0x854, size 0x4, align 4
    float32 m_flNotifyForceMinTimeY; // offset 0x858, size 0x4, align 4
    float32 m_flNotifyForceMinTimeZ; // offset 0x85C, size 0x4, align 4
    GameTime_t m_flNotifyForceLastTimeX; // offset 0x860, size 0x4, align 255
    GameTime_t m_flNotifyForceLastTimeY; // offset 0x864, size 0x4, align 255
    GameTime_t m_flNotifyForceLastTimeZ; // offset 0x868, size 0x4, align 255
    bool m_bAxisNotifiedX; // offset 0x86C, size 0x1, align 1
    bool m_bAxisNotifiedY; // offset 0x86D, size 0x1, align 1
    bool m_bAxisNotifiedZ; // offset 0x86E, size 0x1, align 1
    char _pad_086F[0x1]; // offset 0x86F
    JointMotion_t m_nAngularMotionX; // offset 0x870, size 0x4, align 4
    JointMotion_t m_nAngularMotionY; // offset 0x874, size 0x4, align 4
    JointMotion_t m_nAngularMotionZ; // offset 0x878, size 0x4, align 4
    float32 m_flAngularFrequencyX; // offset 0x87C, size 0x4, align 4
    float32 m_flAngularFrequencyY; // offset 0x880, size 0x4, align 4
    float32 m_flAngularFrequencyZ; // offset 0x884, size 0x4, align 4
    float32 m_flAngularDampingRatioX; // offset 0x888, size 0x4, align 4
    float32 m_flAngularDampingRatioY; // offset 0x88C, size 0x4, align 4
    float32 m_flAngularDampingRatioZ; // offset 0x890, size 0x4, align 4
    float32 m_flMaxAngularImpulseX; // offset 0x894, size 0x4, align 4
    float32 m_flMaxAngularImpulseY; // offset 0x898, size 0x4, align 4
    float32 m_flMaxAngularImpulseZ; // offset 0x89C, size 0x4, align 4
    CEntityIOOutput m_NotifyForceReachedX; // offset 0x8A0, size 0x18, align 255
    CEntityIOOutput m_NotifyForceReachedY; // offset 0x8B8, size 0x18, align 255
    CEntityIOOutput m_NotifyForceReachedZ; // offset 0x8D0, size 0x18, align 255
};
