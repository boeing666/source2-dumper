#pragma once

class CPhysWheelConstraint : public CPhysConstraint /*0x0*/  // sizeof 0x538, align 0x8 [vtable] (server)
{
public:
    char _pad_0000[0x500]; // offset 0x0
    float32 m_flSuspensionFrequency; // offset 0x500, size 0x4, align 4
    float32 m_flSuspensionDampingRatio; // offset 0x504, size 0x4, align 4
    float32 m_flSuspensionHeightOffset; // offset 0x508, size 0x4, align 4
    bool m_bEnableSuspensionLimit; // offset 0x50C, size 0x1, align 1
    char _pad_050D[0x3]; // offset 0x50D
    float32 m_flMinSuspensionOffset; // offset 0x510, size 0x4, align 4
    float32 m_flMaxSuspensionOffset; // offset 0x514, size 0x4, align 4
    bool m_bEnableSteeringLimit; // offset 0x518, size 0x1, align 1
    char _pad_0519[0x3]; // offset 0x519
    float32 m_flMinSteeringAngle; // offset 0x51C, size 0x4, align 4
    float32 m_flMaxSteeringAngle; // offset 0x520, size 0x4, align 4
    float32 m_flSteeringAxisFriction; // offset 0x524, size 0x4, align 4
    float32 m_flSpinAxisFriction; // offset 0x528, size 0x4, align 4
    CHandle< CBaseEntity > m_hSteeringMimicsEntity; // offset 0x52C, size 0x4, align 4
    char _pad_0530[0x8]; // offset 0x530
};
